A = readmatrix('FLIGHT3.csv');
L = A(:,1);

for i = 12:(length(L)/6)
    j = i*6
    X(i,:) = A(j,:);
end