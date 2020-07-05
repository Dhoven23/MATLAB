function IVP_Solver2D()

X0 = [291.48,304.81];

function dXdt = IVPfct(t,X)
h1 = 10.9;
h2 = 0.18;
A1 = 4046.86
A2 = 5000
C1 = 0.718;
C2 = 0.8;
m1 = 18130.45
m2 = (A2/0.062)*0.00144


k1 = (h1*A1)/(m1*C1)
k2 = (h2*A2)/(m1*C1)
E = (m1*C1)/(m2*C2)

a=-(k1 + k2)
b=k2
c= E*k2
d= -E*k2
    
    dXdt = [a*X(1) + b*X(2); c*X(1) + d*X(2)];
        
end

t0=1;
tF=20;
dt = 0.01;

[t X] = ode45(@IVPfct, [t0:dt:tF],X0);

figure(2)

plot(X(:,1), X(:,2), 'b')

xlabel('x1')
ylabel('x2')

grid on
end