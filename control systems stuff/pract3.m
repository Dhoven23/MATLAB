theta = 0;
alpha = 0;
r = 0;
d = 1;


B = [cos(theta) (-1*sin(theta)*cos(alpha)) sin(theta)*sin(alpha) r*cos(theta); sin(theta) cos(theta)*cos(alpha) -1*cos(theta)*sin(alpha)...
    r*sin(theta); 0 sin(alpha) cos(alpha) d; 0 0 0 1]
I = [1 0 0 1; 0 1 0 0; 0 0 1 0; 0 0 0 1]