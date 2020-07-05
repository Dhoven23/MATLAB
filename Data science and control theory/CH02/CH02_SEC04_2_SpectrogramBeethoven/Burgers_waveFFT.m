clear all, close all, clc 
nu = 0.001;

L = 20; 
N = 1000;
dx = L/N;
x = -L/2:dx:L/2-dx;

%
kappa = (2*pi/L)*[-N/2:N/2-1];
kappa = fftshift(kappa');

%
u0 = sech(x);


%
dt = 0.025;
t = 0:dt:100*dt;
[t,u]=ode45(@(t,u)rhsBurgers(t,u,kappa,nu),t,u0);



%%
figure, h=waterfall(x,t(1:10:end),real(u(1:10:end,:)));
set(gcf,'Position',[1850 1200 800 600])
set(h, 'LineWidth',5,'FaceAlpha',.5);
colormap(flipud(jet)/1.5)
set(gca,'Fontsize',32)
xlabel('Space'); ylabel('Time'); zlabel('Magnitude')
view(5,55)

%%
figure
set(gcf,'Position',[2700 1200 800 600])
xlabel('Space, x')
ylabel('Magnitude')
hold on
set(gca,'FontSize',32)
CC = (colormap(jet(100)));
dt = 0.1;
for k = 1:100
    if(mod(k-1,10)==0)
        plot(x,real(u(k,:)),'Color',CC(k,:),'Linewidth',5)
        hold on, grid on, drawnow
        pause(0.2)
    end
end


