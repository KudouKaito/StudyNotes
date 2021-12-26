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


# Wed Mar 17 09:03:07 AM CST 2021
## polkit 的使用
如果要像KDE运行gparted一样申请权限而不用sudo, 那么就要用到polkit了, 另外, 一定要有一款图形化的polkit库, 不然似乎就运行不了图形软件
https://wiki.archlinux.org/index.php/Polkit_(%E7%AE%80%E4%BD%93%E4%B8%AD%E6%96%87)

# Wed Mar 17 09:03:07 AM CST 2021
## 全球安卓OS及模拟器汇总总贴(超过30个) 最高安卓11 01.07/2021更新
```Text

Android x86安装交流群：1044132520
白嫖社(一堆破解软件和免费梯子)：859142087
下列OS部分需要梯子才能下载，请进(白嫖社)群，在群文件中免费下载梯子来下载文件；
如果有关于Android x86的安装与使用等问题，欢迎进Android x86安装交流群问；
本贴会实时更新，详细更新日志请看二楼。
活跃更新中的OS：
Bliss OS(推荐，来自美国的)
这个是本帖搜集的所有OS中，运行速度最快的，也可能是唯一支持Vulkan的，兼容性是只兼容较新设备，UI不是仿Windows10的，可能刚上手会有些不习惯，但是安装没有那么方便，为了字数不要太多，教程我就不发了，下面有英文版的链接，可以到百度或有道进行网页翻译，理论上其他OS也通用。
官网(英文)：https://www.blissos.org/
BlissOS14(安卓11内测版)下载(英文)：https://sourceforge.net/projects/blissos-dev/files/Android-Generic/PC/bliss/alpha/

BlissOS12英特尔系列版(安卓10公测版)下载(英文)：https://sourceforge.net/projects/blissos-dev/files/Android-Generic/PC/bliss/
BlissOS12AMD平台专版(安卓10公测版)下载(英文)：https://sourceforge.net/projects/blissos-dev/files/merkaba/amd/
BlissOS11(安卓9正式版)下载(英文)：https://sourceforge.net/projects/blissos-x86/files/Official/bleeding_edge/Generic%20builds%20-%20Pie/
Blissos Lite(安卓10精简公测版)下载(英文)：https://sourceforge.net/projects/blissos-dev/files/Lite/
BlossOS11(Surface专版),Pro3/2请使用通用版本：https://sourceforge.net/projects/blissos-x86/files/Official/bleeding_edge/Surface%20IPTS%20builds%20-%20Pie/
上方部分下载链接有两个或多个相同版本，需注意文件名里的时间，若不一样，说明旧版本存在BUG，请选择较新版本，相同的话，就是一个是有GMS(谷歌服务框架)，另一个没有，请注意文件名选择需要的版本下载哦。
BlissOS7.2(64位)：https://sourceforge.net/projects/blissos-x86/files/Official/Nougat%20stable%20-%20Unsupported/Bliss-v7.2-android_x86_64-OFFICIAL-20171014-1552_k4.4.iso/download
7.2版本内核版本为4.4，4.4版本的内核无需SSE4.2，即可运行64为系统，但是有限制CPU必须为64位。
安卓9(32位)测试版下载(英文)：https://sourceforge.net/projects/blissos-x86/files/Official/bleeding_edge/Experimental%20-%2032%20bit%20%28x86%29%20builds%20-%20Pie/
32位暂时只有安卓9版本，但无64位CPU限制，适用于较老硬件，不建议64位PC安装32位版本。
BlissOS11官方贴(3楼有更新记录)(英文)：https://forum.xda-developers.com/bliss-roms/bliss-roms-development/bliss-os-pie-beta-preview-t3855917
BlissOS12测试贴(2楼有更新日志)(英文)：https://forum.xda-developers.com/android/software/bliss-os-x86-pc-s-12-x-development-t4004419
BlissOS14内测贴(含更新日志)(英文)：https://forum.xda-developers.com/t/android-generic-project-pc-gsi-build-automation-toolkit.4132031/post-84148333
安装指南和用户手册(英文)：https://docs.blissroms.com/
以上链接为持续更新的英文链接，下载请选择最新版本，建议使用迅雷下载，否则可能因外服资源影响下载过慢或无法下载，下载速度较慢的朋友可以使用下方链接下载，高速下载链接更新不及时，敬请谅解，但仍可安装后进行更新哦。
安卓10(测试版)高速下载贴：http://bbs.phoenixstudio.org/cn/read.php?tid=29954(感谢我是米粉7的提供)
PhoenixOS Darkmatter(推荐，外国修改版凤凰系统)
这是另外一个外国大佬为64位支持SSE4.2CPU专门定制修改的凤凰系统，基于凤凰系统，进行修改，并且持续更新，支持系统内OTA升级，Beta版本刚刚更新，改进非常多。
社区官网(英文)：https://supreme-gamers.com/resources
国内交流Q群：895450984
介绍视频：https://www.youtube.com/watch?v=RlMzv8OgrcE
下载：https://mega.nz/file/4M1imZbT#BzvEZIPFUvrIrU2pz1GheIL9CAgNZ-OyC8yIigGGsd4
4.7BETA-2版本官方贴：https://supreme-gamers.com/resources/phoenixos-darkmatter-supercharged-for-gamers.2/
PS：更多下载方式，请看第241楼，有(EXO4.7 BETA-2版本)官方提供的所有链接，及文档说明
安装教程：https://www.youtube.com/watch?v=UEVuOKyk7ds
4.7BETA-2版本完整更新日志：https://supreme-gamers.com/resources/phoenixos-darkmatter-supercharged-for-everyone.2/
Carbon ROM(兼容新硬件)
基于安卓10，5.8内核，兼容最新10代平台。
官网：https://carbonrom.org/ (感谢x86群的群友。的提供)
下载：https://sourceforge.net/projects/blissos-dev/files/Android-Generic/PC/carbon/
PhoenixOS-ROC(不推荐,外国修改版64位凤凰系统)
这是外国大佬为64位支持SSE4.2CPU专门定制修改的凤凰系统，基于凤凰系统，进行修改，并且持续更新，支持系统内OTA升级，推荐这个，比楼下更专业更好用，分多个版本而且更新更快，安装教程在外国贴里有，但需要进行翻译。
常规版单应用运行速度不如游戏版，但无游戏版同时开多个窗口运行卡慢的问题，游戏版针对游戏，对单应用资源分配较多，不适合多任务运行，精简版去掉了许多系统应用并且对系统还进行而外精简化处理，跟适合性能较差的电脑。
必须挂梯子，然后要加载好才能点，人机验证上方还会有广告，验证完后点下载会先下载，下载后应该是ZIP格式的，打开会有一个EXE，按提示操作会获得KEY，输入到刚刚下载的网页里，就能下载了。
标准版下载(英文)：http://skip.az/ROCFullv2
常规版海外贴(英文)：http://bbs.phoenixstudio.org/en/showthread.php?tid=13388
游戏版下载(英文)：http://www.patreon.com/posts/phoenix-os-roc-31116233
游戏版海外贴(英文)：http://bbs.phoenixstudio.org/en/showthread.php?tid=45747
精简版下载(英文)：http://www.patreon.com/posts/phoenix-os-roc-31058308
精简版海外贴(英文)：http://bbs.phoenixstudio.org/en/showthread.php?tid=457355
Lineage OS(不推荐)
这个OS不太好用，但是对于新硬件的兼容性很高(支持10代平台)，基于安卓10版本，浓浓Android x86原版的外貌，不支持应用窗口化，应用兼容性极差，不推荐使用。
官网：https://www.lineageos.org/
64位下载：https://sourceforge.net/projects/blissos-dev/files/Android-Generic/PC/lineage/LineageOS_v17.1-android_x86_64-202008292133_k-k4.19.122-ax86-ga-rmi_m-lineage-17.1_dgc-q-x86-generic_ld-2.4.102-q-x86_dg-lineage-17.1_dh-lineage-17.1_mg-lineage-17.1_gms_cros-hd_cros-wv.iso/download
32位下载：https://sourceforge.net/projects/blissos-dev/files/Android-Generic/PC/lineage/LineageOS_v17.1-android_x86_64-202009091904_k-kernel-5.8-si-next-rmi_m-lineage-17.1_dgc-q-x86-generic_gms_cros-hd_cros-wv.iso/download
AndEX(不推荐)
这个OS也不好用，安卓9版本，浓浓Android x86原版的外貌，无游戏助手，区别好像就是无谷歌，不支持应用窗口化，只不过内核升级过了，外国售价9美元，也就是目前的63块人民币，不推荐使用，下面是免费下载，有人购买分享的，目前官方只有64位版本。
官网：https://www.andex.net/
下载：https://pan.baidu.com/s/1z2mMh33wM6fe_crR7cTM5g(感谢7777777的提供)
安装教程：http://bbs.phoenixstudio.org/cn/read.php?tid=28097&fid=12(感谢7777777的提供)

缓慢或停更的OS:
Dante Official(推荐凤凰系统修改版）
这个站点专门修改第三方OS，目前已修改了凤凰系统和PrimeOS，所有版本都是安卓7.1.2的，版本号是修改后的修改版本，不是官方原版底包版本号，目前有一段时间没更新了。凤凰系统修改版现已去广告，没装过，不知道怎样，patreon官网和论坛不用梯子，但不和谐官网和下载要梯子，官方贴里还有别的搭配文件可供下载，请选择你下载的版本官方贴，不要下错了。
patreon官网：https://www.patreon.com/danteofficial(感谢RoyalDevanth的提供)
不和谐官网：https://discord.gg/jDzyZ3k
凤凰系统推荐使用2.0版本，2.0是4.19内核(mesa18)；而2.1是4.14内核(mesa17)，会锁30帧，若会替换内核可试2.1。
凤凰系统2.0_64位官方贴：https://www.patreon.com/posts/phoenix-os-vip-2-35036497
凤凰系统2.0_64位下载：https://mega.nz/#!bs0XVQCa!TkOZpQUMVvCTbNgscxxFj3vqfnis9WgMFpPADRSszaA
凤凰系统2.1_64位官方贴：https://www.patreon.com/posts/phoenix-os-vip-2-35036644
凤凰系统2.1_64位下载：https://mega.nz/#!W58CDK6Y!W59-IovxeGy49R06C7tHVLSPDPKwhMjeBarnMiPz1cs
凤凰系统1.0_32位官方贴：https://www.patreon.com/posts/phoenix-os-vip-1-33820989
凤凰系统1.0_32位下载：https://mega.nz/#!Hod0WCKa!Rf93_HvZwZyVqff9dK7wNJwbTZ9SuLt7NhlRH1WguLA
PrimeOS1.0_64位官方贴：https://www.patreon.com/posts/prime-os-beast-1-33846976
PrimeOS1.0_64位下载：https://drive.google.com/open?id=1psAf4U78mJ7N7fy4hsIilzSNyKjN_Tqu
PrimeOS1.0_32位官方贴：https://www.patreon.com/posts/prime-os-beast-1-33825957
PrimeOS1.0_32位下载：https://mega.nz/#!28NnnYZT!4aiBK35YF9YBxGriEcRM1WOn15RO1Nb4A7JfgUpE_c8
PrimeOS(不推荐，安卓7.1)
来自印度的OS,官网也可以下载，版本有区分，介绍在下方，安装不是很方便，而且也不是很好用，甚至已经很长时间没有进行更新了，所以不推荐。
Mainline版:适用于最新设备的64位版本，支持独显，性能比Standard版强，有SSE4.2无法运行的请使用Standard版
Standard版:适用于早期的64位有SSE4.2设备，软件兼容性适中，性能没楼上强，不支持独显。
Classic版(极为不推荐):适用于无SSE4.2的设备,硬件兼容性较强，但不自带Hundini，软件兼容性很差，大部分应用闪退，所以64CPU无SSE4.2推荐使用RemixOS64位，RemixOS的64位版本无SSE4.2限制。
官网(英文)：https://www.primeos.in/
下载(英文)：https://primeos.in/download/
PhoenixOS BR(不推荐，外国修改版32位凤凰系统)
这是外国大佬为32位无SSE4.2支持CPU专门定制修改的凤凰系统，基于凤凰系统进行重新修改，并且持续更新，支持系统内OTA升级，但是这个系统虽然能玩腾讯游戏，但运行速度不如原版，所以能用RemixOS的还是用RemixOS吧！
下载: https://pan.baidu.com/s/13uVYaIC8BLgeHksy2d7cnw  提取码: 9p98(感谢轨迹as的提供)

安卓模拟器：
雷电模拟器(推荐)
GPU性能强悍，掉帧控制最好，应用兼容性强，多开没有逍遥流畅，偶发卡死(非常少见)，目前版本存在看视频白屏无法观看问题。
N卡2020.3.17驱动版本445.75升级后，部分游戏出现画面撕裂花屏问题，已在2020.8.17的452.06版本得到解决，更新驱动即可。
4.0为安卓7.1版本，3.0为安卓5.1版本；4.0的64位为64位的安卓7.1版本，8月7号刚刚正式，性能比32位版本更强！
官网：https://www.ldmnq.com/
下载：https://dl.softmgr.qq.com/original/game/ldinst_4.0.45.exe
x64专版下载：https://dl.softmgr.qq.com/original/game/ldinst-4.0.44.64.exe
4.0(安卓7.1)更新日记：https://www.ldmnq.com/ld_update_log.html?log=4
3.0(安卓6.0)版本下载：https://dl.softmgr.qq.com/original/game/ldinst_3.110.0.exe
3.0(x32)更新日记：https://www.ldmnq.com/ld_update_log.html?log=3
论坛：https://www.ldmnq.com/forum/
常见问题：https://www.ldmnq.com/article/130.html?from=indexnav
逍遥模拟器(推荐)
总体性能强悍，兼容性强，稳定性强，多开极为流畅，推荐使用，但存在部分游戏加载会先卡0%一会才能动的BUG(较为严重)，测试版需注意版本，若和正式版版本相同请选择正式版，默认为安卓7.1，64位7.1和安卓5.1、4.0在逍遥多开器中创建。
N卡2020.3.17驱动版本445.75升级后，部分游戏出现画面撕裂花屏问题，已在2020.8.17的452.06版本得到解决，更新驱动即可。
官网：http://www.xyaz.cn/
论坛：http://bbs.xyaz.cn/
下载：https://www.xyaz.cn/download.php?file_name=XYAZ-Setup-7.3.2-ha0e6e6820
x64专版下载：https://download.microvirt.com/download/game/XXAZ-Installer-gcc1621.exe
多开版(工作室版)在多开时性能相比原版(个人版)更强，多开(群控)相关功能也更多，但是单开时性能相比原版(个人版)稍弱。
多开版下载：https://www.xyaz.cn/download.php?file_name=XYAZ-Setup-studio-7.3.2-hac50fd5f7
测试版：http://bbs.xyaz.cn/thread-19-1-1.html
更新日记和部分历史版本下载：http://bbs.xyaz.cn/forum.php?mod=viewthread&tid=76
MUMU模拟器/手游助手(无VT首选)
流畅度还行，兼容性稳定性也不错，暂不支持多开，需要在设置里进行修改才能流畅，支持Mac，测试版的MUMU手游助手不是很好用，但MUMU手游助手在不开VT下表现极为流畅，推荐无VT或打不开的设备使用。
官网：http://mumu.163.com/
助手下载：https://adl.netease.com/d/g/zs/c/gw
模拟器下载：https://adl.netease.com/d/g/a11/c/gw
MAC模拟器下载：https://adl.netease.com/d/g/a11/c/mac
x64专版模拟器下载：https://a11.gdl.netease.com/MuMuInstaller_1.1.1.3_v2.4.11x64_zh-Hans_1609767762.exe
论坛：http://bbs.mumu.163.com/
常见问题：http://mumu.163.com/help/
模拟器更新日记：http://mumu.163.com/20200515/25905_880856.html
手游助手更新日记：http://mumu.163.com/20200515/25905_880846.html
夜神模拟器
界面美观，但不是很流畅，支持MAC，兼容性及稳定性欠佳，偶发卡死问题，多开卡慢和卡死问题很严重，不推荐。
官网：https://www.yeshen.com/
下载：https://www.yeshen.com/cn/download/fullPackage
x64专版下载：https://res06.bignox.com/full/20201204/abedeeb3f0cd4376bb9968a20c554dd2.exe
MAC版本下载：https://www.yeshen.com/cn/download/fullPackage/mac_fullzip
论坛：https://bbs.yeshen.com/forum.php
常见问题：https://www.yeshen.com/faq/
更新日记和部分历史版本下载：https://www.yeshen.com/blog/version/
蓝叠模拟器
老牌模拟器，老引擎，兼容性不错，但速度上差的比较多，多开运行慢但不会卡死，稳定性很高，但因流畅度和其他模拟器差太多，不推荐使用。
中国版本更新较慢，国际版版本更高，模拟器内不支持更改语言，这里提供的是繁体中文的版本，其它语言在国际服官网右上角可更改。
官网：www.bluestacks.cn
下载：https://aliosscdn.bluestacks.cn/client/BlueStacks4Setup.exe
Beta下载：https://aliosscdn.bluestacks.cn/client/BlueStacksDev.exe
x64专版下载：https://aliosscdn.bluestacks.cn/client/Bcgp64Setup.exe
常见问题：https://www.bluestacks.cn/faq.html
国际版：https://www.bluestacks.com/tw/index.html
国际版更新计入：https://support.bluestacks.com/hc/zh-tw/articles/360021469391-Release-Notes
腾讯手游助手(不玩腾讯游戏则不推荐)
运行速度不佳，容易卡死，CPU/GPU占用率也是十分的高，更新速度很慢，但只兼容腾讯部分游戏的极速引擎表现还行，但部分游戏还是存在掉帧现象，若不是为了过吃鸡过检验，不建议使用。
官网：https://syzs.qq.com/
下载：https://s.syzs.qq.com/k_pack_up/6725/b2811225/syzs_installer_1000208831_smzhsy.exe
论坛：https://bbs.guanjia.qq.com/forum-303-1.html
遁地模拟器(不推荐)
运行比较卡慢，兼容性非常差，稳定性欠佳，容易卡死，界面不美观，不推荐使用。
官网：https://www.ddmnq.com/
下载：https://www.ddmnq.com/download/ddmnq/dr.exe
常见问题：https://www.ddmnq.com/news/1
更新日记和部分历史版本下载：https://www.ddmnq.com/news/20.html
手游模拟大师(不推荐)
运行卡慢，兼容性非常差，稳定性不错，界面不美观，不支持多开，不推荐使用。
官网：http://g.monidashi.cn/
下载：http://cdn-file-ssl-monidashi.ludashi.com/gamemaster/update/7.1.3575.2185/LDSGameMasterMini_officialwebsite.exe
常见问题：http://g.monidashi.cn/page/faq
更新记录：http://g.monidashi.cn/page/updatelog

完全停更的OS：
Remix OS 3.0/2.0(仅推荐无SSE4.2用户使用）
建议使用2.0，兼容性比3.0强，3.0部分应用会闪退或进不去，2.0兼容性秒杀凤凰系统，性能也比凤凰强一些，2.0安卓5.1，3.0安卓6.0；RemixOS的内核版本为4.4，64位无SSE4.2限制，推荐无SSE4.2用户使用，只有64位CPU限制，再说32CPU早就不存在了2004年就停产了，理论上通用，压缩包内有exe安装包也有ISO，2.0请解压至同一独立目录下安装，3.0需手动选择ISO文件。
下载(多版本)：https://pan.baidu.com/s/1IeATQ1VXSvjMbHYB0AVtsg    提取码：pdbe
OpenTHOS(不推荐，国产)
目前最新版本安卓8.1，只有64位版本，无SSE4.2不可用，只支持UFUI启动，而且兼容性较差，系统稳定性也比较差，容易奔溃，暂不支持独显，不支持AMD系列。
官网(已经无法访问)：https://www.openthos.com/
下载(安卓8.1版)：https://mirrors.tuna.tsinghua.edu.cn/openthos/Release/8.1/unstable/
其他版本下载：https://mirrors.tuna.tsinghua.edu.cn/openthos/Release/
安卓资料和用户手册：https://github.com/openthos/userguide-analysis/blob/master/SUMMARY.md
以上为持续更新链接，链接内有包含MD5校验码的TXT下载。
凤凰系统特殊版本
v2.2.1/2.2.2  x32(安卓7.1)：凤凰系统32位7.1因为兼容性较差所以后面改成5.1了，这是基于凤凰系统_ x32安卓7.1最终版2.2.1基础上修改的，兼容性相比原版大幅增加，感谢@万里即可、@youling257等论坛活跃人群的修改测试与提供。
EXE安装包：https://pan.baidu.com/s/1CGQ8xnL4dXk5mJ_U0ZemsA(暂无ISO安装包)
V2.2.2修改版论坛链接:http://bbs.phoenixstudio.org/cn/read.php?tid=19088(内有下载安装教程)
最后一个无广告版本：3.0.7是凤凰系统64位的最后一个无VIP插件(广告)的版本，游戏助手等系统应用为旧版本。
v3.0.7下载：https://pan.baidu.com/s/1UEvY5cUrZyqDBDfCAi42SA         提取码：ax00(感谢thzzy的提供)
v1.5.1为1.5.0发布后官方的内测版，该版本无VIP插件，32位用户推荐代替1.5.0使用，1.5.1和1.6.0唯一差别就是1.6.0多了VIP插件和云电脑，其他应用版本完全一致，而1.6.0和1.6.1只是去了云电脑(解决云电脑已停止运行的提示)，也就是说1.5.1和1.6.1除VIP插件以外，没有任何区别，可以说是1.6.1的去广告版本，游戏助手等系统应用为最新版本，与64位相同。
官方版本测试贴：http://bbs.phoenixstudio.org/cn/read.php?tid=12351
v1.5.1EXE下载：https://pan.baidu.com/s/1iCekrQXghyt0AvB8_h5HtA        提取码:v5n8
v1.5.1ISO下载：https://pan.baidu.com/s/1eSOvjbW         提取码:无加密
Surface专版原帖地址：http://bbs.phoenixstudio.org/cn/read.php?tid=28807
Surface专版安装教程：http://bbs.phoenixstudio.org/cn/read.php?tid=28972
Surface Pro4专版下载：https://pan.baidu.com/s/1d0fVFp-OCDmnSNqpDF3sGQ      提取码：j2nt
MEGA网盘(不限速)：https://mega.nz/#!PKBi0A5A!lEIiBTkUWhBircYmR_eJtuNeUz3jcctpGxmgJgQbtFk
Surface GO专版下载：https://pan.baidu.com/s/1gLvaSDMxzFuWlT8FFiSbGA
MEGA网盘(不限速)：https://mega.nz/#!GLJmQaDQ!HN7SrQBYpQH6il1yOLenqe6I566KkQwuAJeQBNxuHMM

完全停更的模拟器：
靠谱安卓
老牌模拟器，但是仅仅是个应用商店，没有属于自己的内核，只是靠的其它模拟器运行的框架。
官网：http://www.kpzs.com/(似乎被腾讯收购了)
海马玩模拟器\手游助手
界面还行，易用性也不错，但是性能欠佳，安装包百度里有，后续这里也会补充。
官网：http://droid4x.haimawan.com/ (已经无法访问)
天天安卓模拟器
靠谱的官方模拟器，界面不美观，性能还行，易用性欠佳。
官网：http://www.ttmnq.com/(似乎被腾讯收购了)
51模拟器
更新周期短暂，且一年没更新了，没有比较好的技术支持，所以各方面表现比较差，不推荐使用。
官网：https://www.51mnq.com/
论坛：http://bbs.51mnq.com/forum.php?ch=51mnq
一玩助手
360做的模拟器，刚开始就倒了，更新周期极短，性能界面以及易用性欠佳，不推荐使用。
官网：http://www.yiwanzhushou.com/
小蚁安卓模拟器(原叶子猪)
性能还行，易用性很差，且停更时间较长，不推荐使用。
官网：http://tools.yzz.cn/
常见问题：http://ant.96pk.com/help/
论坛：http://bbs.yzz.cn/forum-74-1.html?from=anttop
iTools
公司现在去做苹果助手了，模拟器数年没更新了，技术基本已经跟不上了，不推荐使用。
官网：https://pro.itools.cn/syzs/
下载请选择精简包，完整版因为服务器迁移，已经404了。
新浪手游助手
以前是微博官方模拟器，但是现在数年没更新了，技术基本已经跟不上了，不推荐使用。
官网：http://www.987you.com/

安卓原生OS：
Android x86(不推荐,安卓原生)
这是Android x86原版，无游戏助手，不支持应用窗口化，只建议提供研究，不推荐日常使用及游戏，版本号代表安卓版本R代表x86系统版本，目前只收入最新版，即最高R版本。
安卓x86中文站：http://www.x86android.com/
9.0 R2更新记录：http://www.x86android.com/articles/2844.html
64位9.0下载R2：http://down.kejianjidi.com/x86_9.0_r2/android-x86-9.0-r2.iso
32位9.0下载R2：http://down.kejianjidi.com/x86_9.0_r2/android-x86_64-9.0-r2.iso
k4.9的64位9.0：http://down.kejianjidi.com/x86_9.0_r2/android-x86_64-9.0-r2-k49.iso
8.1 R5更新记录：http://www.x86android.com/articles/3042.html
64位8.1下载R5：http://down.kejianjidi.com/8.1_r5/android-x86-8.1-r5.iso
32位8.1下载R5：http://down.kejianjidi.com/8.1_r5/android-x86_64-8.1-r5.iso
K4.9的64位8.0：http://down.kejianjidi.com/8.1_r5/android-x86_64-8.1-r5-k49.iso
64位7.1下载R3：http://down.x86android.com/x86_7.1/android-x86_64-7.1-r3.iso
32位7.1下载R3：http://down.x86android.com/x86_7.1/android-x86-7.1-r3.iso
64位6.0下载R3：http://pan.baidu.com/s/1kVyXZy3     提取码：无加密
32位6.0下载R3：http://pan.baidu.com/s/1boE7jwr      提取码：无加密
32位4.4下载R5：http://pan.baidu.com/s/1kVz3fNp     提取码：rke6

```
http://bbs.phoenixstudio.org/cn/read.php?tid=30102&fid=12  
# 删除git所有分支的文件,包括历史分支  
在项目根目录执行
```bash
git filter-branch --force --index-filter 'git rm --cached --ignore-unmatch path-to-your-remove-file' --prune-empty --tag-name-filter cat -- --all
```
https://www.cnblogs.com/shines77/p/3460274.html

