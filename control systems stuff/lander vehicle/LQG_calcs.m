global d Ix Iy
d = 1;
Ix = 1.5;
Iy = Ix;
I = Ix;
m = 1;
A = [0 1 0
     0 0 1
     1 0 0]

B = [0 1 0;
     1 0 0
     0 0 1]

Q = [1 0 0; 0 1 0; 0 0 1]
 
R = 0.001;
 
K = lqr(A,B,Q,R);
 
C = eye(3);
 
D = zeros(size(C,1),size(B,2));

sys_ss = ss(A,B,C,D)
Vd = 0.01*eye(3);
Vn = .001*eye(3);

[L,P,E] = lqe(A,Vd,C,Vd,Vn);
Kf = (lqr(A',C',Vd,Vn))'
sysKF = ss(A-Kf*C,[B Kf],eye(3),0*[B Kf])

