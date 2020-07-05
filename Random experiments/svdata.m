clear all, close all, clc

x=3;
a = [-2:.1:2]';
b = a*x + 1*randn(size(a));

plot(a,x*a,'k','Linewidth',2)
hold on
plot(a,b,'rx','Linewidth',2)

[U,S,V] = svd(a,'econ');
xtilde = V*inv(S)*U'*b;

plot(a,xtilde*a,'b--','Linewidth',2)
l1 = legend('True Line','Noisy data','Regression line');
set(l1,'Location','Northwest')
set(l1,'Fontsize',18)
grid on
set(gcf,'Position',[20 20 1500 1500])
set(gcf,'PaperPositionMode','auto')
set(gca,'Fontsize',15)
xlabel('a')
ylabel('b')

xtilde1 = V*inv(S)*U'*b
xtilde2 = pinv(a)*b
xtilde3 = regress(b,a)