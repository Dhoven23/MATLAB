
x = 1:0.01:4
C = 0.1;
n =(1-((1-(10.*x)).*(1-(C.*x))))/(28*0.9)
plot(x,n)
hold on
xlabel('f(P)')
ylabel('non-D clearance')
title('Effect of pressure gradient on clearance')


C = 0.11;
n =(1-((1-(10.*x)).*(1-(C.*x))))/(28*0.9)
plot(x,n)

C = 0.12;
n =(1-((1-(10.*x)).*(1-(C.*x))))/(0.9*28)
plot(x,n)
legend('C = 0.1', 'C = 0.11', 'C = 0.12')
