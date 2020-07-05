syms CO1 CO2 SO1 SO2  d1 d3 r1 CO4 SO4

T3 = [CO1*CO2-SO1*SO2,CO1*SO2 - SO1 - CO2,0,CO1*CO2 - SO1*SO2 + r1*CO1;...
      SO1*CO2 + CO1*SO2, SO1*SO2 + CO1 + CO2, 0, CO2 * SO1 + CO1*SO2 + r1*SO1; ... 
      0 , 0 , 1 , d1; ...
      0 0 0 d3];mat
  
T4 = [CO4 , -SO4, 0 0; SO4 CO4 0 0; 0 0 1 0; 0 0 0 1];

ans = T3*T4