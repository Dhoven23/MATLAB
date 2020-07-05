clear all, close all, clc

% ODE: \ddot{x} + d*\dot{x} + k*x = u(t);
d = 5;
k = 4;
s = tf('s');
sys = 1/(s^2 + 5*s+4)
% subplot(1,2,1)
% impulse(sys)
% subplot(1,2,2)
% step(sys)

%% change damping 
for d=.1:.1:2
    sys = 1/(s^2 + d*s+k);
    step(sys)
    pause(0.1);
    hold off
end

%% change k
for k=.1:.1:2
    sys = 1/(s^2 + d*s+k);
    step(sys)
    pause(0.1);
    hold off
end

%% linsim

t = 0.1:.1:100;
u = sin(t);
x = lsim(sys,u,t);
plot(t,x)

