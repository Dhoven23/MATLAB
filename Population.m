% Population of Panama 
clear p
clear t
ti = 2007; %this is the left endpoint
 h = 1; %step size
 r = 0.0175899; % this is the rate constant, equal to the average of  ln(P1/P0) and ln(P9/P0)
 tf = 2016;% this is the right endpoint of the interval
 n = (tf - ti)/h; % total number of steps
 t(1)=ti; % starting value
 p(1)= 3453807; %initial of population
 
 for j=1:n
     t(j+1) = h +t(j);
     p(j+1) = p(j)+h*(r*p(j));
 end
 
 
figure(1)
 W=plot(t,p);
 
 xlabel('year');
 ylabel('number of people');
 
 title('Population of Panama');
 
 hold on %Allows us to plot multiple solutions on same graph
 grid on % adds grid
 
Y = 2007:1:2016;

%here I put the array of population values I got from world bank
P = [3453807 3516268 3579385 3643222 3707782 3772938 3838462 3903986 3969249 4034119];
 S=plot(Y,P, 's');
 
legend({'Euler Approximation','Actual data from surveys'},'Location','northeast');
 