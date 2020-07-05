S = input('Enter the speed of the car');

speed = menu('Enter the units of speed', 'ft/min', 'mph','kmph','m/s');

switch speed 
    case 1
        S = (S*60)*0.3048;
        
    case 2
        S = S*5280*(1/3600)*0.3048;
    
    case 3
        S = S*1000*(1/3600);
        
    case 4
        S = S;
end

T = input('Enter the time of travel');

time = menu('Enter the units of time', 'sec', 'min', 'hrs', 'days');

switch time
    case 1
        T = T;
        
    case 2
        T = 60*T;
        
    case 3
        T = T*3600;
        
    case 4
        T= T*86400;
end

D = menu('Enter the units of distance to display the result', 'mi', 'km', 'm', 'ft');

switch D
    
    case 1
        d = distance(S,T)*0.000621371;
        fprintf('The distance traveled is: %.2f miles', d)
        
    case 2
        d = distance(S,T)*0.001;
        fprintf('The distance traveled is: %.2f kilometers', d)
        
    case 3
        d = distance(S,T);
        fprintf('The distance traveled is: %.2f meters', d)
        
    case 4
        d = distance(S,T);
        fprintf('The distance traveled is: %.2f feet', d*3.28084)
end
        

function dist = distance(S,T)

dist = S * T;
end


