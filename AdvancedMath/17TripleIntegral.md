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
捆大葱,先对线求质量再积分  
$\Omega:\{z_1(x,y)<=z<=z_2(x,y) \{(x,y)\in{D_{xy}}$
$$ \iint_{D_{xy}}({\int_{z_1(x,y)}^{z_2(x,y)}{f(x,y,z)dz})dxdy} $$
### 方法2. 截面法("先二后一")
切土豆,先对面求质量,然后积分  
$$ \int_{a}^{b}dz{\iint_{D_z}{f(x,y,z)dxdy}} $$


P167 
7,8



### 利用柱坐标计算三重积分  
$$ \iint_{D_{xy}}({\int_{z_1(x,y)}^{z_2(x,y)}{f(x,y,z)dz})dxdy}=\iint_{D_{xy}}{\rho d\rho d\theta}\int_{z_1(\rho\cos\theta,\rho\sin\theta}^{z_2(\rho\cos\theta,\rho\sin\theta}{f(\rho\cos\theta,\rho\sin\theta,z)dz} $$

### 利用球坐标计算三重积分  
$\{x=r\sin\phi\cos\theta$  
$\{y=r\sin\phi\cos\theta$  
$\{z=r\cos\phi$  
$$ \iiint_{\omega}{f(r,\phi,\theta){r^2\sin\phi{drd\phi d\theta}}} $$

