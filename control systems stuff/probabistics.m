%the best way to optimize this algorithm is to begin with a fixed number of
%nodes, 


load('BuschStadium.mat')
map = robotics.OccupancyGrid(BuschStadium,1);


show(map)
grid on
n = 1000;
i = 0;
S = 0;
M = 100;

startLocation1 = [20 180]; 
target1 = [301 140];

for i = 1:n
    if S == 0
        prmComplex1 = robotics.PRM(map,M);
        prmComplex1.ConnectionDistance = 30;
        path = findpath(prmComplex1, startLocation1, target1)
        S = size(path)
        M = M + 100;
    else
        break
    end
  
end




show(prmComplex1)


