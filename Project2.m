a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 75;
h = (b - a)/N;
t(1) = a;
H = 0;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end
figure(1)
 plot(t,w,'b');
hold on
title('Number of wolves t years from 1999');
xlabel('t (years)');
ylabel('number of wolves P(t)');

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 75;
h = (b - a)/N;
t(1) = a;
H = 0.02;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

 plot(t,w,'b')

hold on

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 75;
h = (b - a)/N;
t(1) = a;
H = 0.04;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

plot(t,w,'b')
hold on

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 75;
h = (b - a)/N;
t(1) = a;
H = 0.07;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end
plot(t,w,'b')
hold on

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 75;
h = (b - a)/N;
t(1) = a;
H = 0.1;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

plot(t,w,'b')

hold on

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 75;
h = (b - a)/N;
t(1) = a;
H = 0.2;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

plot(t,w,'b')

hold on

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 75;
h = (b - a)/N;
t(1) = a;
H = 0.3;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

plot(t,w,'b')
hold on

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 25;
h = (b - a)/N;
t(1) = a;
H = 0;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

plot(t,w,'g')


a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 150;
h = (b - a)/N;
t(1) = a;
H = 0;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

plot(t,w,'g')

hold on

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 700;
h = (b - a)/N;
t(1) = a;
H = 0;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

plot(t,w,'g')


a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 25;
h = (b - a)/N;
t(1) = a;
H = 0.02;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

plot(t,w,'g')


a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 150;
h = (b - a)/N;
t(1) = a;
H = 0.02;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

plot(t,w,'g')

hold on

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 700;
h = (b - a)/N;
t(1) = a;
H = 0.02;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end
plot(t,w,'g')


a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 25;
h = (b - a)/N;
t(1) = a;
H = 0.04;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end
plot(t,w,'g')


a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 150;
h = (b - a)/N;
t(1) = a;
H = 0.04;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

C = plot(t,w,'g')

hold on

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 700;
h = (b - a)/N;
t(1) = a;
H = 0.04;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

C = plot(t,w,'g')

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 25;
h = (b - a)/N;
t(1) = a;
H = 0.07;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

C = plot(t,w,'g')


a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 150;
h = (b - a)/N;
t(1) = a;
H = 0.07;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

C = plot(t,w,'g')

hold on

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 700;
h = (b - a)/N;
t(1) = a;
H = 0.07;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

C = plot(t,w,'g')

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 25;
h = (b - a)/N;
t(1) = a;
H = 0.1;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

C = plot(t,w,'g')


a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 150;
h = (b - a)/N;
t(1) = a;
H = 0.1;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

C = plot(t,w,'g')

hold on

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 700;
h = (b - a)/N;
t(1) = a;
H = 0.1;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

C = plot(t,w,'g')
a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 25;
h = (b - a)/N;
t(1) = a;
H = 0.2;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

C = plot(t,w,'g')


a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 150;
h = (b - a)/N;
t(1) = a;
H = 0.2;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

C = plot(t,w,'g')

hold on

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 700;
h = (b - a)/N;
t(1) = a;
H = 0.2;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

C = plot(t,w,'g')

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 25;
h = (b - a)/N;
t(1) = a;
H = 0.3;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

C = plot(t,w,'g')


a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 150;
h = (b - a)/N;
t(1) = a;
H = 0.3;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

C = plot(t,w,'g')

hold on

a = 0; % starting point for t axis
b = 40; % final point for t axis (expanded from the present to allow a more complete analysis 
N = 1000;
t = zeros(1,N); % initialize t = 0's
w = zeros(1,N); % initialize population = 0's
w(1)= 700;
h = (b - a)/N;
t(1) = a;
H = 0.3;
k = 635; 
r= 0.273;

F = @(t, y) (r*(1-y/k)*y)-H*y;


for i = 1: (N - 1)
    K1 = h*(F(t(i), w(i)));
    K2 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K1));
    K3 = h*(F(t(i) + 0.5*h, w(i) + 0.01*K2));
    K4 = h*(F(t(i) + h, w(i) + K3));
    w(i + 1) = w(i) + (K1 + 2*K2 + 2*K3 + K4)/6;
    t(i +1) = a + i*h;
end

 plot(t,w,'g')


