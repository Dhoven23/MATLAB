n = 100
x = 1;
y = x;
path = rand(5,2)
E = 0;

for i = 1:5
    X = path(x,1)
    Y = path(y,2)
    
    if (E > 0.1)
    x = x;
    y = y;
       
    else
        x = x+1;
        y = y+1;
    
    end
end
    