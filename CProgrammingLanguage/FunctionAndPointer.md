# 函数与指针  
## 函数指针  
```C
int func();
int main(void)
{
    int (*p1)(int,int); 
    int (*p2);
    // 函数名代表函数首地址
    p1=func; 
    (*p1)(1,2);
}
```
## 返回指针值的函数  
```C
char * strcat(*char,*char);
```
### 动态分配空间函数  
```C
void * malloc(...);
int * p=NULL;
p = (int *)malloc(...);
```
## 指针数组和多级指针  
```C
int *p[N]; // 指针数组  
int (*p)[N]; // 行指针变量  
```
二维数组长度一致,指针数组不一定  
