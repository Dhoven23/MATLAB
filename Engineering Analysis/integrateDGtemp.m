clear all,close all, clc

A = 0.1;
eps = 0.25;
omega = 2*pi/10;

%% Part 1 - Initialize particle grid
dx = 0.01; % course def
xvec = 0:dx:2;
yvec = 0:dx:1;
[x0, y0] = meshgrid(xvec,yvec);

yIC(1,:,:) = x0';
yIC(2,:,:) = y0';

%% plot everything

% plot vector field
subplot(2,1,1)
dy = doublegyreVEC(0,yIC,A,eps,omega);
quiver(yIC(1,1:4:end,1:4:end),yIC(2,1:4:end,1:4:end),dy(1,1:4:end,1:4:end),dy(2,1:4:end,1:4:end))
axis([0 2 0 1]), drawnow

% plot particles
subplot(2,1,2)
plot(x0',y0','r.','LineWidth',2,'MarkerSize',4)
set(gcf,'Position',[20 20 1000 500])

%% Part 2 - Compute trajectories
dt = 0.025;
T = 15;
yin = yIC;

for i=1:T/dt
    time = i*dt;
    % plot vector field
    subplot(2,1,1)
    dy = doublegyreVEC(time,yIC,A,eps,omega);
    quiver(yIC(1,1:4:end,1:4:end),yIC(2,1:4:end,1:4:end),dy(1,1:4:end,1:4:end),dy(2,1:4:end,1:4:end))
    axis([0 2 0 1]), drawnow

    % integrate particles
    yout = rk4singlestep(@(t,y)doublegyreVEC(t,y,A,eps,omega),dt,time, yin);
    yin = yout;
    

    subplot(2,1,2)
    plot(yout(1,:),yout(2,:),'r.','LineWidth',2,'MarkerSize',4)
    axis([0 2 0 1]), drawnow
end

%reshape 3-dim array into 2-dim array
xT = reshape(yout(1,:,:),length(xvec),length(yvec));
yT = reshape(yout(2,:,:),length(xvec),length(yvec));

%% Part 3 - Compute the finite time Lyapunov
% Finite difference to compute the gradient
[dxTdx0, dxTdy0] = gradient(xT,dx,dx);
[dyTdx0, dyTdy0] = gradient(yT,dx,dx);

for i=1:length(xvec)
    for j=1:length(yvec)
        D(1,1) = dxTdx0(i,j);
        D(1,2) = dxTdy0(i,j);
        D(2,1) = dyTdx0(i,j);
        D(2,2) = dxTdx0(i,j);
        sigma(i,j) = (1/T)*sqrt(max(eig(D'*D)));
    end
end
figure
surf(x0',y0',sigma);
set(gcf,'Position',[20 20 1000 500])



