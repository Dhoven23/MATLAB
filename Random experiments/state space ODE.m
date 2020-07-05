clear all, close all, clc
A = [0 1; -1 -.1];
B = [0; 1];
C = eye(2);
D = [0; 0];

sys = ss(A, B. C, D);