load quizdata.csv
[r,c] = size(quizdata);
for i = 1:r
    students(i).id_no = quizdata(i,1);
    for j = 2:c
        students(i).quiz(j-1) = quizdata(i,j);
    end
end

fprintf('Student         Quiz Ave\n')
for i = 1:r
    aveScore = mean([students(i).quiz]);
    fprintf('%d              %.1f\n',students(i).id_no, aveScore)
end
