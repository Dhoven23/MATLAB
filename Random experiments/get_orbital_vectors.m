function [X, Y, Xdot, Ydot] = get_orbital_vectors(Ap,Pe,SMa_rad,tau,M1,M2)



%global constants
G = 6.674083e-11;
grav = G;
u = M1*G;
n = 10000;
%define orbital Kepler coordinates
sma = (Ap + Pe)/2;
velocity_apogee = sqrt(u*(2/Ap - 1/sma));
period = 2*pi*sqrt((sma^3)/u);

loc_AP = [-Ap*sin(SMa_rad), Ap*cos(SMa_rad)];
vel_AP = [-velocity_apogee*cos(SMa_rad), -velocity_apogee*sin(SMa_rad)];

%in case Tau input is more than one orbital period

Total_time = 0;
dt = 0.01;
Vehicle  = struct('vector_v',[vel_AP],'O_pos',[0 0],'vector_r',[loc_AP],'vector_accs', [0 0]);


for i = 1:n
    
    
   if Total_time > tau
        
       break
      
   else
       
   Total_time = Total_time + dt;

   dist = sqrt(Vehicle.vector_r(1)^2 + Vehicle.vector_r(2)^2);
   Force = (M1*M2*grav)/(dist^2);
   
   acc = -Force/M2;
   
   Vehicle.vector_accs(1) = acc * (Vehicle.vector_r(1)/dist);
   Vehicle.vector_accs(2) = acc * (Vehicle.vector_r(2)/dist);
  

   
    
   Vehicle.vector_v(1) = Vehicle.vector_accs(1)*dt + Vehicle.vector_v(1);
   Vehicle.vector_v(2) = Vehicle.vector_accs(2)*dt + Vehicle.vector_v(2);
    
   Vehicle.vector_r(1) = Vehicle.vector_v(1) * dt + Vehicle.vector_r(1);
   Vehicle.vector_r(2) = Vehicle.vector_v(2) * dt + Vehicle.vector_r(2);
    
    
 
   end
        X = Vehicle.vector_r(1);
        Y = Vehicle.vector_r(2);
        Xdot = Vehicle.vector_v(1);
        Ydot = Vehicle.vector_v(2);
        
    
end
end

