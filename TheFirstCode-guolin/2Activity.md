# 第2章 先从看得到的入手——探究活动  
## 2.4 活动的声明周期  
### 2.4.1 返回栈  
使用任务(task)管理活动,一个任务就是一组存放在返回栈(Back Stack)里的活动集合.  
栈:先进后出的数据结构  
#### 作用  
启动新活动入栈,finish()销毁活动出栈.  
系统总会显示处于栈顶的活动给用户.
### 2.4.2 活动状态
4种状态  
#### 运行状态  
栈顶、可见  
#### 暂停状态  
非栈顶、可见  
回收：内存极低时  
#### 停止状态  
非栈顶、完全不可见  
保留相应状态和成员变量  
回收：其他地方需要内存时  
#### 销毁状态  
返回栈中移除后  
回收：最倾向于回收处于这种状态的活动，确保内存充足    
### 2.4.3 活动的生存期  
Activity类中定义了7中回调方法。  
#### 完整生存周期  
- onCreat()  
- onDestroy()
#### 可见生存周期  
- onStart()  
- onStop()
#### 前台生存周期  
- onResume()
- onPause()
#### 此外
- onRestart()  
#### 生命周期示意图  
![ActivityLifecycle_CN](Image/ActivityLifecycle_CN.gif)
![ActivityLifecycle_EN](Image/ActivityLifecycle_EN.gif)
#### onStart和onRestert的区别  





