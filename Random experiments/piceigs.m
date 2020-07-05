clear all, close all, clc

A = imread('pic.png');
X = double(rgb2gray(A));
nx = size(X,1); ny = size(X,2);

subplot(2,2,1)
imagesc(X), axis off
colormap(gray)
title('Original');
axis equal


set(gcf,'Position', [2000 300 1000 1000])

[U, S, V] = svd(X,'econ');

plotind = 2;
for r=[5 20 100];
    Xapprox = U(:,1:r)*S(1:r,1:r)*V(:,1:r)';
    subplot(2,2,plotind),plotind = plotind + 1;
    imagesc(Xapprox), axis off, colormap(gray);
    title(['r=',num2str(r,'%d'),', ',num2str(100*r*(nx+ny)/(nx*ny),'%2.2f'),'% storage'])
    axis equal
end

%%
figure, subplot(1,2,1)
semilogy(diag(S),'k','Linewidth',2), grid on
xlabel('r')
ylabel('Singular vslue, \sigma_r')
xlim([-50 1550])
set(gca, 'FontSize',14)
subplot(1,2,2)
plot(cumsum(diag(S))/sum(diag(S)),'k','LineWidth',2), grid on
xlabel('r')
ylabel('Cumulative Energy')
xlim([-50 1550]); ylim([0 1.1])
set(gca, 'FontSize',14)
set(gcf,'Position',[1400 100 3*550 3*240])

