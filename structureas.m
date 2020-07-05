% open file, and readout values into interpretable arrays
[nums, char, raw] = xlsread('book1.xlsx');

%find the length of the file
[r, c] = size(raw);


% create structure with important values from data
for i = 1:r
    employees(i).FirstName = raw(i,1);
    employees(i).Month = raw(i,3);
    employees(i).Day = nums(i,1);
    
end


% generate number array from month
for i = 1:r
    
    if strcmp(char(i,3), 'January');
        monthDigits(i) = 1;
    elseif strcmp(raw(i,3), 'February');
        monthDigits(i) = 2;
    elseif strcmp(raw(i,3), 'March');
        monthDigits(i) = 3;
    elseif strcmp(raw(i,3), 'April');
        monthDigits(i) = 4;
    elseif strcmp(raw(i,3), 'May');
        monthDigits(i) = 5;
    elseif strcmp(raw(i,3), 'June');
        monthDigits(i) = 6;
    elseif strcmp(raw(i,3), 'July');
        monthDigits(i) = 7;
    elseif strcmp(raw(i,3), 'August');
        monthDigits(i) = 8;
    elseif strcmp(raw(i,3), 'September');
        monthDigits(i) = 9;
    elseif strcmp(raw(i,3), 'October');
        monthDigits(i) = 10;
    elseif strcmp(raw(i,3), 'November');
        monthDigits(i) = 11;
    else strcmp(raw(i,3), 'December');
        monthDigits(i) = 12;
    end
    
end
    
    



% request name from user

Firstname = input('Enter the first name of the employee\n', 's');

% find index position of employee given
for i = 1:r
    if strcmp(raw(i,1), Firstname)
        listnum = i;
    end
end

% return the month and day of the employee given

Month = monthDigits(listnum);
Day = employees(listnum).Day;

% plug these values into the birthday function
result = BFunction(Month,Day);

%error check
if result < 0
    result = 365 + result;
end
    
%return the result
    fprintf("The number of days to %s's birthday is %i\n", Firstname, result)
   
        