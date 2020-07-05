A = [-3 5 2 -2]


for i = 1:4
    x = A(i);
    if x > 0
        E(i,1) = 1;
    else 
        E(i,1) = 0;
    end
    
    if mod(x,2) == 0
        E(i,2) = 1;
    else
        E(i,2) = 0;
    end
    
     if (E(i,1) == 0) && (E(i,2) == 0)
        fprintf('L')
   
    else if (E(i,1) == 1) && (E(i,2) == 0)
            fprintf('O')
       
    else if (E(i,1) == 1) && (E(i,2) == 1)
            fprintf('V')
        
    else 
        fprintf('E \n')
        end
        end
    end  
end
  

