using Plots
# 引入解方程的文件
include("equations.jl")
# 原传递函数以及幅频特性相频特性
G_0(s)=10/(complex(s)*(complex(s)+1)*(0.25*complex(s)+1));
A_0(w)=abs(G_0(w*im))
phi_0(w)=agle(G_0(w*im))
L_0(w)=20log10(A_0(w))
w = 0:0.01:5
plot(log10.(w),L_0.(w),xlims=(-2,1))

