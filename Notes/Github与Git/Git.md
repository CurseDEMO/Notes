一定要先看[[视频教程]]
[[../概念解释#Git|概念解释]]
# 安装
1. 先[[../Visual Studio Code/VSCode基本安装与配置|安装VSCode]]
2. 打开Git安装程序,无脑下一步,注意在选择编辑器界面选择VSCode(下拉菜单选择,==必须先安装VSCode==,否则无法安装Git)之后无脑下一步.
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/Pasted%20image%2020260615133432.png)
# 小白使用
 参考[[GitHub#注册|注册]]界面注册好账号并[[GitHub#如何创建远程仓库|创建一个全新的仓库]]
# Git操作
## 命令行操作(基础)
- 约定:包含在\[]的内容为可选内容, 在<>中的为必填内容
### 初始化
- 运行
```console
git config --global user.name "John Doe"
git config --global user.email
johndoe@example.com
```
- 邮箱选用你在注册Github时的邮箱
#### 自行初始化
- 你需要在[[../概念解释#命令行#命令行程序|命令行]]使用[[#命令行#基本操作#cd|cd]]命令以cd到你想要初始化的目录
- 输入并回车执行`git init`即可,该目录就会成为你的本地仓库
#### 克隆现有仓库
- 你需要在[[../概念解释#命令行#命令行程序|命令行]]使用[[#命令行#基本操作#cd|cd]]命令以cd到你想要保存仓库的目录
- 输入并回车执行`git clone [url] [name]`即可克隆
- 其中\[url\]指的是远程仓库(例如GitHub远程仓库)地址, 需要你去网页[[GitHub#获取远程仓库地址|获取]]
- \[name]指的是你想给仓库取的名字, 一般不填, 可选.
#### 网络问题
也许你会发现clone失败, 多半是被墙.
- 参照[[../魔法和机场/代理软件ClashParty和机场|代理软件ClashParty和机场]]安装完成后, 保持软件打开, 设置git代理. 每次使用git均需要打开代理软件.
```bash
# 设置 HTTP 代理
git config --global http.proxy http://127.0.0.1:7890
# 设置 HTTPS 代理
git config --global https.proxy https://127.0.0.1:7890
# 设置 SOCKS5 代理
git config --global http.proxy socks5://127.0.0.1:7891
git config --global https.proxy socks5://127.0.0.1:7891
```
默认端口为, 根据代理软件具体信息调整:
- https和http: 7890
- socks5: 7891
代理软件查询端口: 点击内核设置, 查看混合, Socks, Http端口, 一般设置混合端口即可
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260619164101299.png)
### 检查[[../概念解释#Git中的文件状态|文件状态]]
不要把==$==当作命令的一部分, 它只是为了区分一下输入和输出, 更多的会在Linux章节解释.
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
- 若发现显示一大串数字, 该情况是中文乱码, 需要复制粘贴回车执行以下操作
	1. 打开[[../概念解释#命令行|命令行]]
	2. 输入一下命令并回车(你也可以选中并右键它, 复制然后粘贴到命令行)
```bash
git config --global core.quotepath false
git config --global gui.encoding utf-8
git config --global i18n.commit.encoding utf-8
git config --global i18n.logoutputencoding utf-8
```
### git add命令
- 含义:多功能命令, 可以开始跟踪新文件, 把已跟踪文件放入暂存区, 在合并时把有冲突的文件标记为已解决状态.
- 总结: 添加内容到下一次提交(暂存区)
- 示例:
```bash
git add CONTRIBUTING.md  # 把CONTRIBUTING.md放入暂存区(不论它未跟踪还是已跟踪)
git add * # 将所有文件放入暂存区(不论它未跟踪还是已跟踪)
```
### .gitignore文件介绍
- 用来选定你不想提交的文件, 比如无聊的日志文件, 额外增生的编译文件, 简称垃圾(bushi), 一旦列在以下文件, 它们不会被跟踪也不会被提交, 官方针对不同场景和编程语言提供了一些[模板](https://github.com/github/gitignore)
```bash
# no .a files 忽略所有以.a结尾的文件
*.a 
# but do track lib.a, even though you're ignoring .a files above
!lib.a 
# only ignore the TODO file in the current directory, not subdir/TODO (其他目录下的TODO文件)
/TODO 
# ignore all files in the build/ directory 
build/ 
# ignore doc/notes.txt, but not doc/server/arch.txt 只忽略doc目录下的以.txt结尾的文件, 但不忽略doc/其他目录/*.txt
doc/*.txt 
# ignore all .pdf files in the doc/ directory  忽略所有doc目录下包括子目录(递归)以.pdf结尾的文件
doc/**/*.pdf
```
更多语法等到解释glob模式的时候再讲, \*.txt既可以表示123.txt, 也可以是456.txt, 匹配的是以.txt结尾的文件, 同理doc/\*\*/中\*\*表示任意文件夹, 只要是在doc/下的都符合条件.
### 提交更新
运行`git commit -a`即可将**已跟踪**的文件提交到仓库, 并创建一个版本, 此时还会弹出编辑器让你填提交说明.
-a表示还会将已跟踪但未暂存文件也提交
### 移除文件
#### 从工作目录删除文件
```bash
# 手动删除文件以后
git rm  # 记录上述的删除操作
git rm -f # 记录上述的删除操作并从暂存区删除它
git rm --cashed file # 从暂存区删除file
```
### 撤销操作
运行`git commit --amend`可以自上一次提交以后重新提交一遍(代替上一次提交)
### 使用[[../概念解释#远程仓库|远程仓库]]
#### 查看远程仓库
`git remote -v`查看已配置的远程仓库
#### 添加远程仓库
`git remote add <shortname> <url>`添加一个命名为shortname的远程仓库
#### 抓取与拉取
`git fetch`将远程仓库的数据拉取到本地仓库但不会合并到现有的目录
`git pull`将远程仓库的远程分支合并到跟踪它的本地分支
#### 推送
`git push [remote-name] [branch-name] [--tags]`将branch-name推送到remote-name远程仓库(, 也将标签推送到远程仓库)
### 打标签
#### 列出标签
`git tag`
#### 为某一次提交创建标签
```bash
git tag -a <tag-name> -m <message>  # 创建附注标签, 包含完整的信息:创建者, 时间等
git tag <tag-name> # 创建轻量标签, 只包含对应的提交的信息
```
## 分支操作
- 概念在此: [[../概念解释#分支|分支]]
- 每一个版本都有自己的序列号. 分支的指向目标就是序列号对应的版本.
- 举个例子
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260710174639322.png)
	第一个红色方框是标签, 第二个被HEAD所指的方框就是分支. 灰色方框是每个版本的序列号, 青色方框就是版本快照. HEAD表示你现在所在的版本. 它是一个特殊的分支. master是默认分支.
### 创建分支
- 举个例子, 你有3个版本.
`git branch testing`创建一个名为testing分支, 但不切换到那个分支
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260710175219585.png)
### 切换分支
`git checkout testing`切换到testing分支
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260710175403347.png)
假设我们这里再提交一个新版本`git commit -a`
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260710175903208.png)
注意到HEAD随着这一次操作向前移动. testing向前移动了但master并没有.
然后我们切换到master`git checkout master`
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260710180144945.png)
注意到HEAD回到了, master. 且你的工作目录也==变成了master所指向的版本==
这里, 我们再提交一次`git commit -a`
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260710180343868.png)
注意到版本有了分叉.
### 合并分支
- 我们举一个全新的例子. 你有如下3个版本. (省略HEAD)
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260710180734332.png)
下面你想创建并切换到分支iss53进行新需求的开发`git checkout -b iss53`
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260710180901741.png)
随后你在iss53进行一些工作并提交`git commit -a`
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260710181226488.png)
突然, 你发现版本C2有巨大漏洞. 接下来你需要回到master进行修复`git checkout master`. 随后创建了hotfix分支进行修复`git checkout -b hotfix`
`git commit -a`
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260711080009717.png)
接下来你需要将其与master分支合并. 首先你需要回到master`git checkout master` 然后再合并`git merge hotfix` 
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260711080404884.png)
这个问题修复以后, 你可以回到iss53进行新需求开发. 
但在此之前, 你需要先删除hotfix分支, 因为修复已经完成. `git branch -d hotfix` 然后再回到iss53`git checkout iss53`
![405](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260711081201246.png)


完成以后, 你想将iss53合并入master, 那么你首先需要检出master`git checkout master` 然后再将iss53合并入master`git merge iss53` 
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260711082117321.png)
这里C6是合并之后的版本. 此后你不再需要iss53`git branch -d iss53` 
但是, 并不是每一次合并都是顺利的. 当C4和C5均存在对同一文件的同一部分的修改, 那么会产生冲突.
```bash
git merge iss53 
Auto-merging index.html 
CONFLICT (content): Merge conflict in index.html 
Automatic merge failed; fix conflicts and then commit the result
```
这时候你就需要`git status`来检查一下什么文件有冲突, 打开本例中index.html文件, 注意到有如下特殊字段
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260711135900803.png)
\=\=\=\=\=\=分割了两个分支所对应的版本, 上半部分是HEAD版本中index.html文件冲突区域的内容, 下半部分iss53. 你需要二选一来解决冲突, 保留一个删掉另一个.
随后运行, `git add`来暂存更改. 运行`git status`来查看是否解决. 若确认无误, 运行`git commit`来继续合并.
### 管理分支
```bash
git branch
   iss53 
 * master 
   testing
```
以上输出了所有分支以及你所在分支(用\*表示)
```bash
git branch -v
  iss53 93b412c fix javascript issue 
* master 7a98805 Merge branch 'iss53' 
  testing 782fd34 add scott to the author list in the readmes
```
-v参数可以查看每一个分支最后一次提交, iss53表示分支名, 后面的数字是序列号, 最后的文字是提交说明
### 远程分支
- 以下内容很难精简概括, 请看原文
远程引⽤是对远程仓库的引⽤（指针），包括分⽀、标签等等。 你可以通过 remote (remote) 来显式地获得远程引⽤的完整列表，或者通过 git ls git remote show (remote) 获得远程分⽀的更多信息。 然⽽，⼀个更常⻅的做法是利⽤远程跟踪分⽀。 远程跟踪分⽀是远程分⽀状态的引⽤。 它们是你不能移动的本地引⽤，当你做任何⽹络 通信操作时，它们会⾃动移动。 远程跟踪分⽀像是你上次连接到远程仓库时，那些分⽀ 所处状态的书签。 它们以 (remote)/(branch) 形式命名。 例如，如果你想要看你最后⼀次与远程仓库 origin 通信时 master 分⽀的状态，你可以查看 解决⼀个问题并且他们推送了⼀个 origin/master 分⽀。 你与同事合作 iss53 分⽀，你可能有⾃⼰的本地 iss53 分⽀；但 是在服务器上的分⽀会指向 origin/iss53 的提交。 这可能有⼀点⼉难以理解，让我们来看⼀个例⼦。 假设你的⽹络⾥有⼀个在 git.ourcompany.com 的 Git 服务器。 如果你从这⾥克隆，Git 的 将其命名为 clone 命令会为你⾃动 origin ，拉取它的所有数据，创建⼀个指向它的 master 分⽀的指针，并且 在本地将其命名为 origin/master 。 Git 也会给你⼀个与 origin 的 master 分⽀在指向同 ⼀个地⽅的本地 master 分⽀，这样你就有⼯作的基础
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260713151110641.png)![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260713151157713.png)
![188](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260713151328059.png)
为了演示有多个远程仓库与远程分⽀的情况，我们假定你有另⼀个内部 Git 服务器，仅⽤ 于你的 sprint ⼩组的开发⼯作。 这个服务器位于 git.team1.ourcompany.com 。 你可以运 ⾏ g it remote add 命令添加⼀个新的远程仓库引⽤到当前的项⽬ 将这个远程仓库命名为 teamone ，将其作为整个 URL 的缩写。
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260713151625778.png)
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260713151719202.png)
#### 推送
`git push [remote] [branch]`即, 将分支branch推送到remote上的branch. 相当于你将本地的工作推送到远程仓库上.
例如, `git push origin main`会把main分支推送到远程仓库origin. 
需要注意的是, 当别人fetch远程仓库origin, main分支不会在本地, 只有不可更改的origin/main. 因此你需要另外创建`git checkout -b main origin/main`
#### 跟踪分支
- 与远程分支直接相关的本地分支, 若在这个分支使用git pull, git会自动识别从哪个服务器抓取, 合并到哪个分支
`git checkout -b origin/main --track`会在本地自动创建名为main的跟踪分支(跟踪origin/main)并自动拉取.
`git branch -u origin/main`则会将当前分支跟踪到origin/main分支
#### 拉取
当 gi t fetch 命令从服务器上抓取本地没有的数据时，它并不会修改⼯作⽬录中的内 容。 它只会获取数据然后让你⾃⼰合并。 然⽽，有⼀个命令叫作 况下它的含义是⼀个 git fetch 紧接着⼀个 git pull 在⼤多数情 git merge 命令。 如果有⼀个像之前章节 中演示的设置好的跟踪分⽀，不管它是显式地设置还是通过 clone 或 checkout 命令为 你创建的， git pull 都会查找当前分⽀所跟踪的服务器与分⽀，从服务器上抓取数据然 后尝试合并⼊那个远程分⽀。 由于 g it pull 的魔法经常令⼈困惑所以通常单独显式地使⽤ fetch 与 merge 命令会 更好⼀些。
#### 删除远程分支
`git push origin --delete main`删除远程仓库上的main分支
### 变基
假设你有以下分支历史
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260713153301453.png)然后进行变基(提取在 C4 中引⼊的补丁和修改，然后在 C3 的基础上再 应⽤⼀次.)
```
git checkout experiment
git rebase master
git checkout master
git merge experiment
```
会发生以下事情
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260713154154285.png)
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260713154210298.png)
==一旦你将某一分支推送到有其他人参与的远程仓库, 你就不能对该分支进行变基, 不然后果严重, 会让你吃大分==
rebase VS merge
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260713154732986.png)
所以你就选你喜欢的即可
# 关于提交信息
[约定式提交](https://www.conventionalcommits.org/zh-hans/v1.0.0/)
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260713160207994.png)

