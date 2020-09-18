# 开始使用  
## 安装Intellij插件  
从release下载插件, 解压之后在IDEA或Android Studio里面选择从磁盘安装插件, 选择intellij-plugin.jar  
安装之后就能识别.flexml文件了, 并且在New里面可以看到新增了两个关于Flexml的项  

```
Flexml以包为单位管理布局文件和mock数据，一个文件夹+文件夹下的package.json作为一个包的基本结构，当你选中package.json文件的时候，点击右边的小箭头即可打开调试服务。

注意：调试时请确保你的手机和你的电脑一定处在同一局域网下。
```
这个有点懵逼, mock数据是什么, package.json在哪  

## 环境配置
添加到你的根build.gradle。
```
	allprojects {
		repositories {
			...
			maven { url 'https://jitpack.io' }
                        maven { url "http://repository.atricore.org/m2-release-repository" }
		}
	}
```
添加到你所使用的模块(app文件夹内的build.gradle)。
```
	dependencies {
	        implementation 'com.github.sanyuankexie.Flexml:litho:0.3.2'
	}
```
然后找个地方初始化。
```
LithoBuildTool.init(context)
```
???在哪找地方??activity类里吗?

```
接下来你需要从json中解析得到com.guet.flexbox.TemplateNode，这玩意是未绑定数据的模板文件，由模板编译器编译得到（模板编译器与Intellij插件打包在一起发布），使用Gson和FastJson都可以顺利完成解析。

```
我是要狭隘Gson或FastJson吗  

