M = 4;        % Modulation order
freqsep = 8;  % Frequency separation (Hz)
nsamp = 8;    % Number of samples per symbol
Fs = 32;      % Sample rate (Hz)

x = randi([0 M-1],1000,1);

y = fskmod(x,M,freqsep,nsamp,Fs);

h = dsp.SpectrumAnalyzer('SampleRate',Fs);
step(h,y)