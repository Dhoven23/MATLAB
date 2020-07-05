Pc = 2.27*(10^6); % Chamber pressure [Pa]
Pe = 7 * (10^4);  % Exit pressure [Pa]
Tc = 1200;        % Chamber temperature [K]
Al = 7500;        % Altitude [m]
gamma = 1.4;      % Cp/Cv, ratio of specific heats (air)
R = 355;          % "gas constant" [N/A]



PR = Pe/Pc;       % Relative pressure

TT = ((2*gamma)/(gamma-1))*R*Tc                 % Throat Temp [K]
TP = (Pc*(2/gamma+1))^(gamma/(gamma-1))         % Throat Pressure [Pa]
Tv = sqrt((2*gamma*R*Tc)/(gamma+1))             % Throat Velocity
Ev = sqrt(TT*(1-(PR^((gamma-1)/gamma))))        % Exit velocity
Te = Tc*PR^((gamma-1)/gamma)                    % Exit Temperature
M_e = Ev/sqrt(gamma*R*Te)                       % Exit Mach number


