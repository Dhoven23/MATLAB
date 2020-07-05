function dy = lorenz(t,y,sigma,beta,rho)
% y in 3-space

dy = [
    sigma*(y(2) - y(1));
    y(1)*(rho-y(3)) - y(2);
    y(1)*y(2) - beta*y(3);
    ];