 load partsData.dat


[r,c] = size(partsData);

for i = 1:r
    parts(i).id_no = partsData(i,1);
    parts(i).idealWeight = partsData(i,2);
    parts(i).trialWeights = partsData(i,3:end);
end

for i = 1:r
   parts(i).ave = (parts(i).trialWeights(1) + parts(i).trialWeights(2)+ parts(i).trialWeights(3)) / 3;
end

for i = 1:r
    if (parts(i).ave < parts(i).idealWeight)
        fprintf(' Part_NO %i is less that the ideal weight %.2f', parts(i).id_no, parts(i).idealWeight);\
    end
end