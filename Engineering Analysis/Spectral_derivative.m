clear all, close all, clc

N = 101;
L = 8*pi;
dx  =L/(N-1);
x = -L/2:dx:L/2-dx;
f = cos(x).*exp(-x.^2/25);
%% true derivative
df = -(sin(x).*exp(-x.^2/25) + (2/25)*x.*cos(x).*exp(-x.^2/25));
plot(x,df,'k','Linewidth',2)
Nx = max(size(f));
hold on

%% approximate derivative using finite difference
for k=1:length(f)-1
    dfFD(k) = (f(k+1)-f(k))/dx;
end
%% FFT derivative
dfFD(end+1) = dfFD(end);
plot(x,dfFD,'b--')
fhat = fft(f);
kap = (2*pi/L)*[-Nx/2:Nx/2-1];
kap = fftshift(kap);
dfhat = i*kap.*fhat;
dfFFT = ifft(dfhat);
plot(x,real(dfFFT),'r--')

axis([-L/2 L/2 -1 1])
legend('True Derivative','Finite difference','FFT derivative')
