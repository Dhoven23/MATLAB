function PhaseLine1D()
 
%Given a 1D system x'=f(x), the phase line plot is just the plot of f(x)
%with the addition of vector (arrow) on each side of the critical points to
%represent the direction of the flow of the system at the critical points.
%For example, consider x'=x-x^3
k = 10.45;
T = 107; 
x=[0,0.01,1]; %make sure all roots are in the interval
xdot=k*(x-T); %Be mindful of the function here


figure(12)
plot(x,xdot)
hold on;
%add x-axys
plot(x,0*x,':k');
%add y-axys
plot(0*x,x,':k');
%add critical points as black cricles. Question: How do you determine critical points?
plot(-1,0,'ko')
plot(0,0,'ko')
plot(1,0,'ko')
hold off
%TO add arrows, the easier way is to click "edit->FigurePorperties" on the
%menu in the Figure itself and then "Insert->Arrow". This is also the best
%place where to make cosmetic changes to the figures. For example by
%clicking on the critical point it is possible to change color, size and
%thickness of the circles as well as make them full or empty based on their
%stability.
 
end