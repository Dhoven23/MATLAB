clear all, close all, clc

L = 100;
N = 1001;
dx = L/(N-1);
x = -L/2:dx:L/2-dx;
f = 0*x;
f((L/2-L/10)/dx:(L/2+L/10)/dx) = 1;
fhat = fft(f);
plot (x,f)

a = 5;
y = x;
dt = .1;

for k=1:100 % time
    t = k*dt;
    Nx = max(size(f));
    kap = (2*pi/L)*[-Nx/2:Nx/2-1];
    kap = fftshift(kap);
    uhat = fhat.*exp(-(a^2)*t*kap.^2);
    u = ifft(uhat);    
    plot(x,u,'r')
    axis([-L/2 L/2 -.1 1.1])
    pause(0.1)
    drawnow
end
        