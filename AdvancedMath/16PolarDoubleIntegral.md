# 利用极坐标计算二重积分  
在极坐标系下,用同心原r=常数及$\theta$=常数,分划区域D为  
$$\Delta\sigma_k(k=1,2,3,...,n)$$  
则除包含边界点的小区域外,小区域的面积  
$$\Delta\sigma_k=\frac{1}{2}(r_k+\Delta r_k)^2\cdot\Delta\theta_k+\frac{1}{2}r_k^2\cdot\Delta\theta_k=\frac{1}{2}[r_k+(r_k+\Delta r_k)]\Delta{r_k}\cdot\Delta\theta_k=\bar{r_k}\Delta{r_k}\cdot\Delta\theta_k $$  
在$\Delta\sigma_k$内取一点$(\bar{r_k},\bar{\theta_k})$,对应有  
$$\xi_k=\bar{r_k}\cos{\bar{\theta_k}},\eta_k=\bar{r_k}\sin{\bar{\theta_k}}$$
$(\xi_k,\eta_k)$为直角坐标点  
所以$\iint_Df(x,y)d\sigma=\iint_Df(r\cos{\theta},r\sin{\theta})rdrd\theta$  
可以看作换元积分,但换元之后表示的区域没有改变    
$$\iint_{D}{e^{-x^2-y^2}}dxdy=(\int_{0}^{+\infty}{{e^{-x^2}}}dx)^2$$  
然后最前面那个积分转换成极坐标来求,即可求出$\int_{0}^{+\infty}{{e^{-x^2}}}dx=\frac{\sqrt{\pi}}{2}$  
## 二重积分的换元法 
定理:设f(x,y)在闭域D上连续,变换:  
T:{x=x(u,v){y=y(u,v)  (u,v)$\in$D'→D  
满足(1)x(u,v),y(u,v)在D'上一阶导数连续;  
(2)在D'上雅可比行列式  
$$J(u,v)=\frac{\partial{(x,y)}}{\partial{(x,y)}}\not=0;$$  
(变换T:D'→D是一一对应的),  
则$\iint_{D}{f(x,y)}dxdy=\iint_{D'}{f(x(u,v),y(u,v))|J(u,v)|}dudv$

作业P158  
13(4);14(2);18;*19(3);~~*20(1)~~

