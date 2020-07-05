syms y(t)

e = 2.7182818284590452353602874713527;
ode = diff(y,t) == (e^(-t) - 4*t*t*y)/t*t*t;

cond = y(-1)==0;

ySol(t) = dsolve(ode,cond)