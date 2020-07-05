clear all, close all, clc
load('testvar.mat')
A = [testvar];


%% Show Histogram of dataset
figure()

hist = histogram(A,[min(A):(max(A)-min(A))/20:max(A)])
ax = gca
ax.FontSize = 14
%% add regions of interest
x1 = xline(54) % Arizona
x1.LineStyle = '--'
x1.Color = 'r'
x1.LineWidth = 2
x2 = xline(55) % Phoenix
x2.LineStyle = '--'
x2.Color = 'k'
x2.LineWidth = 2
x3 = xline(50) %Tucson
x3.LineStyle = '--'
x3.Color = 'c'
x3.LineWidth = 2
legend('Distribution','Arizona','Phoenix','Tucson')
% set the plot
set(gcf, 'Color','w')
set(hist, 'FaceColor','g') 
set(gcf,'Position',[0 200 920 480])

% some more plotting wizardry
x = xlabel('Mean hourly wage USD','Fontsize',20)
y = ylabel('Distribution','Fontsize',20)
xtickangle(45)
xtickformat('usd')
yticks([0 3 6 9 12])
yticklabels({'0','0.25','0.5','0.75','1'})
t = title('Distribution of mean hourly wages for A&A engineers in the US','Fontsize',22)

%% display the normalized distribution of the dataset
figure(2)

norm = normplot(A)
set(gcf, 'Color','w')
set(gcf,'Position',[1020 200 640 480])

%% Boxplot A
box = boxplot(A)
title('Mean hourly wage','Fontsize',18)
ytickformat('usd')