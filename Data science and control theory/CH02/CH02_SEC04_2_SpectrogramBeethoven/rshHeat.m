function duhatdt = rshHeat(t,uhat,kappa,a)
duhatdt = -a^2*(kappa.^2)'.*uhat; % Linear and Diagonal
 


