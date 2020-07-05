clear all, close all, clc


sigma = 10;
beta = 8/3;
rho = 28;

y0 = [0 0 0];
xvec = -20:2:20;
yvec = -20:2:20;
zvec = -20:2:20;
[x0, y0, z0] = meshgrid(xvec,yvec,zvec);

yIC(1,:,:,:) = x0;
yIC(2,:,:,:) = y0;
yIC(3,:,:,:) = z0;

plot3(yIC(1,:),yIC(2,:),yIC(3,:),'r','Linewidth',2)
set(gcf,'Position',[2300 1300 800 600])
axis([-40 40 -40 40 -40 40])
view(20,40)
drawnow

%%
dt = 0.01;
duration = 4;
tspan = [0,duration];
L = duration/dt;
yparticles = yIC;

for step = 1:L
    time = step*dt;
    for i=1:length(xvec)
        for j=1:length(yvec)
            for k=1:length(zvec)
                yin = yparticles(:,i,j,k);
                yout =  rk4singlestep(@(t,y)lorenz(t,y,sigma,beta,rho),dt,time,yin);
                yparticles(:,i,j,k) = yout;
            end
        end
    end

    plot3(yparticles(1,:),yparticles(2,:),yparticles(3,:),'r.','Linewidth',2,'Markersize',1)
  
    axis([-40 40 -40 40 -40 40])
    view(20,40)
    drawnow
end
