<table>
    <tr>
        <td></td>
        <td colspan='3'>局部变量</td>
        <td colspan='2'>外部变量</td>
    </tr>
    <tr>
        <td>储存类别</td>
        <td>auto</td>
        <td>register</td>
        <td>局部static</td>
        <td>外部static</td>
        <td>外部</td>
    </tr>
    <tr>
        <td>储存方式</td>
        <td colspan='2'>动态</td>
        <td colspan='3'>静态</td>
    </tr>
    <tr>
        <td>储存区</td>
        <td>动态区</td>
        <td>寄存器</td>
        <td colspan='4'>静态储存区</td>
    </tr>
    <tr>
        <td>生存期</td>
        <td colspan='2'>函数调用开始至结束</td>
        <td colspan='3'>程序整个运行期间</td>
    </tr>
    <tr>
        <td>作用域</td>
        <td colspan='3'>定义变量的函数或复合语句内</td>
        <td>本文件</td>
        <td>其它文件</td>
    </tr>
    <tr>
        <td>赋初值</td>
        <td colspan='2'>每次调用函数时</td>
        <td colspan='3'>编译时赋初值,只赋一次</td>
    </tr>
    <tr>
        <td>未赋初值</td>
        <td colspan='2'>不确定</td>
        <td colspan='3'>自动赋初值0或空字符</td>
    </tr>
</table>

## 12.4 分配内存:malloc()和free()  
```C
malloc(size_t); // size_t是unsigned int或者unsigned long的别名
```

