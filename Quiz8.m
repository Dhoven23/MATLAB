% request data from user

Ps = input('Enter Static presure in Pa');
Pt = input('Enter the total pressure in Pa');

% function call
V = Wvelocity(Ps,Pt);

%print result
fprintf('The velocity of the water is %.2f m/s',V);


% define function
function V = Wvelocity(Ps,Pt)

 V = 1.016*sqrt(Pt - Ps);
end