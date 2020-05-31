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
