[[../概念解释#Git|概念解释]]
# 安装
1. 先[[安装VSCode]]
2. 打开Git安装程序,无脑下一步,注意在选择编辑器界面选择VSCode(下拉菜单选择,==必须先安装VSCode==,否则无法安装Git)之后无脑下一步.
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/Pasted%20image%2020260615133432.png)
# 小白使用
 参考[[GitHub#注册|注册]]界面注册好账号并[[GitHub#如何创建远程仓库|创建一个全新的仓库]]
# Git操作
## 命令行操作(基础)
### 初始化
#### 自行初始化
- 你需要在[[../概念解释#命令行#命令行程序|命令行]]使用[[#命令行#基本操作#cd|cd]]命令以cd到你想要初始化的目录
- 输入并回车执行`git init`即可,该目录就会成为你的本地仓库
#### 克隆现有仓库
- 你需要在[[../概念解释#命令行#命令行程序|命令行]]使用[[#命令行#基本操作#cd|cd]]命令以cd到你想要保存仓库的目录
- 输入并回车执行`git clone [url] [name]`即可克隆
- 其中\[url\]指的是远程仓库(例如GitHub远程仓库)地址, 需要你去网页[[GitHub#获取远程仓库地址|获取]]
- \[name]指的是你想给仓库取的名字, 一般不填, 可选.
### 检查[[../概念解释#Git中的文件状态|文件状态]]
- 执行`git status`你可能得到以下输出, 其中涉及的额外命令稍后解释
```bash
# 仓库内容和工作目录内容完全一致
$ git status
On branch master nothing to commit, working directory clean


# 存在未跟踪文件
$ git status 
On branch master Untracked files:
 (use "git add ..." to include in what will be committed) 

	README 

nothing added to commit but untracked files present (use "git add" to track)


# 存在已跟踪且存入暂存区的文件, 等待被提交
$ git status
On branch master Changes to be committed:
 (use "git reset HEAD ..." to unstage) 

	new file: README


# 存在已跟踪且被修改但未存入暂存区的文件
$ git status 
On branch master
Changes not staged for commit:
  (use "git add ..." to update what will be committed)
  (use "git checkout -- ..." to discard changes in working directory)

	  modified: CONTRIBUTING.md
```
- 若发现显示一大串数字, 该情况是中文乱码, 需要执行以下操作
	1. 打开[[../概念解释#命令行|命令行]]
	2. 输入一下命令并回车(你也可以选中并右键它, 复制然后粘贴到命令行)
```bash
git config --global core.quotepath false
git config --global gui.encoding utf-8
git config --global i18n.commit.encoding utf-8
git config --global i18n.logoutputencoding utf-8
```