clear all, close all, clc

s = tf('s');
G = 1/(s^2+5*s+4)
% figure
% bode(G)

t = 0.01:.01:100;
u  =sin(t);
y = lsim(G,u,t);
figure
plot(t,y,'k')

w = 1;
s = i*w;
Gofs = 1/(s^2+5*s+4);
mag = abs(Gofs);
phase = angle(Gofs);
hold on
plot(t,mag*sin(t*w+phase),'r--')