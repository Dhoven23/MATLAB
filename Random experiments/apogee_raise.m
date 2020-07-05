function [tau,delta_V]= apogee_raise(current_orbit,target_orbit,M)
 
G = 6.674083e-11;
u = G*M;

if current_orbit.Ap == current_orbit.Pe
    delta_V = 0;
else
    delta_V = circularize(current_orbit.Ap, current_orbit.Pe,M)
    tau = target_orbit.Ap;
end

delta_V = sqrt(u/current_orbit.Pe)*(sqrt(2*target_orbit.Pe/(current_orbit.Pe + target_orbit.Pe))-1) + delta_V;

tau = pi*sqrt((0.5*(current_orbit.Pe+current_orbit.Ap))^3/u);


end