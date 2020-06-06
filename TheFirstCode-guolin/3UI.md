# 第3章 软件也要脸蛋——UI开发的点点滴滴  
## 3.1 如何编写程序界面  
推荐使用XML代码编写,这样对屏幕适配性更好.  
## 3.2 常用控件的使用方法  
### 3.2.1 TextView  
#### andoid:id  

#### android:layout_width和android:layout_hight  
有两种值可以选:match_parent(~~fill_parent~~)和wrap_content  
#### android:text  
#### android:gravity  
可选值:top,bottom,left,right,center等,可以用"|"来同时指定多个值,这里我们指定的center,等同于center_vertical|ceter_horizontal  
#### android:textSize  
字体大小单位:sp  
#### android:textColor  
### 3.2.2 Button  
上面TextView的属性差不多都有  
#### android:textAllCap  
与textView不同,Button的text默认是大写的,如果想要取消这个设定,那么得将android:textAllCap设为"false"  
#### 匿名类注册监听事件  
```Java
public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                // 在此处添加逻辑  
            }
        });
    }
}
```
#### 使用实现接口的方式注册监听事件  
```Java
public class MainActivity extends AppCompatActivity implements View.OnClickListener {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        button.setOnClickListener(this);

        @Override
        public void onClick(View v) {
            switch (v.getId()) {
                case R.id.button:
                    // 在此处添加逻辑  
                    break;
                default:
                    break;
            }
        }
    }
}
```
感觉这种方式也很不错,所有事件聚集写在一起,方便查看  

### 3.2.3 EditText  
#### android:hint  
#### android:maxLines  
默认EditText随着文本的增多会不断的拉长.  
而如果设置了maxLines就可以限制最大的行数了,超过最大行数上面的文本就会被淹没.  
#### 获取编辑框的内容  
(先将EditText绑到变量editText上)  
editText.getText().toString();  
