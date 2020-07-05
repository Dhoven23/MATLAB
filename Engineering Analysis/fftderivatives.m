clear all, close all, clc

n = 1024;
L = 30;
dx = L/(n);
x = -L/2:dx:L/2-dx;
f = cos(x).*exp(-x.^2/25);
df = -(sin(x).*exp(-x.^2/25) + (2/25)*x.*f);

%%
for kappa = 1:length(df) - 1
    dfFD(kappa) = (f(kappa+1)-f(kappa))/dx;
end
dfFD(end+1) = dfFD(end);

%%
fhat = fft(f);
kappa = (2*pi/L)*[-n/2:n/2-1];
kappa = fftshift(kappa);
dfhat = i*kappa.*fhat;
dfFFT = real(ifft(dfhat));

%%
plot(x,df,'k','LineWidth',1), hold on
plot(x,dfFD,'r--','Linewidth',1)
plot(x,dfFFT,'c--','LineWidth',1)
l1=legend('True Derivative','Finite Diff.','FFT Derivative')
set(gca,'Fontsize',32);
set(l1,'Fontsize',32);

