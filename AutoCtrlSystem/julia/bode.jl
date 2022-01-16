using Plots
include("equations.jl")
G_0(s)=10/(s(s+1)(0.5s+1));
A_0(w)=10/(w*sqrt(w^2+1)sqrt((0.5w)^2+1));
L_0(w)=20log10(A_0(w));
phi_0(w)=-(atand(w/0)+atand(w/1)+atand(0.5w/1));

gamma_0(w)=phi_0(w)-(-180+50+12)
#pre_w_c=Dichotomy(gamma_0,0,2,0.01)
pre_w_c=Dichotomy(gamma_0,0.3,0.4,0.01)

T_a=10/pre_w_c
phi_m=55
a=(1+sind(phi_m))/(1-sind(phi_m))
T_b=exp10((20log10(a)-L_0(pre_w_c)-20log10(pre_w_c))/20)

G_c(s)=(T_a*s+1)/((a*T_a*s+1));
A_c(w)=sqrt(((T_a)w)^2+1)/(sqrt(((a*T_a)w)^2+1));
L_c(w)=20log10(A_c(w));


#G_c(s)=(T_as+1)(T_b*s+1)/((a*T_a*s+1)((T_b/a)*s+1));
#A_c(w)=sqrt(((T_a)w)^2+1)sqrt(((T_b)w)^2+1)/(sqrt(((a*T_a)w)^2+1)sqrt(((T_b/a)w)^2+1));
#L_c(w)=20log10(A_c(w));
#G_c(s)=((T_a)s+1)/(((a*T_a)s+1));
#A_c(w)=sqrt(((T_a)w)^2+1)/(sqrt(((a*T_a)w)^2+1));
#L_c(w)=20log10(A_c(w));
#G_c(s)=((T_a)s+1)((T_b)s+1)/(((a*T_a)s+1)((T_b/a)s+1));
#A_c(w)=sqrt(((T_a)w)^2+1)sqrt(((T_b)w)^2+1)/(sqrt(((a*T_a)w)^2+1)sqrt(((T_b/a)w)^2+1));
#L_c(w)=20log10(A_c(w));

phi_c(w)=atand((T_a)w/1)+((T_b)w/1)-(atand((a*T_a)w/1)+atand((T_b/a)w/1));
G(s)=G_c(s)*G_0(s);
A(w)=A_c(w)*A_0(w);
L(w)=20log10(A(w));
phi(w)=phi_c(w)+phi_0(w);
w = 0:0.01:5
plot(log10.(w),L.(w),xlims=(-2,1))
w_c=Dichotomy(L,0,10,0.01)
#p_Lw=plot!([log10(w_c),log10(w_c)],[-10,20])
p_Lw=plot!([-2,1],[0,0])
p_Lw=plot!([log10(1/(a*T_a)),log10(1/(a*T_a))],[-10,20])
p_Lw=plot!([log10(1/(T_a)),log10(1/(T_a))],[-10,20])
p_Lw=plot!([log10(1/(T_b)),log10(1/(T_b))],[-10,20])
p_Lw=plot!([log10(1),log10(1)],[-10,20])
p_Lw=plot!([log10(1/(T_b/a)),log10(1/(T_b/a))],[-10,20])
p_Lw=plot!([log10(1/0.5),log10(1/0.5)],[-10,20])

plot(log10.(w),L_0.(w),xlims=(-2,1))
w_0_c=Dichotomy(L_0,0,10,0.01)
#p_L0w=plot!([log10(w_0_c),log10(w_0_c)],[-10,20])
p_L0w=plot!([-2,1],[0,0])
p_L0w=plot!([log10(1),log10(1)],[-10,20])
p_L0w=plot!([log10(1/0.5),log10(1/0.5)],[-10,20])



plot(log10.(w),phi.(w),xlims=(-2,1),ylims=(-200,-50))
#w_c=Dichotomy(L,0,10,0.01)
#p_Lw=plot!([log10(w_c),log10(w_c)],[-10,20])
p_phi=plot!([-2,1],[-180,-180])
p_phi=plot!([log10(1/(a*T_a)),log10(1/(a*T_a))],[-200,-50])
p_phi=plot!([log10(1/(T_a)),log10(1/(T_a))],[-200,-50])
p_phi=plot!([log10(1/(T_b)),log10(1/(T_b))],[-200,-50])
p_phi=plot!([log10(1),log10(1)],[-200,-50])
p_phi=plot!([log10(1/(T_b/a)),log10(1/(T_b/a))],[-200,-50])
p_phi=plot!([log10(1/0.5),log10(1/0.5)],[-200,-50])
p_phi=plot!([log10(w_c),log10(w_c)],[-200,-50])


plot(log10.(w),phi_0.(w),xlims=(-2,1),ylims=(-200,-50))
#w_c=Dichotomy(L,0,10,0.01)
#p_Lw=plot!([log10(w_c),log10(w_c)],[-10,20])
p_phi_0=plot!([-2,1],[-180,-180])
p_phi_0=plot!([log10(1),log10(1)],[-200,-50])
p_phi_0=plot!([log10(1/0.5),log10(1/0.5)],[-200,-50])
p_phi_0=plot!([log10(w_0_c),log10(w_0_c)],[-200,-50])


plot(p_L0w,p_Lw,p_phi_0,p_phi,layout=(2,2))
