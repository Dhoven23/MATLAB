% Euler's method on first order diff eq dy/dt = cos(t-y) with init cond. y(0) = 1.
 clear t
 clear y
 ti = 0; %this is the left endpoint
 h = 1; %step size
 tf = 100;% this is the right endpoint of the interval
 n = (tf - ti)/h; % total number of steps
 t(1)=ti; % starting value
 y(1)= 1; %initial of y
 
 for j=1:n
     t(j+1) = h +t(j);
     y(j+1) = y(j)+h*cos(y(j));
 end
 
 
figure(1)
 plot(t,y)
 
 xlabel('t')
 ylabel('y(t)')
 
 title('Euler')
 
 hold on %Allows us to plot multiple solutions on same graph
 grid on % adds grid
 
 %Direction field based on figure 2.1.1 in text
 % y' = x^/(1-y^2)
 
 x = [-4.5:0.3:4.5]; %declared a vector interval of 0.3 from -4.5 to 4.5
 y = [-4.5:0.3:4.5];
 m = length(x); % meaure the x axis length of vector field
 n=length(y);
 
 %We need x components for our m by n grid. We will initialize them all to zeros. Ditto with y components
 
 xc = zeros(m,n);
 yc = zeros(m,n);
 
 % We need to create a matrix of all vector field vectors by storing each vector's x and y component. 
 for i=1:m
     for j=i:n
         xc(j,i) =1;
         yc(j,i) =x(i).^2/(1-y(j).^2);
     end
 end
 
 arrow = sqrt(xc.^2+yc.^2);
 
 figure(2)
 hold on;
 quiver(x,y,xc./arrow,yc./arrow, 0.5, 'b') %plots all arrows, scaled down
 
 plot(x, 0*x, ':k');
 plot(y, 0*y, ':k');
 
 axis tight; %tells MATLAB to choose a window size equal to the size of the plot