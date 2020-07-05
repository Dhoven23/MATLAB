clear all, close all, clc

w = 2*pi; % init vel
d = 0.07; % damping

A = [0 1; -w^2 -2*d*w];

dt = 0.01;
T = 10;

x0 = [2; 0];
[t,x] = ode45(@(t,x) A*x, 0:dt:T, x0);

figure
set(gcf,'Position',[2700 1200 800 600])
xlabel('Space, x')
plot(t,x)
