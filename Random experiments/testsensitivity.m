clear all, close all, clc

sigma = 10;
beta = 8/3;
rho = 28;

y0 = [-8; 8; 27];
epsilon = 0.0001*ones(3,1);

dt = .01;
tspan = 0:dt:10;

[t,y] = ode45(@(t,y)lorenz(t,y,sigma,beta,rho),tspan,y0);
plot3(y(:,1),y(:,2),y(:,3),'r','LineWidth',2)
set(gcf,'Position',[1800 1300 800 600])
hold on
[t,y2] = ode45(@(t,y)lorenz(t,y,sigma,beta,rho),tspan,y0+epsilon);
plot3(y2(:,1),y2(:,2),y2(:,3),'b','LineWidth',2)

legend('y0','y0+epsilon')

for i = 1:1001
    diff(i) = norm(y2(i,:) - y(i,:));
end

figure
plot(diff)
set(gcf,'Position',[2700 1300 800 600])