# Wed Mar 17 09:02:25 AM CST 2021
## python批量安装包  
pip install -r requirements.txt
https://www.cnblogs.com/x2x3/p/11408829.g

# Wed Mar 17 09:02:09 AM CST 2021
## MariaDB,MySQL常见问题
ERROR 2002 (HY000): Can't connect to local MySQL server through soket '/var/run/mysqld/mysqld.sock' (2)  
不能通过上述文件连接到MySQL服务  
可能原因:
 - 文件不在那个目录, 自己找去, 可以试试locate
 - 压根就没有安装mysql server, archwiki https://wiki.archlinux.org/index.php/MariaDB_(%E7%AE%80%E4%BD%93%E4%B8%AD%E6%96%87)#%E9%87%8D%E7%BD%AE_root_%E5%AF%86%E7%A0%81 , 如果没有就用包管理器搜索mysql-server

访问root要加sudo
unix_sock只能用root才能访问  
将plugin改成mysql_native_password即可, 不过root只能通过管理员访问也是挺合理的
update mysql.user set authentication_string=PASSWORD(‘mysql’), plugin=‘mysql_native_password’ where user=‘root’;  
https://blog.csdn.net/zkpython/article/details/107174656?utm_medium=distribute.pc_relevant.none-task-blog-baidujs_title-2&spm=1001.2101.3001.4242  

