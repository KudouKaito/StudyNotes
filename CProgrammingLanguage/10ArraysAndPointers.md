# 第十章 数组和指针  
着重分析如何编写处理数组的函数.
数组由相同的一系列元素组成.  
## 声明数组  
type array[length];
初始化得到length个元素array[index],其中index从零开始到length-1.  

## 初始化数组
如果在定义字符数组时不进行初始化会出现不可预料的后果  
只储存单个字符的变量称为**标量变量(scaler variable)**

## 输入输出字符串的函数  
### stdio.h库函数  
#### printf()  
#### scanf()  
以空白符分隔或结束, 可进行多个变量的输入储存  
### string.h库函数  
#### gets()  
以换行符结束, 并且将'\n'转换成'\0'

#### puts()  
输出完之后再输出一个'\n'
strcat追加字符串
strcpy用来字符串赋值
strncpy控制copy多少个字符
strcmp()比较字符串
strlen()
strlwr()
strupr()
