function PhasePortrait()

h1 = 10.9;
h2 = 0.18;
A1 = 4046.86
A2 = 5000
C1 = 0.718;
C2 = 0.8;
m1 = 18130.45
m2 = (A2/0.062)*0.00144

k1 = (h1*A1)/(m1*C1);
k2 = (h2*A2)/(m1*C1);
E = (m1*C1)/(m2*C2);

a= -(k1 + k2);
b= k2;
c= E*k2;
d= -E*k2;

x = [-5:1:5];
y=[-5:1:5];

m = length(x);
n = length(y);

xc = zeros(m,n);
yc = zeros(m,n);

for i = 1:n
    for j = 1:n
        xc(j,i) = a*x(i)+b*y(j);
        yc(j,i) = c*x(i)+d*y(j);
    end;
end;

figure(1)

plot(x,0*x,':k') % plots the x axis only
plot(0*y,y,':k') % plots the y axis only

arrow = sqrt(xc.^2 + yc.^2);

quiver(x,y,xc./arrow,yc./arrow, 0.5, 'b')

xlim([min(x) max(x)])
ylim([min(y) max(y)])

hold on
grid on

end

