clear all, close all, clc

L = 100;
N = 1000;
dx = L/N;
x = -L/2:dx:L/2;
f = 0*x;
f((L/2-L/10)/dx:(L/2+L/10)/dx) = 1;

plot (x,f)

a = 5;
y = x;
dt = .1;

for k=1:100 % time
    t = k*dt;
    for j=1:length(x)
        xi = x(j) - y;
        g = (1/(2*a*sqrt(pi*t)))*exp(-xi.^2/(4*a*a*t)); 
        u(j)  = dot(g,f)*dx; % convolution, L2 norm of f and g
    end
    plot(x,u,'r'), hold on;
    
    axis([-L/2 L/2 -.1 1.1])
    pause(0.1)
    drawnow
end
        