%function TOD = Compute_TOD(Orbit, Target, M2)
clc
clear all


rad = 6357000;
    X = rad*cos(pi/4);
    Y = rad*sin(pi/4);
    M1 = 6e24;
    G = 6.674083e-11; 
    u = G*M1;
    M2 = 10;
    Delta_V = 3000
    dist = 10e10;
    grav = G;
% define initial orbit    
Orbit = struct('Ap',[7e6],'Pe',[7e6],'SMa_rad',[0]);
    
        Thrust = 5 ;
        burntime = Delta_V/Thrust;
        thrustbegin = 100;
        thrustend = burntime + thrustbegin;
        
    Ap = Orbit.Ap;
    Pe = Orbit.Pe;
    SMa_rad = Orbit.SMa_rad;
    tau = 0;

% call initial orbital parameters
[rx, ry, vx, vy] = get_orbital_vectors(Ap,Pe,SMa_rad,tau,M1,M2);
        
    
% define loop consts
Total_time = 0;
dt = 5;
n = 10000;
m = 20;
j=1;
Error = 1;
Rx = rx; 
Ry = ry;
T = [10 200 300 400]

        
     
   
for j = 1:4
     
        for i = 1:n
    
                dist = sqrt(rx^2 + ry^2);
                Force = (M1*M2*grav)/(dist^2);
   
                acc = -Force/M2;
   
            % detect collision parameters
    
            if dist < rad
                
                fx = rx
                fy = ry
                plot(XY(:,1),XY(:,2),'-')
                hold on
                axis equal  
            break
      
            else
       
                % measure scalar state variables
       
               

               
   
   % simulate forces due to thrusters
   
        if (T(j) < Total_time)&&(Total_time < burntime + T(j))
           
            thrustx = Thrust * (vx/sqrt( ...
                vx^2 + vy^2));
            thrusty = Thrust * (vy/sqrt( ...
                vx^2 + vy^2));
        else 
               
            thrustx = 0;
            thrusty = 0;
        end
            
     
   
        
        
    % compute acceleration components
        ax= acc * (rx/dist) - thrustx;
        ay= acc * (ry/dist) - thrusty;
  

   
    % compute velocity components
        vx = ax * dt + vx;
        vy = ay * dt + vy;
    
        rx = vx * dt + rx;
        ry = vy * dt + ry;
    
    % position logging
            XY(i,1) = rx;
            XY(i,2) = ry;
            Total_time = Total_time + dt;

           
            end
       
    
    
        end
   
end
    % plot spaceship trajectory

% plot orbital body
L = linspace(0,8,100);
plot(rad*cos(L),rad*sin(L))   
xlim([-4e7,4e7]);
ylim([-4e7,4e7]);

        
        
      
    
    
    
    
