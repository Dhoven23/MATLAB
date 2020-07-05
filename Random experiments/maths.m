% define constants

Rh = 0.05642; % m
L = 2; % m
delta_P = 1677.2; % Pa
rho = 1000; % kg/m3
mu = 1.002e-3; % Pa*s
syms Re

% declare the system as an optimization in x(1:3), with x(1) =
% spatially/temporaly averaged velocity 'v', x(2) = Fanning friction factor,
% x(3) = Reynolds number;

x = optimvar('x',2);

% definition of friction factor
eqn1 = (Rh/L) * (delta_P/(0.5*rho*x(1)^2)) == x(2);

% definition of Reynolds number for MHR
eqn2 = 4 * Rh * x(1) * rho * (1/mu) == Re;



% define optimization structure
prob = eqnproblem;
prob.Equations.eq1 = eqn1;
prob.Equations.eq2 = eqn2;


% define boundary values
x0.x = [0 0 0];
[sol,fval,exitflag] = solve(prob,x0);

% display optimal solution. (non complex)
disp(sol.x)