# Wed Mar 17 09:01:45 AM CST 2021
Arch时间不准
timedatectl set-timezone Asia/Shanghai

# Wed Mar 17 09:01:32 AM CST 2021
keys could not be locally signed
删掉原来的keys重新init
```bash
sudo rm -rf /etc/pacman.d/gnupg
sudo pacman-key --init
sudo pacman-key --populate archlinux manjaro
```
https://nparsons.uk/blog/manjaro-keys-could-not-be-locally-signed
https://bbs.archlinux.org/viewtopic.php?pid=1044011#p1044011


# Wed Mar 17 09:00:56 AM CST 2021
## deepin wine qq spark 输入框中文显示不正常
### 总结  
1. 尝试更改LANG
如:
使用`LANG=zh_CN.UTF-8 /opt/apps/com.qq.tim.spark/files/run.sh`运行
```bash
#!/bin/bash

#   Copyright (C) 2016 Deepin, Inc.
#
#   Author:     Li LongYu <lilongyu@linuxdeepin.com>
#               Peng Hao <penghao@linuxdeepin.com>

LANG=zh_CN.UTF-8
BOTTLENAME="Spark-TIM"
APPVER="3.2.0.21856spark0"
EXEC_PATH="c:/Program Files/Tencent/TIM/Bin/TIM.exe"
START_SHELL_PATH="/opt/deepinwine/tools/run_v3.sh"
export MIME_TYPE=""
export DEB_PACKAGE_NAME="com.qq.tim.spark"
export APPRUN_CMD="deepin-wine5"

export ATTACH_FILE_DIALOG=1

if [ -n "$EXEC_PATH" ];then
    $START_SHELL_PATH $BOTTLENAME $APPVER "$EXEC_PATH" "$@"
else
    $START_SHELL_PATH $BOTTLENAME $APPVER "uninstaller.exe" "$@"
fi
```
2. 尝试yay安装windows各类字体,比如ttf-ms-fonts,wqy-zhenhei  
3. 尝试将装好的字体连接到Fonts里面  
方法可能不唯一  

