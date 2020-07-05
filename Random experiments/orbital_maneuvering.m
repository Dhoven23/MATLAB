% init
clear all
clc
close all

% define structure of vehicle dynamic properties
Vehicle  = struct('vector_v',[0 0],'O_pos',[0 0],'vector_r',[0 0],'vector_accs', [0 0]);

% define current and target orbits for vehicle to transfer between.
Orbit1 = struct('Ap',[7e6],'Pe',[7e6],'SMa',[0]);
Orbit2 = struct('Ap',[15e6],'Pe',[15e6],'SMa',[0]);



% define universal and global constants
grav = 6.674083e-11;
n = 80000;
O = [0 0];
M1 = 6e24;
M2 = 10;
rad = 6357000;
dist = 10000000;
Thruster = 50;


% calculate initial values for orbit 1
Vecicle.O_pos = O;
[Vehicle.vector_r(1), Vehicle.vector_r(2), Vehicle.vector_v(1), ...
 Vehicle.vector_v(2)] = get_orbital_vectors...
 (Orbit1.Ap,Orbit1.Pe,Orbit1.SMa,0,M1,M2);

% compute thrust parameters


[time_of_insertion, Delta_V] = apogee_raise(Orbit1,Orbit2,M1);

        Thrust = Thruster/M2;
        burntime = Delta_V/Thrust;
        thrustbegin(1) = time_of_insertion;
        thrustend(1) = burntime + thrustbegin(1);
        
       
[time_of_circularization, Delta_V] = perigee_raise(Orbit1,Orbit2,M1);

        Thrust = Thruster/M2;
        burntime = Delta_V/Thrust;
        thrustbegin(2) = time_of_circularization + time_of_insertion;
        thrustend(2) = burntime + thrustbegin(2);



% simtime
Total_time = -3000;

dt = 0.5;
t = linspace(0,n/dt,100/dt);
j=1;
Nn = 1;

for i = 1:n
    
    
   % detect collision parameters
    
   if dist < rad
        Vehicle.vector_v
        display(Total_time)
       break
      
   else
       
   % measure scalar state variables
       
   Total_time = Total_time + dt;

   dist = sqrt(Vehicle.vector_r(1)^2 + Vehicle.vector_r(2)^2);
   Force = (M1*M2*grav)/(dist^2);
   
   acc = -Force/M2;
   
   
   % simulate forces due to thrusters
   
        if (thrustbegin(j) < Total_time)&&(Total_time < thrustend(j))
       
            thrustx = Thrust * (Vehicle.vector_v(1)/sqrt( ...
                Vehicle.vector_v(1)^2 + Vehicle.vector_v(2)^2));
            thrusty = Thrust * (Vehicle.vector_v(2)/sqrt( ...
                Vehicle.vector_v(1)^2 + Vehicle.vector_v(2)^2));
        else 
               
            thrustx = 0;
            thrusty = 0;
        end
        
        
        if (Total_time > thrustend(j)) && (j+1 < 3)
            j = j+1;
        else 
            j = j;
        end
            
     
   
        
        
    % compute acceleration components
        Vehicle.vector_accs(1)= acc * (Vehicle.vector_r(1)/dist) + thrustx;
        Vehicle.vector_accs(2)= acc * (Vehicle.vector_r(2)/dist) + thrusty;
  

   
    % compute velocity components
        Vehicle.vector_v(1)=Vehicle.vector_accs(1)*dt+ Vehicle.vector_v(1);
        Vehicle.vector_v(2)=Vehicle.vector_accs(2)*dt+ Vehicle.vector_v(2);
    
        Vehicle.vector_r(1)=Vehicle.vector_v(1) * dt + Vehicle.vector_r(1);
        Vehicle.vector_r(2)=Vehicle.vector_v(2) * dt + Vehicle.vector_r(2);
    
    % position logging
            XY(i,1) = Vehicle.vector_r(1);
            XY(i,2) = Vehicle.vector_r(2);
   end
    
    
end


% plot spaceship trajectory
plot(XY(:,1),XY(:,2),'-')
hold on
axis equal


% plot orbital body
L = linspace(0,8,100);
plot(rad*cos(L),rad*sin(L))   
xlim([-4e7,4e7]);
ylim([-4e7,4e7]);



