clear all, close all, clc
A = [0 1; -1 -.1];
B = [0; 1];
C = eye(2);
D = [0; 0];

sys = ss(A, B, C, D);

t = 0:0.01:50;
u = 0*t;
u(1001:2000) = (1:1000)/10000;
u(2001:3000) = (1000-(1:1000))/10000;
plot(t,u)
set(gcf,'Position',[300 40 800 600])
lsim(sys,u,t)

