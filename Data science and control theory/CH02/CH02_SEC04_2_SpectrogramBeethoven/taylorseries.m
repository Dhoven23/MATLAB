clear all, close all, clc
x = -10:.01:10;
y = sin(x);
plot(x,y,'k','Linewidth',2)
axis([-10 10 -10 10])
grid on, hold on

%% First order Taylor expansion
P = [1 0];
yT1 = polyval(P,x);
plot(x,yT1, 'b--','Linewidth', 1.5)

%% Third order taylor expansion
P = [-1/factorial(3) 0 1 0];
yT3 = polyval(P,x);
plot(x,yT3, 'r--','Linewidth', 1.5)

%% Fifth order taylor expansion
P = [-1/factorial(5) 0 -1/factorial(3) 0 1 0];
yT5 = polyval(P,x);
plot(x,yT5, 'm--','Linewidth', 1.5)

%% Seventh order taylor expansion
P = [-1/factorial(7) 0 -1/factorial(5) 0 -1/factorial(3) 0 1 0];
yT7 = polyval(P,x);
plot(x,yT7, 'g--','Linewidth', 1.5)

legend('sin(x)','1st order', '3nd order', '5rd order', '7th order')