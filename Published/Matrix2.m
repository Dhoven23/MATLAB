M = csvread('Matrix.csv')
V = csvread('Vector.csv')

[r1, c1] = size(M);
[r2, c2] = size(V);

fprintf('The size of matrix M is %d by %d\n', r1, c1);
fprintf('The size of vector V is %d by %d\n', r2, c2);

if c1 ~= r2
    disp('Matrix multiplication not possible')
end


