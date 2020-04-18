## 曲面方程
<++>
## 平面的点法式方程
through M0(x0,y0,z0) and perpendicular to **n**=(A,B,C)  
A(x-x0)+B(y-y0)+C(z-z0)=0  


求法向量:叉积  
求平面方程:混合积等于零,在平面上设一个点(x,y,z),其与平面上的一个点组成的向量与其他平面上两个向量的混合积等于零  

**特别**,当三点为与坐标轴相交时

 ## 平面的一般式方程
Ax+By+Cz+D=0(A^2+B^2+C2 != 0)  
法向量**n**=(A,B,C)

1.当D=0时过原点  
2.A=0时,By+Cz+D=0 法向量**n**=(0,B,C)垂直**i**,平行于x轴(或包含,包含时D=0)  
平行于(包含)y轴z轴垂直同理  
3.当A=B=0时,Cz+D=0,平行于平面xOy  
平行于yOz,XOz同理  
两平面夹角:法向量夹角  
## 截距式
x/a+y/b+z/c=1

## 三点式
|x-x1   y-y1    z-z1|  
|x2-x1  y2-y1    z2-z1|=0  
|x3-x1  y3-y1   z3-z1|  
## 点到面的距离
点A=(x0,y0,z0)
法向量**n**=(A,B,C)
然后在平面上取一点(x1,y1,z1)
  
d=|Prj(**n**)**P1P0**|  
 =|A(x0-x1)+B(y0-y1)+C(z0-z1)|/|**n**|  
 =|Ax0+By0+Cz0-D|/sqrt(A^2+B^2+C^2)

# 常见曲线以及其方程  
1. [椭圆锥面](Image/EllipticCone.png):  
$$\frac{x^2}{a^2}+\frac{y^2}{b^2}=z^2$$  

2. [双曲抛物面](Image/Paraboloid.png):  
$$\frac{x^2}{a^2}+\frac{y^2}{b^2}=z$$  

3. 双曲抛物面:  
$$\frac{x^2}{a^2}-\frac{y^2}{b^2}=z$$  
[图1](Image/HyperbolicParaboloid_1.png)  
[图2](Image/HyperbolicParaboloid_2.png)  

4. 椭球面:  
$$\frac{x^2}{a^2}+\frac{y^2}{b^2}+\frac{z^2}{c^2}=1$$  
- 当a=b=c时是球面  
5. 椭圆柱面:  
$$\frac{x^2}{a^2}+\frac{y^2}{b^2}=1$$  
- 当a=b时是圆柱面
