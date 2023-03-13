包管理器的常用操作(通常都要使用root权限o运行，所以前面通常需要加上sudo)  
|操作|Pacman|Apt|
|:--:|:----:|:-:|
|同步仓库数据<br>(所有仓库操作之前都要先同步)|pacman -Sy（常用）<br>pacman -Syy（强制同步）|apt update|
|搜索软件包|pacman -Ss 关键词|apt search 关键词 |
|安装在线仓库包|pacman -S 包名<br>pacman -S 仓库名/包名|apt install 包名<br>apt install 包名/仓库名|
|更新包数据并安装包|pacman -Sy 包名|sudo apt update && sudo apt install 包名|
|更新所有包|pacman -Su|apt upgrade|
|更新包数据并更新所有包|pacman -Syu|sudo apt update && sudo apt upgrade|
|安装本地包|pacman -U 包路径|apt install包路径<br>dpkg -i 包路径|
|通过文件在仓库中寻找包|先pacman -Fy<br>然后pacman -F 文件名<br>pacman -Fl \| grep 部分文件名|先apt-file update<br>然后apt-file search<br>（apt-file需要从包管理器中额外安装）|
|列出已安装包的所有文件|pacman -Ql 包名|dpkg -L 包名<br>dpkg-query -L 包名<br>dpkg -S 包名<br>dpkg-query -S 包名|
|查看文件属于哪个包|pacman -Ql \| grap 文件路径|dpkg -S 文件路径|
