# 2020年 05月 24日 星期日 20:14:49 CST
查询Context是什么.Context是一个类，Activity、Service等很多类都是它的子类.使用Hierarchy(ctrl+H)可以查看它的阶层附属关系  

# 2020年 05月 24日 星期日 22:04:54 CST
"This view is not constrained vertically. atruntime itwill jump to the top unless you add a vertical constraint"  
为啥会出现这个warning?
新版本需要提供
        app:layout_constrainddtBottom_toTopOf="parent"
可以更改LinearLayout为:  
```XML
<LinearLayout xmlns:android="http://schemas.android.com/apk/res/andoid"
    android:orientation="virtical"
    android:layout_width="match_parent"
    android:layout_height="match_parent">

</LinearLayout>
```


# 2020年 07月 03日 星期五 20:58:51 CST
Scanf输入多个用逗号隔开的字符串

%[^,]  
搜索出来这结果有点眼熟,这...这不是正则表达式嘛  
于是就试了一下,还真的%[1-9],%[a-zA-Z]这些都有用  
然后换行符不能只用[^\n],因为Enter键他单纯不是回车,也不单纯是换行,而是换行后回车,所以得写[^\n^\r]  

# 2020年 07月 05日 星期日 16:55:30 CST
原来fcitx可以自动检测输入问题fcitx-diagnose,太强了  

# Sat 01 Aug 2020 11:18:25 AM CST
如何获取i3config里面需要的窗口CLASS?  
用xprop可以获取到CLASS,用xwininfo可以获取到tittle  

# Sat Dec 19 04:35:35 PM CST 2020
vim如何使用指定编码打开文件  
:e ++enc=GB18030
或者
```bash
vim file.txt -c "e ++enc=GB18030"
```
https://www.jianshu.com/p/36286fa7a9ed

# Sat Dec 26 04:36:27 PM CST 2020
latex平均数怎么打, X上面有一杠, Xbar  
\overline{}长线或者\bar{}断杠

latex如何打~  
\sim  

latex求和符号上下标如何在正上方正下方
\displaystyle\sum  


# Sun Dec 27 09:49:49 AM CST 2020
adb查看手机当前应用包名
adb shell dumpsys window w |findstr \/ |findstr name=

# Sun Dec 27 09:50:12 PM CST 2020
vim彩蛋
:h holy-grail
:h 42
:h!

# Sat Jan  2 02:49:18 PM CST 2021
Xming, VcXSrv 无法使用, WSL2无法使用GUI图形截面  
到防火墙里面设置允许程序越过防火墙  
https://blog.csdn.net/Alisebeast/article/details/106680267

# Sat Jan  2 03:55:17 PM CST 2021
Linux 权限表示, 数字权限, chmod  
## 权限
形式: drwxrwxrwx
前面一位为特殊模式位, 后面三位为一组,分别对应着u(user), g(group), o(others)的权限
## 数字权限: 
形式:如755  
将d,rwxrwxrwx用二进制表示则可得到三组三位二进制数:不知道,111,111,111.转化成十进制数即可得到X777,其中特殊模式位通常省略掉  
数字权限有四位, 最高位可以省略  
后三位分别对应这ugo的权限  
https://blog.csdn.net/stevenchen1989/article/details/104257545
## chmod
chmod [ugoa][+-=][rwx] [-R] 文件
如`chmod u+w,g-w,o-w 文件`


# Mon Jan 11 04:47:09 PM CST 2021
504 Gateway Time-out
修改proxy_read_timeout
https://www.cnblogs.com/linjiqin/p/11858127.html

# Tue Jan 12 06:53:32 PM CST 2021
vim正则匹配替换式字中的某个内容
/zs          指明匹配由此开始 (:help  / /zs )
/ze          指明匹配到此为止 (:help  / /ze )



# Tue Jan 12 07:03:28 PM CST 2021
正则只匹配某些字符之间的文本, 而不匹配这些字符  
`(?<=the start).*?(?=the end)`   
```text
(?=pattern) 正向先行断言，代表字符串中的一个位置，紧接该位置之后的字符序列能够匹配 pattern。例如对 "a regular expression" 这个字符串，要想匹配 regular 中的 re，但不能匹配 expression 中的 re，可以用 re(?=gular)，该表达式限定了 re 右边的位置，这个位置之后是 gular，但并不消耗 gular 这些字符。
(?<=pattern) 正向后行断言，代表字符串中的一个位置，紧接该位置之前的字符序列能够匹配 pattern。
除此之外还有负向的（把=换成!），表示不匹配pattern。
```
https://www.cnblogs.com/exmyth/p/8796954.html  


# Tue Jan 12 07:15:16 PM CST 2021
正则表达式(括号)[中括号]{大括号}的区别  
括号表示分组, 多少个括号就匹配出多少个变量$1,$2,$3...
括号()就表示处理整个整体的意思, 就正常的括号, 类似markdown中的{}  
https://www.cnblogs.com/hjbky/p/9512022.html  

