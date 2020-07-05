%%   ======================================================================
%  Name        : Probability_roadmapsDH.m
%  Title       : Probabilistic Roadmaps
%  Author      : Daniel
%  Class       : ESG-330
%  Description :  This program uses the matlab robotics toolbox to compute
%                 a path through a burning house using several variable
%                 parameters. 
%  Citations   : mathworks.com
%%   Part 2 ===============================================================
addpath 'C:\Users\Tesla\Downloads'
% load the house binary occupancy grid
load('house.mat')
% define the target object from house.mat
map = robotics.OccupancyGrid(house,1);
% clone map for later use
map_new = copy(map);
% inflate the map occupancy 


%% Part 3 =================================================================

% define loop constants
n = 1000;
S = 0;
M = 100;

% set first path definition
startLocation1 = [395 395]; 
endLocation1 = [20 320];

% compute path, increasing number of nodes until the path double is
% populated

for i = 1:n
    if S == 0
        prmComplex1 = robotics.PRM(map_new,M);
        prmComplex1.ConnectionDistance = 100;
        path = findpath(prmComplex1, startLocation1, endLocation1);
        S = size(path);
        M = M + 10;
    else
        break
    end
  
end


% define loop constants
n = 1000;
S = 0;
M = 100;

% set second path definition
startLocation1 = [395 395]; 
endLocation1 = [110 270];

% compute path, increasing number of nodes until the path double is
% populated

for i = 1:n
    if S == 0
        prmComplex2 = robotics.PRM(map_new,M);
        prmComplex2.ConnectionDistance = 100;
        path = findpath(prmComplex2, startLocation1, endLocation1);
        S = size(path);
        M = M + 10;
    else
        break
    end
  
end



% set third path definition
startLocation1 = [395 395]; 
endLocation1 = [20 320];

% compute path, using a fixed value of 1000 for Nn

        prmComplex3 = robotics.PRM(map_new,1000);
        prmComplex3.ConnectionDistance = 100;
        path = findpath(prmComplex3, startLocation1, endLocation1);
        
% set fourth path definition
startLocation1 = [395 395]; 
endLocation1 = [110 270];

% compute path, using a fixed value of 1000 for Nn

        prmComplex4 = robotics.PRM(map_new,1000);
        prmComplex4.ConnectionDistance = 100;
        path = findpath(prmComplex4, startLocation1, endLocation1);
        
        
%% Part 4 =================================================================
inflate(map_new,0.5);
% define loop constants
n = 1000;
S = 0;
M = 100;

% set first path definition
startLocation1 = [395 395]; 
endLocation1 = [20 320];

% compute path, increasing number of nodes until the path double is
% populated

for i = 1:n
    if S == 0
        prmComplex5 = robotics.PRM(map_new,M);
        prmComplex5.ConnectionDistance = 100;
        path = findpath(prmComplex5, startLocation1, endLocation1);
        S = size(path);
        M = M + 10;
    else
        break
    end
  
end


% define loop constants
n = 1000;
S = 0;
M = 100;

% set second path definition
startLocation1 = [395 395]; 
endLocation1 = [110 270];

% compute path, increasing number of nodes until the path double is
% populated

for i = 1:n
    if S == 0
        prmComplex6 = robotics.PRM(map_new,M);
        prmComplex6.ConnectionDistance = 100;
        path = findpath(prmComplex6, startLocation1, endLocation1);
        S = size(path);
        M = M + 10;
    else
        break
    end
  
end



% set third path definition
startLocation1 = [395 395]; 
endLocation1 = [20 320];

% compute path, using a fixed value of 1000 for Nn

        prmComplex7 = robotics.PRM(map_new,1000);
        prmComplex7.ConnectionDistance = 100;
        path = findpath(prmComplex7, startLocation1, endLocation1);
        
% set fourth path definition
startLocation1 = [395 395]; 
endLocation1 = [110 270];

% compute path, using a fixed value of 1000 for Nn

        prmComplex8 = robotics.PRM(map_new,1000);
        prmComplex8.ConnectionDistance = 100;
        path = findpath(prmComplex8, startLocation1, endLocation1);
              
   


% display result
subplot(2,4,1), show(prmComplex1)
subplot(2,4,2), show(prmComplex2)
subplot(2,4,3), show(prmComplex3)
subplot(2,4,4), show(prmComplex4)
subplot(2,4,5), show(prmComplex5)
subplot(2,4,6), show(prmComplex6)
subplot(2,4,7), show(prmComplex7)
subplot(2,4,8), show(prmComplex8)




