z = out.Z;
x = out.X;
y = out.Y;
t = out.tout

curve = animatedline('linewidth',2);
set(gca, 'XLim',[-10 10],'YLim',[-10 10], 'ZLim',[0 10]);
view(100,100);
hold on
for i=1:length(t)
    addpoints(curve, x(i), y(i), z(i));
    %scatter3(x(i),y(i),z(i));
    drawnow
    
end