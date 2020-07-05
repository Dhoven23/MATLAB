clear all, close all, clc


sigma = 10;
beta = 8/3;
rho = 28;

% y0 = [0 0 0];
% xvec = -20:5:20;
% yvec = -20:5:20;
% zvec = -20:5:20;
%Initial cond #1

y0=[-8;8;27];
xvec = -1:.1:1;
yvec = -1:.1:1;
zvec = -1:.1:1;
% initial cond #2

% y0=[-8;8;27];
% xvec = -.1:.05:.1;
% yvec = -.1:.05:.1;
% zvec = -.1:.05:.1;
%initial cond #3
[x0, y0, z0] = meshgrid(xvec,yvec,zvec);

yIC(1,:,:,:) = x0;
yIC(2,:,:,:) = y0;
yIC(3,:,:,:) = z0;

plot3(yIC(1,:),yIC(2,:),yIC(3,:),'r','Linewidth',2)
axis([-40 40 -40 40 -40 40])
view(20,40)
drawnow


%%
dt = 0.01;
duration = 50;
tspan = [0,duration];
L = duration/dt;
yin = yIC;

for step = 1:L
    time = step*dt;
    yout = rk4singlestep(@(t,y)lorenz3D(t,y,sigma,beta,rho),dt,time,yin);
    yin = yout;
    plot3(yout(1,:),yout(2,:),yout(3,:),'r.','Linewidth',2,'Markersize',1)
  
    axis([-40 40 -40 40 -25 55])
    %view(20,40)
    view(20+200*step/L,40);
    drawnow
    
end