### 过程
~~在网上找了半天,最后发现pacman装一个包就可以了~~  
```Bash
sudo pacman -S deepin-fonts-wine
```
发现不知道怎么又方框了,上面那个方法又不起效果了  
最后将环境变量LANG改为zh_CN.UTF-8可以有效


# Wed Mar 17 09:04:37 AM CST 2021
# backlight 无法调节亮度
调节亮度可以有两个方法, 一个是手动修改/sys/class/backlight/目爱下的下的亮度文件, 另一个方法是用软件来调节, 我一般用xbacklight  
不过xbacklight 只支持核显, 下面有一篇CSDN的文章好像可以装apcilight(兼容xbacklight)支持独显
《Backlight - Archwiki》https://wiki.archlinux.org/index.php/Backlight
《Archlinux 屏幕亮度调节失效问题解决 - CSDN上我觉得挺优秀的博客》https://blog.csdn.net/weixin_40101580/article/details/105347874  


# Sat Mar 20 06:58:45 PM CST 2021
Linux笔记本取消盖上睡眠  
我的电源是systemd管理的, 所以我改一下systemd的配置就可以了  
将/etc/systemd/logind.conf文件的HandleLidSwitch的注释去掉,并将值改为ignore(HandleLidSwitch是不插电源合盖操作,插点电源的是另一个, 看英文就懂了)  
改完之后重启一下systemd-logd服务,或者直接重启就可以了
```bash
sudo systemctl restart systemd-logd  
```

