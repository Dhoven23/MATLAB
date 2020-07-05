clear all, close all, clc
[y,Fs] = audioread('johns_newdata.wav');

Fn  = Fs/2;    
dt = 0.0001

j = 1;

for i = 1:length(y)
    if y(i) ~= 0
        
        x(j) = y(i);
        j = j + 1;
        
    end
        
end


t = 0:1/Fs:100;

figure(1)
spectrogram(x,128,120,128,1e3,'yaxis')
colormap bone
xlabel('time (seconds)');
i = 1; j  = 1; cout = 1;


% for i = 1:184
%     for j = 1:1000
%         z(j) = x(cout+j);
%     end
%     cout = cout + 1000;
%  
%    
%     n = 1000;
% fhat = fft(z,n);
% PSD = fhat.*conj(fhat)/n;
% freq = 1/(dt*n)*(0:n);
% L = 1:floor(n/2);
% figure(1)
% 
% 
% if i < 2
%         %sound(x,(Fs+800))
%     end
% plot(freq(L),PSD(L),'c','Linewidth',3)
% title('Fourier domain, freq. vs. amplitude','Color','w')
% set(gca,'Fontsize',16)  
% set(gcf,'Position',[0 0 1920 1080])
% ylim([0 2]); 
% xlim([0 2000]);
%   set(gca,'Color','k')
%    set(gcf,'Color','k')
% drawnow
% 
%     
% end

%%
P = 0.35 * ones([1,1000]);
% for i = 1:184
%     for j = 1:1000
%         z(j) = x(cout+j);
%     end
%     cout = cout + 1000;
%  
%    
%  n = length(z);
% fhat = fft(z,n);
% PSD = fhat.*conj(fhat)/n;
% freq = 1/(dt*n)*(0:n);
% L = 1:floor(n/2);
% figure(2)
% subplot(3,1,1)
% 
% plot(t(1:length(z)),z,'-','Color',[.5 .1 0],'Linewidth',2.5)
% title('raw data')
% legend('unfiltered')
% set(gca,'Fontsize',16)  
% 
% 
% subplot(3,1,2); set(gca, 'Fontsize', 16)
% 
% 
% 
% 
% %
% indices = PSD>0.35;
% PSDclean = PSD.*indices;
% fhat = indices.*fhat;
% ffilt = ifft(fhat);
% 
% plot(freq(L),PSD(L),'r-',freq(L),PSDclean(L),'g-',freq(L),P(1:length(freq(L))),'w--', 'LineWidth',2.5)
% title('Fourier domain, freq. vs. amplitude')
% set(gca,'Fontsize',16)  
% set(gca,'Color','k')
% set(gcf,'Position',[0 0 1920 1080])
% 
% xlim([0 1000]);
% ylim([0 1.5]);
% 
% l1 = legend('\color{red} Noisy','\color{green} Filtered','\color{white} Cuttoff (dB)'); set(l1,'Fontsize',16)
% 
% subplot(3,1,3); set(gca,'Fontsize',16)
% plot(t(1:length(ffilt)),ffilt,'-','Color',[.5 .1 0],'Linewidth',2.5)
% l1 = legend('Filtered'); set(l1,'Fontsize',16)
% title('filtered signal with FFT')
% ylim([-1 1]); set(gca,'Fontsize',16)
% drawnow
% 
%     
% end


%%
  
n = length(x);
fhat = fft(x,n);
PSD = fhat.*conj(fhat)/n;
freq = 1/(dt*n)*(0:n);
L = 1:floor(n/2);
figure(2)
subplot(2,1,1); set(gca, 'Fontsize', 16)
%%
plot(freq(L),PSD(L),'c','Linewidth',3),hold on
title('Fourier domain, freq. vs. amplitude')
set(gca,'Fontsize',16)  
set(gcf,'Position',[0 0 1700 750])
ylim([0 10]); 
xlim([0 1000]);

%%
indices = PSD>3;
PSDclean = PSD.*indices;
fhat = indices.*fhat;
ffilt = ifft(fhat);
%%
plot(freq(L),PSDclean(L),'-','Color',[.5 .1 0], 'LineWidth',2.5)
hold off
ylim([0 5]);
l1 = legend('Noisy','Filtered'); set(l1,'Fontsize',16)
n2 = length(ffilt)
subplot(2,1,2); set(gca,'Fontsize',16)
plot(t(1:length(ffilt)),ffilt,'-','Color',[.5 .1 0],'Linewidth',2.5)
l1 = legend('Filtered'); set(l1,'Fontsize',16)
title('filtered signal with FFT')
ylim([-1 1]); set(gca,'Fontsize',16)

%%
figure(3)
spectrogram(ffilt,128,120,128,1e3,'yaxis')
colormap bone
xlabel('time (seconds)');

pause(5)
sound(ffilt,Fs)

%%
% for i = 1:1486
%     for j = 1:1000
%         z(j) = ffilt(cout+j);
%      end
%     cout = cout + 1000;
%  
%    
%     n = 1000;
% fhat = fft(z,n);
% PSD = fhat.*conj(fhat)/n;
% freq = 1/(dt*n)*(0:n);
% L = 1:floor(n/2);
% figure(1)
% 
% 
% if i < 2
%         %sound(x,(Fs+800))
%     end
% plot(freq(L),PSD(L),'c','Linewidth',3)
% title('Fourier domain, freq. vs. amplitude','Color','w')
% set(gca,'Fontsize',16)  
% set(gcf,'Position',[0 0 1920 1080])
% ylim([0 2]); 
% xlim([0 2000]);
%   set(gca,'Color','k')
%    set(gcf,'Color','k')
% drawnow
% % 
%     
% end
%%

audiowrite('johnsdata_filtered.wav',ffilt,Fs)


