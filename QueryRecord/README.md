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
