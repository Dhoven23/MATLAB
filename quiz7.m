A = input('enter an integer');

B = isa(A, 'int32')
fprintf("%i", B)
while (A <=0) && (B == 0)
    fprintf("%i is not a positive integer\n", A);
    A = input('enter an integer');
end

fprintf("%i is a positive integer", A)
    

