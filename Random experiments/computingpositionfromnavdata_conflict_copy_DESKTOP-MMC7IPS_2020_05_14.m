
h = [0 0 1];
k = [0 1 0];
c = [1 0 0];
d = [1 1 1.5];

x = optimvar('x',3);
eqn1 = (x(1) - h(1))^2 + (x(2) - k(1))^2 + (x(3) - c(1))^2 == d(1)^2;
eqn2 = (x(1) - h(2))^2 + (x(2) - k(2))^2 + (x(3) - c(2))^2 == d(2)^2;
eqn3 = (x(1) - h(3))^2 + (x(2) - k(3))^2 + (x(3) - c(3))^2 == d(3)^2;

prob = eqnproblem;
prob.Equations.eq1 = eqn1;
prob.Equations.eq2 = eqn2;
prob.Equations.eq3 = eqn3;

%show(prob)

x0.x = [0 0 0];
[sol,fval,exitflag] = solve(prob,x0);
disp(sol.x)

plot3([0 sol.x(1)], [0 sol.x(2)], [0 sol.x(3)]);
grid on
  