[《每日Ubuntu小技巧：合上笔记本，系统不睡眠》](https://linux.cn/article-2485-1.html)  

 
# Sat Mar 20 07:40:43 PM CST 2021
java 作用域   
https://blog.csdn.net/dujianxiong/article/details/92988982


# Thu Apr  8 10:43:34 AM CST 2021
linux磁盘测速 速度测试
```
hdparm -Tt /dev/sda
```


# Wed May 19 09:48:59 PM CST 2021
vim 保存提示CONVERTION ERROR(转换错误)  
这是文件编码问题, 用`:set fileencoding`查看一下文件编码, 看到如果不是utf8那就改成utf8, 之后就可以保存了  


# Wed May 19 10:00:44 PM CST 2021
vim 编码知识总结(部分, 忘记总结了)
:set fileencoding 查看当前文件编码, 也可以更改
:e filename ++enc=编码 可以使用指定编码打开文件 


# Wed Jun  9 07:45:39 PM CST 2021
float.h宏定义比较浮点型大小是否相等  
float.h里面有EPSILON的宏定义  
```c
if (fabs() < DBL_EPSILON) 
```

# Wed Jul  7 12:20:03 AM CST 2021
Arch Linux中vncviewer无法连接树莓派, 连接之后秒断
```bash
$ gvncviewer 192.168.149.1
Connected to server
Disconnected from server
```
## 解决方法  
直接换成realvnc, yay里面有包, aarch64版本是树莓派的, 不知道有什么区别, 大多数人下的都是realvnc-vnc-viewer, 可以使用  

# Wed Jul  7 12:23:31 AM CST 2021
sudo -u www-data 可以指定用户操作, 测试网站是否有权限进行访问以及读写操作  

# Wed Jul  7 12:24:48 AM CST 2021
apache使用软链接配置nextcloud出现403 Forbidden You don‘t havepermission to access thisresource.
修改网站在/etc/apache2/sites-available中对应的配置文件, 将包含软链接的路径加到配置文件中, 并在Options中**加入**FollowSymLinks选项将其打开  
/etc/apache2/sites-available/000-default.conf
```apache
		<Directory /var/www/html>
                Options +Indexes +FollowSymLinks +MultiViews -SymLinksIfOwnerMatch
                AllowOverride all
                Order allow,deny
                allow from all
        </Directory>
```

# Sun Aug  1 04:06:47 PM CST 2021
查看字体映射  
使用gucharmap很方便  

# Sun Sep 26 02:10:34 PM CST 2021
Java JButton 无法显示, 只显示三个点"..."  
原因: 文字太多显示不下了, 或者Margin太大显示不出来, 把Margin调小可能就行了  
`jButton.setMargin(new Insets(0,0,0,0));`  

# Tue Oct 12 11:55:11 AM CST 2021
sftp应用  
windows 上有winscp linux上有 sshfs

# Sat Oct 23 01:31:11 PM CST 2021
omf oh-my-fish 的安装配置  
 - 如果有梯子，那么直接`curl -L https://get.oh-my.fish | fish`  
 - 如果没有梯子，那可能得要去github克隆离线安装甚至要换fastgit
```bash 
# with git
$ git clone https://github.com/oh-my-fish/oh-my-fish
$ cd oh-my-fish
$ bin/install --offline
```
如果克隆不下来那么换fastgit
```bash 
# with git
$ git clone https://hub.fastgit.org/oh-my-fish/oh-my-fish
$ cd oh-my-fish
$ vim repositories
# 这类似换源，omf的安装目录下也有这个文件，同样将github.com改成hub.fastgit.org
$ bin/install --offline
```

# Sat Oct 23 01:44:47 PM CST 2021
termux 安装Powerline字体  
https://github.com/powerline/fonts  
将对应的字体放到~/.termux/font.ttf  
重启或者执行termux-reload-settings  
bubthefish上表现最好的我觉得是DejaVu

# Sat Nov 13 10:30:10 PM CST 2021
运行shell脚本的时候提示`$'\r': command not found`和`syntax error: unexpected end of file`  
问题原因: 文件格式不对, 该文件的fileformat多半为dos, 而要linux能正常识别, 那么就要将fileformat改成unix. vim操作:
```vimscript
" 查看文件格式
:set fileformat
" 修改文件格式
:set fileformat=unix
" 然后保存
:wq
```

# Sun Nov 14 01:04:08 PM CST 2021
信任apt源, 跳过gpg认证
```
deb [trusted=yes] http://...
```
https://stackoverflow.com/questions/46562801/how-to-install-debian-package-from-unsigned-repository

# Thu Nov 25 07:54:45 PM CST 2021
嵌入式STM32各种缩写和全称  
[https://www.cnblogs.com/emanlee/p/14233740.html](https://www.cnblogs.com/emanlee/p/14233740.html)  

# Thu Nov 25 07:57:51 PM CST 2021
STM32的代码里RCC->APB2ENR是什么意思  
回答:  
> 0RCC->APB2ENR这样的语句的意思就是使能相应外设的时钟啊。。。。。。
> 在需要使用某外设时，需要先开启该外设相应的时钟，否则外设不工作
> 你多看看《参考手册》及原子哥写的《不完全手册》
[https://bbs.elecfans.com/jishu_1864339_1_1.html](https://bbs.elecfans.com/jishu_1864339_1_1.html)  


# Fri Dec 10 12:14:07 PM CST 2021
如何查看一个程序是被什么启动的  
emmm，这个，，，还真的不太知道，但是在查病毒的时候，发现systemctl status 可以查看PID
`systemctl status PID`即可查看相关信息，或许可以从这里入手去查是怎么启动的


# Fri Dec 10 01:54:24 PM CST 2021
syntax: character literal contains multiple characters
Stacktrace:
Julia单引号只能引一个字符，双引号才能引字符串

# Sat Dec 11 08:21:28 PM CST 2021
ssh实现反向连接  
本地计算机
```bash
ssh -R bind_port:localhost:22 username@host
```
服务器
```bash
ssh -p bind_port username@localhost
```
[https://www.cnblogs.com/x_wukong/p/5997872.html](https://www.cnblogs.com/x_wukong/p/5997872.html)

# Sun Dec 26 07:23:24 PM CST 2021
julia如何画bode图  
plot(exp10.(w),L(w))  

# Sun Dec 26 07:24:42 PM CST 2021
julia 函数对矩阵每个元素进行操作  
在函数名后面加个点exp10.(x)  
叫做[broadcast](https://cn.julialang.org/JuliaZH.jl/latest/manual/arrays/#Broadcasting)  
julia>?broadcast

# Sun Dec 26 07:39:36 PM CST 2021
julia plot指定x和y的显示范围  
plot(x,y,xlims=(0,1),ylims=(0,1))  


