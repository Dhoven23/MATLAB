function ffilt =  get_filtered_signal(y,Sampling_frequency)
Fs = Sampling_frequency;
Filter_limit = 1;

Fn = Fs/2;
dt = 1/Fs;

i = 1, j = 1;

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

