clear all, close all, clc 
a = 1;
L = 100; 
N = 1000;
dx = L/N;
x = -L/2:dx:L/2-dx;

%
kappa = (2*pi/L)*[-N/2:N/2-1];
kappa = fftshift(kappa);

%
u0 = 0*x;
u0((L/2 - L/10)/dx:(L/2 + L/10)/dx) = 1;

%
t = 0:0.1:20;
[t,uhat]=ode45(@(t,uhat)rhsHeat(t,uhat,kappa,a),t,fft(u0));

for k = 1:length(t)
    u(k,:) = ifft(uhat(k,:));
end

%%
figure, h=waterfall(x,t(1:10:end),(u(1:10:end,:)));
set(h, 'LineWidth',5,'FaceAlpha',.5);
colormap(flipud(jet)/1.5)
set(gca,'Fontsize',32)
xlabel('Space'); ylabel('Time'); zlabel('Temperature')
view(5,55)
%%
figure
xlabel('Space, x')
ylabel('Temperature, u(x,t)')
hold on
set(gca,'FontSize',32)
CC = (colormap(jet(200)));
dt = 0.1;
for k = 1:200
    u(k,:) = ifft(uhat(k,:));
    if(mod(k-1,10)==0)
        plot(x,u(k,:),'Color',CC(k,:),'Linewidth',5)
        ylim([-.1 1.2])
        hold on, grid on, drawnow
        pause(0.2)
    end
end


