 %obtain file names
s1 = input('Enter the file name of the matrix. Must be .csv: ', 's');
s2 = input('Enter the file name of the vector. Must be .csv: ', 's');

%read the matrix portions of the input files into multiplicit matrices M
%and
M = csvread(s1, 2, 0);
V = csvread(s2,1,0);

% find the dimensions
[r1, c1] = size(M);
[r2, c2] = size(V);

% print the dimensions of the input files
fprintf('The size of matrix M is %d by %d\n', r1, c1);
fprintf('The size of vector V is %d by %d\n', r2, c2);

% test for multiplicity 
if c1 ~= r2
    disp('Matrix multiplication not possible')
end

% multiply the matrices
R = M * V;

% write the output line vector into a .csv file
csvwrite('Output.csv',R);

% print file to test multiplication and confirm file creation
Output = csvread('Output.csv')