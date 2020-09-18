推荐vscode  
原生vim会比插件好的多  
# Coc  
COC,不是clash of clans,而是Conquer of Completion.中国人写的  
基本上可以理解成COC把VSCode这套插件体系给搬过来了  
可以用JavaScript或者TypeScript来写Vim插件了(真香  
JS,TS有个东西叫async await  
coc还带来了一个重要的东西叫Language Server Protocol, 微软开发的让任何编辑器不限编程语言都能 享受同意不全体验的一个协议,智能补全和许多IDE的功能(类似VSCode的)都是它带来的    
vim-Spector,不过跟coc没啥关系,先不讲  
依赖nodejs  
安装好node之后就有一个npm包管理器  
现在用它安装neovim和yarn  
```bash
sudo npm i -g neovim yarn  
```
## 安装coc  
vim-plug安装(见github里的README)  
关掉我希望以后讲的tmux  
## 安装coc扩展  
### CocInstall命令安装
如果不安装coc其实coc是没有什么用的  
:CocInstall  

:CocList  查看安装了什么插件  
\*号表示启动了的,+的意思是可以有,但没启动的,如编辑的不是json文件就不会启动coc-json  
Tab有一些操作选项  
推荐coc管理coc插件  

每换一台机器都要CocInstall会很麻烦,所以安装插件还有另一个方法:  
### 配置文件写coc全局变量安装  
```vimscript
let g:coc_global_extensions = {插件1,插件2,...}
let g:coc_global_extensions = {
 \ 插件1,
 \ 插件2,
 \ ...}  " 换行书写
```

## 发现coc插件-一个有趣的插件coc-marketplace  
安装coc-marketplace之后,就有了一个在线market,可以搜索,回车安装  
## 补全出现的问题-Tab无法补全  
需要配置  
不理解作者为什么往README里面放一个辣么长的配置文件,新手看着就觉得很麻烦  
CW推荐配置:  
`set hidden`缓冲区,在没保存的时候,跳换到其它文件,会提醒你保存  
`set updatetime=100`建议设置成100,简单来说就是让你的coc响应更快一些  
`set shortmess+=c`让你补全的时候底下那个信息栏少打出一些没用的东西  
`set signcolumn` 将行号等左边一竖列合成一片,看个人喜好    
启动Tab,见README上的配置,直接复制过去  
```vimscript
" Use tab for trigger ...
" ...
...
function! s:check_back_space() abort
...
endfunction 
```
这个配置的下一个配置  
按c-space自动来开启自动补全,CW习惯c-o(看作者配置,好像只有nvim支持space  
再下一个配置  
用回车选择补全  
如果加这段的话, 回车会直接换行了  
再往下一个,这个东西很有用,跳转到上一个或者下一个报错位置,CW用空格 -/=  
再往下这几个也是非常有用,直接复制过去了    
它可以让vim来查看当前函数是在哪定义的,或者当前函数在哪调用过  
再下一个是用K来显示当前关键词的文档,CW改成了<LEADER>h,我似乎也挺喜欢的  

`autocmd CursorHold * silent call CocActionAsync('highlight')`让光标所在的那个词的同一个词会通过某写方式高亮,CW用的是其它插件实现    
`nmap <leader>rn <Plug>(coc-rename)`变量重命名,复制过来  
然后下一个是代码格式化的,CW有别的插件  
`augroup mygroup...`折叠之类的配置,CW跳过了  
再下一个就很有用了  
`xmap <leader>a...`右键一块代码,有一些选项建议  
下面那些就自己看了  

不推荐:
`set nobackup`和`set nowritbackup`,作者说会开这个配置遇到一些问题#649,这个问题已经关闭,CW说从没遇到过问题  
`set cmdheight=2`不要加上这个,完全没有任何作用,现在已经有浮动窗口了,它只会让你少一两行  

## coc-settings  
VSCode的那一套,用的是json来配置  
可以配置很多自定义、自动化的东西,甚至可以不安装coc-json等补全插件(当然不推荐不装)    
:CocConfig或者找到vim配置文件夹里面的coc-settings.json  
json先要打一组空大括号  
```json
{

}

```
可以增加很多很多配置  
通过Ctrl+空格还是Ctol+o(上面配置的补全shortcut)来查看安装的所有coc插件提供的可以配置的项,这一大堆配置一般都很有用  

设置coc插件自动更新(异步更新,不影响体验)  
```json
{
"coc.preferences.extensoionUpdateCheck":daily,
...
}
```
一个大类suggest,里面就有很多配置  
这里比较推荐的是suggest.noselect,true,如果想看一下它默认是true还是false的话,可以启动一下它的补全,这个的功能是补全的时候默认选择第一项  
配合suggest.enablePreselect为false,关掉预选第一项,可以实现,回车直接换行,按Tab选择第一项,再按回车就展开了,花里胡哨选择默认值之类的      

:help coc-nvim可以获取帮助  

自动补全图标,Nerdfont.com/cheat-sheet可以找图标    
`"signOffset": 1`让git等信息比这些图标优先显示  
`"codeLens.enable": true` 也是VSCode有的一个很好用的功能  
`"list.previousKeymap": <C-u>`CW Colemak键盘改键,这是上下移动,我们应该用默认值就可以了(原来是jk,CW是ue  
`"coc.preferences.formatOnSaveFiletypes": ["json"]`意思是在json文件保存的时候格式化代码  


## 推荐安装的插件  
从coc-markspace可以看到很多插件,当然也可以从README拉下去,官方也给了一个插件列表  
JS或TS推荐安装eslint(js),tsserver(js,ts)  
coc-prettier代码格式化,开箱即用,但是可以按自己的喜好配置(见README)  
Python,coc-python,coc-pyright(微软的强类型python偶尔会遇到一些奇怪的问题,一般都是pyright的问题)
php,coc-phpls还是不错的  
Swift,coc-sourcekit,需要点配置,配置`"languageserver"...`安装个服务      
Dart,dart-vim-plug,flutter一个跨平台开发框架,用Dart开发,coc-flutter,作者现在很少维护了,CW的coc-flutter-tools增加了一些东西    
(35分左右,CW讲解flutter功能,我估计没用到,就不记了)  

coc-actions,显示一些可以对这行代码的操作(搜索配置文件"actions")  
C,可以直接配置language serer  README里面有说(又有个Language server的链接),然后搜索C++,可以用这个配置文件,也可以用coc-clangd    
### 非补全插件  
文件管理器  
coc-explorer,:CocCommand explorer  

直接打:CocCommand 会显示所有Coc插件提供的命令,建议定一个快捷键  
CW nnoremap成了tt  


translator,translator.popup    

### 代码片段补全工具coc-snippets  
特别好用  
配置,先搜索vim-snippets,里面包含了很多很多snippets,安装它,也可以写很多自己定义的snippets  
```json
"snippets.ultisnips.directories": [
"UltiSnips",      //默认
"$HOME/.config/nvim/UltiSnips/",
"$HOME/.config/nvim/plugged/vim-snippets/UltiSnips"
]
```
这样就基本可以补全很多代码片段了  
coc-snippets README里面有说一些配置,补全快捷键之类的  


