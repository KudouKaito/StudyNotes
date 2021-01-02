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

