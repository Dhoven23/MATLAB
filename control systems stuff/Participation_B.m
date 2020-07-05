map = robotics.BinaryOccupancyGrid(10, 10, 2);

xy = [ 1, 1; 2, 2; 3, 3; 4, 4; 5, 5; 6, 6; 7, ...
    7; 8, 8; 9, 9; 10, 10; 1, 10; 2, 9; 3, 8; 4, 7; 5, 6; 6, 5; 7, 4; 8, 3; 9, 2; 10, 1] 

setOccupancy(map, xy, 1);
show(map)
grid on
axis equal
xlim([0 10])
ylim([0 10])