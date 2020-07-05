clear all, close all, clc


dt = .001;
t=0:dt:1;
fclean = sin(2*pi*50*t) + sin(2*pi*120*t);
f = fclean + 2.5*randn(size(t));

%% compute the FFT 
figure; set(gcf,'Position',[0 0 1700 750])
subplot(3,1,1)
plot(t,f,'c','Linewidth',3), hold on
plot(t,fclean,'k','LineWidth',2.5)
title('Acquired signal')
l1 = legend('Noisy','clean'); set(l1,'FontSize',16)
ylim([-10 10]); set(gca, 'Fontsize',16)


%%
n = length(t);
fhat = fft(f,n);
PSD = fhat.*conj(fhat)/n;
freq = 1/(dt*n)*(0:n);
L = 1:floor(n/2);

subplot(3,1,3); set(gca, 'Fontsize', 16)

plot(freq(L),PSD(L),'c','Linewidth',3),hold on
title('Fourier domain, freq. vs. amplitude')
set(gca,'Fontsize',16)

%%
indices = PSD>50;
PSDclean = PSD.*indices;
fhat = indices.*fhat;
ffilt = ifft(fhat);

plot(freq(L),PSDclean(L),'-','Color',[.5 .1 0], 'LineWidth',2.5)
l1 = legend('Noisy','Filtered'); set(l1,'Fontsize',16)

subplot(3,1,2); set(gca,'Fontsize',16)
plot(t,ffilt,'-','Color',[.5 .1 0],'Linewidth',2.5)
l1 = legend('Filtered'); set(l1,'Fontsize',16)
title('filtered signal with FFT')
ylim([-10 10]); set(gca,'Fontsize',16)
