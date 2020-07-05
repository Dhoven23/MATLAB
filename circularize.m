function delta_V = circularize(Ap,Pe,M)

G = 6.674083e-11;

u = G*M;

a = (Ap+Pe)/2;

delta_V = sqrt(u*(2/Ap - 1/a)) - sqrt(u/Ap);
end