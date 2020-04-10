# 第二节 二重积分的计算法  
转化成两个定积分计算  
设曲顶柱的底为(x和y的取值,一个看作常数区间,另一个看作函数区间)  
D={$(x,y)|a<=x<=b,\phi_1(x)<=y<=\phi_2(x)$}  
任取$x_0\in[a,b]$,平面$x=x_0$截柱体的截面积为  
$$ A(x_0)=\int_{\phi_1(x_0)}^{\phi_2(x_0)}f(x_0,y)dy $$
故曲顶柱体体积为  
$$ V=\iint_{D}f(x,y)d\sigma=\int_{a}^{b}{A(x)}dx=\int_{a}^{b}[{\int_{\phi_1(x)}^{\phi_2(x)}{f(x,y)}dy}]dx=\int_{a}^{b}dx\int_{\phi_1(x)}^{\phi_2(x)}{f(x,y)}dy $$
类似地,当区域D看作y型域时(即将x看成函数区间)  
$$ V=\iint_{D}f(x,y)d\sigma=\int_{c}^{d}{A(x)}dx=\int_{c}^{d}[{\int_{\psi_1(y)}^{\psi_2(y)}{f(x,y)}dx}]dy=^\Delta\int_{c}^{d}dy\int_{\psi_1(y)}^{\psi_2(y)}{f(x,y)}dx $$
## 利用直角坐标计算二重积分  
- X-型域
- Y-型域
- 即是X-型域也是Y-型域
- 复杂域——分割成多个区域,分别求二重积分  
转化

作业  
P156  
1(2)2(1)(3)6(2)(4)

