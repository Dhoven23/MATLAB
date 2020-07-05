% request the radius value, and tore in variable r
r = input('Enter the radius');

% call UDF
A = calcarea(r);

% print result
fprintf("The radius of a circle with radius %f is %f",r,A);