clear all, close all, clc

xvals=[];

for beta = 0:.01:4
     beta
     xold = 0.5;
     for i=1:2000
         xnew = ((xold-xold^2)*beta);
         xold = xnew;
     end
     xss = xnew;
     for i=1:1000;
         xnew = ((xold-xold^2)*beta);
         xold = xnew;
         xvals(1,length(xvals)+1) = beta;
         xvals(2,length(xvals))= xnew;
         if(abs(xnew-xss)<.001)
             break
         end
     end
end
plot(xvals(2,:),4-xvals(1,:),'.','Linewidth',.1,'MarkerSize',1.2,'Color',[1 1 1])
set(gca,'color','k','xcolor','w','ycolor','w')
set(gcf,'color','k')
ylabel('Beta','Fontsize',22)
ylim([0 1])
xlabel('stable values of y','Fontsize',22)
title("Fixed points of the dynamic system (stable and chaotic)",'color','w','Fontsize',30)
txt = texlabel('y_{k+1} = beta*y_{k}*(1-y_k)')
T = text(0.2,0.8,txt)
set(T,'color','w','Fontsize',28)
set(gcf,'Position',[0 0 1920 1080])