clear all, close all, clc


%% declare data and variables for the SIR model
B = 0.25;
g = 0.10;
dt = 0.1;
t = 1:dt:100.1;
N = 100;
So = zeros(1,length(t));
%% ICU capacity H, Economic cost E
H = 15
E = 35
%% more variables
S = 99;
So(1) = S;
Io = zeros(1,length(t));
I = 1;
Io(1) = I;
Ro = zeros(1,length(t));
R = 0;
Ro(1) = R;
Y = H*ones(1,length(t))
C = 0;

%% run the simulation, each timestep recompute the future prediction 
% based on new measurements 

for j = 1:length(t)-1
    
   
    
    
    
 % step the model forward in time to observe the impact of the current policy   
    for i = j:length(t)
        S = S + ((-B*I*S)/N)*dt;
        So(i) = S;
        I = I + ((B * I * S)/N - g*I)*dt;
        Io(i) = I;
        R = R + dt*(g*I);
        Ro(i) = R;
    end
 % make a decision to tighten down or relax policy based on optimization parameters.    
    if (max(Io) > H) && (C < E)
        B = B - 0.001;
        C = C+0.5;
    end
 % perturb the data away from the model to simulate real world conditions
 % and uncertainty
    B = B + 0.001*randn;
    Bout(j) = B;
    Cout(j) = C;
    b = 0.1*randn;
    S_model = So(j+1);
    S_real(j) = S_model + b;
    I_model = Io(j+1);
    I_real(j) = I_model - b;
    R_model = Ro(j+1);
    R_real(j) = R_model;
    
     S = S_real(j);
    I = I_real(j);
    R = R_real(j);
    
    
    
 
end

%% plot everything
Bdisp = 100 * Bout;
plot(t(1:length(I_real)),I_real,'r*-','Linewidth',1), hold on
plot(t(1:length(Cout)),Cout,'g','Linewidth',3), hold on
plot(t(1:length(Bdisp)),Bdisp,'Linewidth',1.5), hold on
plot(t,Y,'k--')
plot(t,Y*(35/15),'g--')
axis([0 50 0 50])
l1 = legend('Infected','Economic cost of policy','Rate of transmission','ICU capacity','Desired maximum cost')
set(l1,'FontSize',18)
set(gcf,'Position',([50 50 1280 720]))
set(gca,'Fontsize',12)
xlabel('time','Fontsize',20)
ylabel('normalized values','Fontsize',20)
title('Model Predictive control for COVID-19, simulation','Fontsize',32)


%% write to Excel File
T = table(t,S_real,I_real,R_real);
filename = 'SIR_predictive_model.xlsx';
writetable(T,filename,'Sheet',1,'Range','A1')


