clear all, close all, clc

a = 0;
b = 10;
dx = 0.01;
x = a:dx:b;
f = sin(x);

n = length(x);

areaLR = 0;
for i=1:n-1
    areaLR = areaLR + dx*f(i);
end

areaRR = 0;
for i = 2:n
    areaRR = areaRR + dx*f(i);
end


areaTZ = 0;
for i=1:n-1
    areaTZ = areaTZ + (dx/2)*(f(i) + f(i+1));
end
