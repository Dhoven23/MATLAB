function [tau,delta_V]= perigee_raise(current_orbit,target_orbit,M)
 
G = 6.674083e-11;
u = G*M;


delta_V = sqrt(u/target_orbit.Pe)*(1 - sqrt(2*current_orbit.Pe/(current_orbit.Pe + target_orbit.Pe)));

tau = pi*sqrt((0.5*(current_orbit.Pe + target_orbit.Ap))^3/u);


end