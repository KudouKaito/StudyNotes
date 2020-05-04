# 十一章 曲线积分与曲面积分  
## 第一节 对弧长的曲线积分  
### 定义  
$$ \lim_{\lambda→0}{\sum_{i=1}^{n}{f(\epsilon_i,\eta_i)\Delta{s_i}}}=\int_{L}{f(x,y)ds} $$
ds是弧微分  
$$ \lim_{\lambda→0}{\sum_{i=1}^{n}{f(x_i,y_i,z_i)\Delta{s_i}}}=\int_{\Gamma}{f(x,y,z)ds} $$
ds>=0,上限必须大于下限  
### 计算(统一变量)  
基本思路:转化为定积分  
1. 考虑被积函数:将x,y用参数t表示.  
$$f(x,y)=f[\phi(t),\psi(t)]$$
2. 考虑ds:
$$ds=\sqrt{(dx)^2+(dy)^2}=\sqrt{(\phi'^2(t))^2+(\psi'^2)^2}dt$$
3. $\alpha<=t<=\beta$
11-1 3(2)(3)(5)

## 第二节 对坐标的曲线积分  
### 定义  
$$ \vec{F}(x,y)=(P(x,y),Q(x,y)) $$  
$$ \lim_{\lambda→0}{\sum_{i=1}^{n}{P(\epsilon_k,\eta_k)\Delta{x_k}+Q(\epsilon_k,\eta_k)\Delta{y_k})}}=\int_{L}{P(x,y)dx+Q(x,y)dy}=\int_{L}{P(x,y)dx+\int_{L}Q(x,y)dy} $$
$$\int_{L}{(P(x,y),Q(x,y))\cdot(dx,dy)}$$
### 性质  
1. 被积函数的可加性  
2. 积分区域的可加性  
3. 积分有向性  
上限不一定大于下限

### 计算(统一变量)  
例子:  
$$ \int_{L}{P(x,y)dx+Q(x,y)dy}=\int_{L}{(P(\phi(t),\psi(t))\frac{dx}{dt}+Q(\phi(t),\psi(t))\frac{dy}{dt})dt} $$
可以看作是代进去也可以看作是提出来  

### 格林公式  
条件:偏导数相等  
与路径无关  

## 联系与相互转换  
画三角形  
$dx=\cos{alpha}{\cdot}ds,dy=\cos{beta}{\cdot}ds$  
(1)取L的方程为y=f(x),则y'=f'(x)=\tan{\alpha}(用来求sin和cos)  
$\cos{\alpha}=\frac{1}{\sqrt{1+f'^2(x)}},\cos{\beta}=\frac{f'(x)}{\sqrt{1+f'^2(x)}}$  

P203  
3(1)(2)  
4(3)(3)

## 第三节  
牛顿-莱布尼茨公式  
f(x)在区域[a,b]内部的积分转化为F(x)在端点处的代数差  

### 格林公式  
定理1. D由光滑**正向闭**曲线L围成  
$$\iint_{D}{(\frac{\partial{Q}}{\partial{x}}-\frac{\partial{P}}{\partial{y}})dxdy}$$
1. L正向(否则添负号)  
2. L封闭(添线)  
$$\int_L+\int_l=\oint_L$$
$$\int_L=\oint_L-\int_l$$
3. 连续(挖洞)  
$$\oint_L+\oint_l=\iint_D{0dxdy}=0$$

