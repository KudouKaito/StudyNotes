[Linux 和 macOS 平台工具链的标准设置 - ESP32 - &mdash; ESP-IDF 编程指南 latest 文档](https://docs.espressif.com/projects/esp-idf/zh_CN/latest/esp32/get-started/linux-macos-setup.html)

```
sudo pacman -S --needed gcc git make flex bison gperf python cmake ninja ccache dfu-util libusb
mkdir -p ~/esp
cd ~/esp
git clone -b v5.0.1 --recursive https://github.com/espressif/esp-idf.git
```
![](/home/kaito/.config/marktext/images/2023-02-23-21-57-19-image.png)

![](/home/kaito/.config/marktext/images/2023-02-23-21-57-36-image.png)
换源  [下载工具备选方案](https://docs.espressif.com/projects/esp-idf/zh_CN/v5.0.1/esp32/get-started/linux-macos-setup.html#id7)  
```
cd ~/esp/esp-idf
export IDF_GITHUB_ASSETS="dl.espressif.com/github_assets"
./install.fish esp32
```
![](/home/kaito/.config/marktext/images/2023-02-23-22-10-26-image.png)

![](/home/kaito/.config/marktext/images/2023-02-23-22-10-43-image.png)
按照说明运行环境变量配置文件，也可以设置一个alias
```
alias -s get_idf='. $HOME/esp/esp-idf/export.sh'
```
![](/home/kaito/.config/marktext/images/2023-02-23-22-12-43-image.png)

![](/home/kaito/.config/marktext/images/2023-02-23-22-12-55-image.png)

插上esp32，我lsusb能识别出来设备，但是没有/dev/ttyUSB0，最后重启解决了问题。





[ESP-IDF Tests with Pytest Guide - ESP32 - &mdash; ESP-IDF Programming Guide latest documentation](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/contribute/esp-idf-tests-with-pytest.html)

启动pytest
