[X,Y] = meshgrid(1:0.5:10,1:10);
Z = log(X)/log(Y) - X;
surf(X,Y,Z)
