function VanderPol()

clear all

x=[-15:1:15]; % x interval, step size; anticipate changing these as needed

y=[-15:1:15]; % y interval, step size; anticipate changing these as needed

m=length(x);

n=length(y);

xc=zeros(m,n);

yc=zeros(m,n);
k = 4;
u = 0.5;
for i=1:m

   for j=1:n

       xc(j,i)= y(j); % You are responsible for entering the system

       yc(j,i)= u*(1-(x(i)^2))*y(j)-x(i); % You are responsible for


   end;

end;

figure(1)

plot(x,0*x,':k') % Plots the x-axis only

plot(0*y,y,':k') % Plots the y-axis only

arrow=sqrt(xc.^2 + yc.^2); % Sets the vector size for all vectors

quiver(x,y,xc./arrow,yc./arrow,0.5,'b') % Plots all the arrows in blue

xlim([min(x) max(x)]) % Sets the limit of x-axis

ylim([min(y) max(y)]) % Sets the limit of y-axis

grid on

hold on

function dXdt=IVPfct(t,X)



dXdt=[ X(2) ; u*(1-(X(1)^2))*X(2)-X(1) ]; % You are responsible for


end

t0 = 0; % Initial time t (should be 0)

dt = 0.01; % Step size; should be very small for a smooth solution curve

tF = 20*pi; % Final time t (indicates how long you want the system the run)

X0 = [1,1]; %Initial condition for the system; you will need to change this

[t X]=ode45(@IVPfct,[t0:dt:tF],X0); % Calls our function, solves IVP



plot(X(:,1), X(:,2),'r') % Generates single, solution curve in red

title('\mu > 0')

end
