clear all, close all, clc


A = [48.1000   47.4000   49.0000   48.3000   47.9000 48.5 47.9 ...
   48.1000   48.9000   48.4000   48.5000   47.6000 49.1 49.1 ...
   48.3000   47.2000   48.2000   48.5000   48.2000 48.7 48.1 ...
   47.8000   48.4000   48.1000   43.0000   42.8000 43.2 43.1 ...
   42.5000   42.4000   43.3000   43.0000   42.9000 43.0 43.2 ...
   43.6000   43.2000   43.2000   43.0000   42.6000
];

%% 6.1
mean = mean(A) % sample or population mean (same calculation)
sample_variance = var(A) % calculates sample variance
standard_deviation = sqrt(sample_variance) % calculates sample standard deviation
sigma_squared = var(A,1); % calculates population variance
sigma = sqrt(sigma_squared); % calculates population standard deviation
range = max(A) - min(A); % sample or population range (same calculation)

% j = 1
% for i = 1:length(A)
%     if A(i) > 90
%         B(j) = A(i);
%         j = j+1;
%     end
% end
% prop = length(B)/length(A)
%% 6.2
Median = median(A) %  sample or population median (same calculation)
mode = mode(A) % sample or population mode (same calculation)
Q1 = quantile(A,0.25) %  sample or population 1st quartile (same calculation)
Q3 = quantile(A,0.75) % sample or population 3rd quartile (same calculation)
IQR = iqr(A); % sample or population interquartile range (same calculation)
% no simple way to create a stem/leaf plot; complete by hand as needed

%% 6.3
figure(1) % the below histogram will be labeled as such
droppingbars = histogram(A); % outputs a histogram with auto-generated specs
figure(2) % the below histogram will be labeled as such
droppingbetterbars = histogram(A,[min(A):(max(A)-min(A))/10:max(A)]); % outputs a histogram with set specs [low:step:high]
% no simple way to create a frequency table; complete by hand as needed

%% 6.4
checkoutliers = isoutlier(A); % outputs a list of 0's (not outliers) and 1's (outliers)
figure(3)
% the below boxplot will be labeled as such
boxandwhiskuh = boxplot(A); % outputs a vertical boxplot

%% 6.5
% Data below represents HRs hit each year from 1990 to 2009 in MLB

B = [102    78    61    34    45    26    19    10     8     4    18    37    40  44    44 46 32 ...
     30    12    17    94    13    10     3     1     3     4    13    10    40 46    44 30 29 ...
     156   129    85    65    17     6     2     5     7    22    35    49    66 72    76 48 26 ...
    43    22     7    19     3    14    59   127   136    99    81    63    39 25    16 15 39 ...
    81   129   127   118    63    98   129    91    63    63    55    35    25 8     0  22 51 ...
    85    63    64    49    96    96    82    54    44    45    28    15     8 42    73 ...
    
 ];

t = 1:1:length(A);
figure(4) % the below time series plot will be labeled as such
checkoutthetime = plot(t,A,'r-*'); % outputs a time series plot

%% 6.6
% Data below represents HRs hit vs Runs Scored by MLB AL teams in 2018
Runs = [622 630 638 656 677 709 716 721 737 738 797 813 818 851 876];
HRs = [188 135 155 182 176 217 150 214 194 166 205 227 216 267 208];
figure(5) % the below scatterplot will be labeled as such
plot(Runs,HRs,'or'); % outputs a scatterplot with Runs on the x-axis, HRs on the y-axis
CorrCoeffs = corrcoef(Runs,HRs); % outputs a matrix containing simple correlation coefficents
r_xy = CorrCoeffs(2,1); % the simple correlation coefficient between the two variables

% 6.7
figure(6) % the below Normal probability plot will be labeled as such
hopeforstraight = normplot(A); % outputs a Normal probability plot with a best-fit line