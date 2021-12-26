using Plots
G_0(s)=10/(s(s+1)(0.5s+1));
A_0(w)=10/(sqrt(w^2+1)sqrt((0.5w)^2+1));
L_0(w)=20log10(A_0(w));
phi_0(w)=-(atand(w/0)+atand(w/1)+atand(0.5w/1));
G_c(s)=(6.67s+1)(1.49s+1)/((66.7s+1)(0.149s+1));
A_c(w)=sqrt((6.67w)^2+1)sqrt((1.49w)^2+1)/(sqrt((66.7w)^2+1)sqrt((0.149w)^2+1));
L_c(w)=20log10(A_c(w));
phi_c(w)=atand(6.67w/1)+(1.49w/1)-(atand(66.7w/1)+atand(0.149w/1));
G(s)=G_c(s)*G_0(s);
A(w)=A_c(w)*A_0(w);
L(w)=20log10(A(w));
phi(w)=phi_c(w)+phi_0(w);
w = 0:0.01:5
plot(exp10.(w),L.(w))
