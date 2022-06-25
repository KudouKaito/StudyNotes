# session
tmux的命令可以不打全，只要能匹配到唯一命令即可，比如tmux a即可匹配到tmux attach。类似ip a匹配ip address   
## 新建session
```bash
tmux new -s <session-name>
```
## 离开session
```bash
tmux detach
```
## 查看session列表
```bash
tmux ls
tmux list-session
```
<kbd>Ctrl</kbd>+<kbd>b</kbd>  <kbd>s</kbd>
## 恢复session
```bash
tmux attach
# 通常
tmux a

tmux attach -t <session-name>
```
