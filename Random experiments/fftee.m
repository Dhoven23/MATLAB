clear all, close all, clc
t = 1:1:1024;
X = -3*sin(0.2*t)+sin(t) +0*3*rand(1,1024);
F = fft(X);

for i = 1:1024
    if abs(F(i)) > 200
        Y(i) = F(i);
    else
        Y(i) = 0;
    end
end

Y=ifft(Y);


figure(1)
subplot(3,1,1)
plot(t,X)

subplot(3,1,2)
plot(t,F)

subplot(3,1,3)
plot(t,Y)