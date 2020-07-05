clear all, close all, clc

t = 0:0.02:10;

x = exp(-t) + exp(-2*t);
%plot(t,x); hold on

y0 = [-2; 3; -1];
A = [0 1 0; 0 0 1; -1 -3 -1];
[T,D] = eig(A)
eig(A)
[t,y] = ode45(@(t,y)A*y, t,y0);
plot(t,y(:,1),'r--')
legend('Analytic','ODE45')
xlabel('Time');
ylabel('Solution x');


