clear all, close all, clc

sigma = 10;
beta = 8/3;
rho = 28;

y0 = [-8; 8; 27];

dt = .01;
tspan = 0:dt:10;

Y(:,1) = y0;
yk = y0;
for i=1:length(tspan)
    time = i*dt;
    ykplus1 = rk4singlestep(@(t,y)lorenz(t,y,sigma,beta,rho),dt,time,yk);
    Y = [Y ykplus1];
    yk = ykplus1;
end

plot3(Y(1,:),Y(2,:),Y(3,:))
set(gcf,'Position',[0 0 800 600])
hold on
[t,y] = ode45(@(t,y)lorenz(t,y,sigma,beta,rho),tspan,y0);
plot3(y(:,1),y(:,2),y(:,3),'r')