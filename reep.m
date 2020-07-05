r = input("Give the value of radius in inches: ");

result = circumference(r);
choice = menu('Chooe a unit for result', 'in', 'ft', 'yd', 'm', 'cm');

switch choice 
    case 1
       fprintf("The circumference is %.2f in\n", result);
       
    case 2
       fprintf("The circumference is %.2f ft\n", result/12);
       
    case 3
       fprintf("The circumference is %.2f yd\n", result/36);
       
    case 4
        fprintf('The circumference is %.2f m\n', result * 0.0254);
        
    case 5
        fprintf('The circumference is %.2f cm\n', result * 2.54);
end
        
       
       

