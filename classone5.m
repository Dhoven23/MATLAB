%========================================================================================
% Name              : Matlab practice DH
% Title             : Activity
% Author            : Daniel Hoven
% Class             : ESG-330
% Description       : plots stuff using other stuff
% Citations         : nun
% ====================================================================================



clc
clear 

t = 0:0.01:2*pi;
x1 = -pi/2:0.01:pi/2;
x2 = -pi/2:0.01:pi/2;
y1 = sin(2*x1);
y2 = 0.5*tan(0.8*x2);
y3 = -0.7*tan(0.8*x2);
rho = 1+0.5.*sin(7.*t) .* cos(3.*t);

x = rho .* cos(t);
y = rho .* sin(t);

figure;
hold on;
title('Plot type thingy')
xlabel('some dumb value')
ylabel('random other axis I invented')
Data(1) = fill(x, y, [0.6 .2 .7]);
Data(2) = fill([x1,x2(end:-1:1)], [y1, y2(end:-1:1)], [0.2 .3 0.7]);
Data(3) = line(x1, y1, [0.2, 0.6, 0.6]);
Data(4) = line(x2, y2, [0.9, 0.2, 0.1]);
Data(5) = line(x2, y3, [0.1, 0.5, 0.3]);
err = abs(y2-y1);
ErrorBars = errorbar(x2(1:15:end))

Data(6) = ErrorBars(1);




