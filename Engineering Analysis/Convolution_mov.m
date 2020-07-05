clear all, close all, clc

s = tf('s')
lambda = 1;
sys = 1/(s+lambda);

dt = 0.1;
T = 15;
t = dt:dt:T;
u  =0*t;
u(end/3:2*end/3) = 1;
[yimp,timp] = impulse(sys,t);

tsol  =dt:dt:2*T;
xsol = 0*tsol;
figure
for k=1:length(u)
    subplot(3,1,1)
    plot(t,u,'k')
    axis([0 15 -.1 1.1])
    hold on
    plot(t(k),u(k),'ro')
    subplot(3,1,2)
    plot(timp+t(k),yimp,'k');
    axis([0 30 -.1 1.1])
    xsol(k:k-1+length(t)) = ...
        xsol(k:k-1+length(t)) ...
        + dt*u(k)*yimp';
    subplot(3,1,3)
    plot(tsol,xsol,'k')
    axis([0 30 -.1 1.1])
    pause(0.05)
    drawnow
  
end