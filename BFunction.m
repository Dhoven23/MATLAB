function daysleft = BFunction(month, day)

%find days since January 1 for a given date

monthLength = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 ];

t = clock;

%find days from January 1 to current date
daysElapsed = 0;
for i = 1:1:t(2)-1
    daysElapsed = monthLength(i) + daysElapsed;
end
daysElapsed = daysElapsed + t(3);

% get days from Jan 1 to birthday
daysTillBDay = 0;

for i = 1:1:month-1
    daysTillBDay = daysTillBDay + monthLength(i);
    
end
daysTillBDay = daysTillBDay + day;

% find difference
daysleft = daysTillBDay - daysElapsed;
end






