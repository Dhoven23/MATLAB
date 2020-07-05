




dt = 0.1;

t = linspace(0,1000,1000/dt);
n=500;
d = 3*.0254;
Cd = 0.393;
A = pi*((d/2)^2);
rho = 1.1;
x0 = 1000;
v0 = 0;
a0 = -9.81;
v=0;

D = 0;
X = zeros(1,n);
T = zeros(1,n);

for j = 1:n
    T(j) = t(j);
end


for i = 1:n 
    
    if i < 100
        Anew = 9.81*13;
    else
        Anew = 0;
    end
    X(i) = x0 + v*dt;
    x0 = X(i);
    v = v0 + (a0+Anew)*dt - D*dt;
    v0 = v;
    
    if v > 0
         D = Cd * (rho*(v^2))/2 * A;
    else
         D = -Cd * (rho*(v^2))/2 * A;
    end
   
    V(i) = v;
    
    
    
end
plot(T,X)
hold on
plot(T,V)
hold off
