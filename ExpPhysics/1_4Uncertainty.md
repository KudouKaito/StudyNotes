# 不确定度  
## 直接测量不确定度的评定  
### A类分量——统计方法评定的分量  
$$\Delta_A=\sqrt{\frac{t_p^2}{n(n-1)}\displaystyle\sum_{i=1}^{n}{(x_i-\bar{x})^2}}$$
当5<n≤10时,可简化为  
$$\Delta_A=S_x=\sqrt{\frac{\displaystyle\sum_{i=1}^{n}{(x_i-\bar{x})^2}}{n-1}}$$
### B类分量——非统计评定的分量  
只考虑仪器误差  
$$\Delta_B=\Delta_仪$$
#### B类分量(仪器误差)获取方法  
##### 1. 仪器说明书  
##### 2. 仪器的精确度等级  
$$\Delta_仪=量程×等级%$$
##### 3. 为给出仪器误差时估计:  
连续可读仪器(如直尺):最小分度/2  
非连续可读仪器(如游标卡尺):最小分度  
数字式的仪器:取末尾±1  

### 直接测量总不确定度的合成  
"方、和、根"  
$$\Delta=\sqrt{\Delta_A^2+\Delta_B^2}=\sqrt{S_x^2+\Delta_仪^2}$$

## 间接测量  
和差形式选用  
$$\bar{N}=f(\bar{x},...)$$
不确定度的传递公式:  
$$\Delta_N=\sqrt{(\frac{\partial{f}}{\partial{x}})^2\Delta_x^2+...}$$
积商形式选用  
$$\frac{\Delta_N}{\bar{N}}=\sqrt{(\frac{\partial{\ln{f}}}{\partial{x}})^2\Delta_x^2+...}$$


## 测量结果的表示  
$$x=(\bar{x}±\Delta_x)×10^n$$
- $\bar{x}$与$\Delta_x$末位对齐  
- $\Delta_x$只进不舍  
- $\bar{x}$四舍六入五凑偶  
相对不确定度
$E_x=\frac{\Delta_x}{\bar{x}×100\%}$  
取两位有效数字  


