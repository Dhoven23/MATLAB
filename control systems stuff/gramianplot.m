clear all, close all, clc

A = [-.75 1; -.3 -.75];
B = [2; 1];
C = [1 2];
D = 0;

sys = ss(A,B,C,D);

Wc = gram(sys, 'c');
Wo = gram(sys, 'o');

%%
theta = 0:.01:2*pi;
xc = cos(theta);
yc = sin(theta);
CIRC = [xc; yc];

ELLIPc = sqrt(Wc)*CIRC;
ELLIPo = sqrt(Wo)*CIRC;

plot(xc, yc, 'w--','Linewidth',2)
hold on

plot(ELLIPc(1,:),ELLIPc(2,:),'r','Linewidth',2)
patch(ELLIPc(1,:),ELLIPc(2,:),'r','FaceAlpha',.8)

plot(ELLIPo(1,:),ELLIPo(2,:),'b','Linewidth',2)
patch(ELLIPo(1,:),ELLIPo(2,:),'b','FaceAlpha',.8)

set(gca,'color','k')
set(gcf,'color','k')
set(gcf,'Position',[2000 700 1000 750]);

%%
[sysb,g,Ti,T] = balreal(sys);

BWc = gram(sysb,'c')
BW0 = gram(sysb,'o')

ELLIPb = Ti*sqrt(BWc)*T*CIRC;

plot(ELLIPb(1,:),ELLIPb(2,:),'Color',[.9 0 .9],'Linewidth',2)
patch(ELLIPb(1,:),ELLIPb(2,:),'k','FaceColor',[1 0 1],'FaceAlpha',.5)
