clear all, close all, clc

load housing.data

b = housing(:,14);      % housing values in $1000s
A = housing(:,1:13);    % other factors,
A = [A ones(size(A,1),1)];  % Pad with ones for nonzero offset

x = regress(b,A);

subplot(1,2,1)
plot(b,'k-o');
hold on, grid on
plot(A*x,'r-o');
set(gca,'FontSize',13)
xlim([0 size(A,1)])

subplot(1,2,2)
[b sortind] = sort(housing(:,14)); % sorted values
plot(b,'k-o')
hold on, grid on
plot(A(sortind,:)*x,'r-o')
l1=legend('Housing value','Regression')
set(l1,'Location','NorthWest')
set(gca,'FontSize',13)
xlim([0 size(A,1)])

set(gcf,'Position',[100 100 600 250])


%%
A2 = A-ones(size(A,1),1)*mean(A,1);
for i=1:size(A,2)-1
    A2std = std(A2(:,i));
    A2(:,i) = A2(:,i)/A2std;
end
A2(:,end) = ones(size(A,1),1);

x = regress(b,A2)
figure
bar(x(1:13))

xlabel('Attribute'), ylabel('Correlation')
set(gca,'FontSize',13)
set(gcf,'Position',[100 100 600 250])

%% testing data
n=253;

% b = t'
% A = p'
A = [A ones(size(A,1),1)]
btrain = b(1:n);
Atrain = A(1:n,:);
x=regress(btrain,Atrain);

btest = A(n+1:end,:)*x;
norm(btest-b(n+1:end))

subplot(2,1,1)
plot(btrain,'Linewidth',2)
hold on
plot(Atrain*x,'Linewidth',2)
subplot(2,1,2)
plot(btest,'Linewidth',2)
hold on
plot(b(n+1:end),'Linewidth',2)
legend('Model','True')
