clear all, close all, clc
dx = 0.005;
L = 1;
x = dx:dx:L;

% f = sin(x*2*pi);

f1 = (1:1:25)/25;
f2 = (25:-1:1)/25;
f3 = -1*f1;
f4 = -1*f2;
f = [f1 f2 f3 f4 f1 f2 f3 f4];



fFS = zeros(size(x));
A0 = (2/L)*sum(f.*ones(size(x)))*dx;

plot(x,f)
set(gcf,'Position',[-1200 500 600 400])
hold on


for j = 2:2:100
    hold off
    plot(x,f,'k')
   axis([0 1 -1 1])
    fFs = A0/2;   
for n=1:j
    An = (2/L)*sum(f.*cos(2*pi*n*x/L))*dx;
    Bn = (2/L)*sum(f.*sin(2*pi*n*x/L))*dx;
    fFs = fFs + An*cos(2*pi*n*x/L) + Bn*sin(2*pi*n*x/L);
end
hold on
plot(x,fFs,'r--')
drawnow
pause(0.1)
end

    
    
    