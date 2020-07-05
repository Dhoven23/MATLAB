
P = [1 4 -3 1]; % po
y = 30 * (pi/180);
U = [1 0 0 10; 0 cos(y) (-1*sin(y)) 6; 0 sin(y)  cos(y) 5; 0 0 0 -18] ;

R = P*U
