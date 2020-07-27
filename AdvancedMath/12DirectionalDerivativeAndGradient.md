# 方向导数与梯度  
## 方向导数  
f延l的方向导数:  
$$\frac {\partial f}{\partial l}\mid_{(x_0,y_0,z_0)}=\lim_{t→0}\frac {f(x_0+tcos\alpha,y_0+tcos\beta,z_0+tcos\gamma)-f(x_0,y_0,z_0)}{t}=f_xcos\alpha+f_ycos\beta+f_zcos\gamma$$
可看作**偏导数**与**方向余弦**的乘积之和,也可以类似看作~~法向量~~**梯度**与**单位方向向量**的乘积

作业   
P111  
46  




## 梯度  

$\nabla f(x_0,y_0)$=grad$f(x_0,y_0)$=$f_x(x_0,y_0)\vec{i}+f_y(x_0,y_0)\vec{j}$=$f_x(x_0,y_0)\vec{i}+f_y(x_0,y_0)\vec{j}$
### 梯度与方向导数的关系  

$$\frac {\partial f}{\partial l}\mid_{(x_0,y_0,z_0)}=f_xcos\alpha+f_ycos\beta+f_zcos\gamma=gradf(x_0,y_0){\cdot}\vec{e_l}$$
对比方向导数,少了余弦值  
方向导数等于梯度的投影  
各个方向的投影:投影在自己所在方向最大, 而且投影过程构成一个直角三角形,所有可以画圆,所有投影都在圆里面.  
夹角锐角以gradf为直径  
夹角直角方向导数为0  
夹角钝角以-gradf为直径  
### 梯度的几何意义  
方向:方向导数最大的方向  
大小:方向导数最大时的大小  

作业  
P111  
3,6,10
