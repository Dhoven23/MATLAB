%plot analytical solution for different ambient temperatures
syms x t;
% declare variable to plot, and set x equal to the analyis of T versus time
t = linspace(0,1,100);
clear x;
T = 108;

%here is the equation used for the plot in part D, it is used in this cript for comparison
x = (98.6-T)*exp(-10.965*t)+T;

%plot
figure(1)
 A =plot(t,x, 'b')

hold on
grid on

xlabel('t (hours)')
ylabel('temperature in degrees F')


clear t
clear x
 ti = 0; %this is the left endpoint
 h = 0.01; %step size
 tf = 1;% this is the right endpoint of the interval
 n = (tf - ti)/h; % total number of steps
 t(1)=ti; % starting value
 x(1)= 98.6; %initial of x
 k = 10.965; % heat transfer coefficient
 
 for j=1:n
     t(j+1) = h +t(j);
     x(j+1) = x(j)+h*k*(-x(j)+T);
 end
 

B = plot(t,x, 'r')

 

 title('Approximate solutions vs actual solution')
 
 hold on %Allows us to plot multiple solutions on same graph
 


 % Runge Kutta/improved Euler, I really had no idea how to do this part, so I combined the code 
 % I knew into an Improved Runga-Kutta if you will. I know this isn't what the assignment called for, but Its all I could figure out
a = 0;
b = 1;
N = 1000;
t = zeros(1,N);
w = zeros(1,N);
w(1)= 98.6;
h = (b - a)/N;
t(1) = a;

F = @(t, y) k*(T - y);

for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end
C = plot(t,w,'g')

legend( 'actual', 'Euler', 'Runga Kutta')



%Given a 1D system x'=f(x), the phase line plot is just the plot of f(x)
%with the addition of vector (arrow) on each side of the critical points to
%represent the direction of the flow of the system at the critical points.
%For example, consider x'=x-x^3
 
X=[106:0.01:110]; %make sure all roots are in the interval
xdot=k*(X-T); %Be mindful of the function here

figure(2)
plot(X,xdot)
hold on;
grid on
%add x-axys
plot(x,0,'k:');
%add y-axys
%plot(0*x,x,':k');
%add critical points as black cricles. Question: How do you determine critical points?
plot(108,0,'ko')
%plot(0,0,'ko')
%plot(1,0,'ko')

%TO add arrows, the easier way is to click "edit->FigurePorperties" on the
%menu in the Figure itself and then "Insert->Arrow". This is also the best
%place where to make cosmetic changes to the figures. For example by
%clicking on the critical point it is possible to change color, size and
%thickness of the circles as well as make them full or empty based on their
%stability.
 


