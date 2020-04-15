# 三重积分  
$$ \lim_{\lambda→-}{\sum_{k=1}^{n}{f(\xi,\eta,\zeta)\Delta{v_k}}}=\iiint_{\Omega}{f(x,y,z)dv} $$
## 性质:  
线性性质  
可加性(拆分区域)  
物理意义  
不等式  
估值定理  
中值定理  
f(x,y,z)在$\Omega$上连续,则存在$(\xi,\eta,\zeta)\in{\Omega}$使得  
$$ \iiint_{\Omega}{f(x,y,z)dv}=f(\xi,\eta,\zeta)V $$
## 三重积分的计算
### 方法1. 投影法("先一后二")  
$\Omega:\{z_1(x,y)<=z<=z_2(x,y) \{(x,y)\in{D_{xy}}$
$$ \iint_{D_{xy}}({\int_{z_1(x,y)}^{z_2(x,y)}{f(x,y,z)dz})dxdy} $$
### 方法2. 截面法("先二后一")
$$ \int_{a}^{b}dz{\iint_{D_z}{f(x,y,z)dxdy}} $$


P167 



