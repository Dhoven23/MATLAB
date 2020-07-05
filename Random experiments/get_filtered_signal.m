function ffilt =  get_filtered_signal(filename)
Fs = 0;
y = zeros(1,10000000);
[y,Sampling_frequency] = audioread(filename);

Fs = Sampling_frequency;
Filter_limit = 1;


PSD = zeros(1,1000);
x = zeros(1,1486272);


Fn = Fs/2;
dt = 1/Fs;

 i = 1; 
 j = 1;

    for i = 1:length(y)
        if y(i) ~= 0
        
         x(j) = y(i);
         j = j + 1;
        
        end     
    end
    
    n = length(x);
    fhat = fft(x,n);
    
    PSD = fhat.*conj(fhat)/n;
    indices = PSD>Filter_limit;
    PSDclean = PSD.*indices;
    fhat = indices.*fhat;
    
    ffilt = ifft(fhat);
    
    

    
end

