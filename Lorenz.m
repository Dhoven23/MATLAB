

function lorenz

s = 10; % enter sigma value here
b = 8/3; % enter beta value here
p = 28; % enter rho value here

y = @(t,x) [-s*x(1) + s*x(2); x(1)*(p-x(3))-x(2); -b*x(3) + x(1)*x(2)];
% you are responsible for entering the Lorenz system here
% see IVP Solver code if you need a setup to mimic

T = [0 50]; % this is allowing system to run for a set interval of time; no need to edit
x0 = [0 1 0]; % this is the initial condition; this can and should be edited

[t,x] = ode45(y,T,x0); % ODE solver; do not edit

figure(1)
plot3(x(:,1),x(:,2),x(:,3),'r') % plots 3D solution for entered conditions

grid on % displays grid lines; helps significantly to see what is going on

end