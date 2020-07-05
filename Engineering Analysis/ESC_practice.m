clear all, close all, clc

J = @(u,t)(25-(5-(u)).^2);

plot(-5:.1:15,J(-5:.1:15,0),'w')
xlabel('u'); ylabel('J')
set(gca,'color','k','xcolor','w','ycolor','w')
set(gcf,'color','k','Position',[2700 800 800 600])

y0 = J(0,0);
u = 0;

freq = 10*2*pi;
dt = 1/freq;
T = 10;
A = 1;
omega = 10*2*pi;
phase = 0;
K = 5;

butterorder=1;
butterfreq=2;
[b,a] = butter(butterorder,butterfreq*dt*2,'high')
ys = zeros(1,butterorder+1)+y0;
HPF=zeros(1,butterorder+1);

uhat=u;
for i=1:T/dt
    t = (i-1)*dt;
    yvals(i)=J(u,t);
    
    for k=1:butterorder
        ys(k) = ys(k+1);
        HPF(k) = HPF(k+1);
    end
    ys(butterorder+1) = yvals(i);
    HPFnew = 0;
    for k=1:butterorder+1
        HPFnew = HPFnew + b(k)*ys(butterorder+2-k);
    end
    for k=2:butterorder+1
        HPFnew = HPFnew  - a(k)*HPF(butterorder+2-k);
    end
    HPF(butterorder+1) = HPFnew;
    
    xi = HPFnew*sin(omega*t + phase);
    uhat = uhat + xi*K*dt;
    u = uhat + A*sin(omega*t + phase);
    uhats(i) = uhat;
    uvals(i) = u;
end
t = dt:dt:T;

figure
ax1=subplot(2,1,1)
plot(t',uvals','w','Linewidth',2);
hold on
plot(t,uhats,'r','Linewidth',2)
l1=legend('$u$','$\hat{y}$');
set(l1,'color','k','textcolor','w')
set(l1,'interpreter','latex','Location','NorthWest')
grid on
set(gca,'Color','k','xcolor','w','ycolor','w')
ax2=subplot(2,1,2)
plot(t,yvals,'w','Linewidth',2)
ylim([-1 26])
grid on
set(gca,'Color','k','xcolor','w','ycolor','w')
linkaxes([ax1 ax2],'x')

        