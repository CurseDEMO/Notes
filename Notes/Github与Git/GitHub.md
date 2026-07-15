[[../概念解释#GitHub|概念解释]]
一定要先看[[视频教程]]
# 注册
可能需要魔法
- 填写邮箱,按照指导注册(中间绿色按钮)
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260616173327830.png)
# 如何创建远程仓库
1. 进入[GitHub主页](https://github.com/)并登录
2. 单击绿色按钮New创建仓库
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/%E5%88%9B%E5%BB%BA%E4%BB%93%E5%BA%93.png)
3. 填写详细信息 ![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/%E9%A1%B5%E9%9D%A2%E4%BB%8B%E7%BB%8D.png)
- 这个只是对.gitignore的简单理解,实则不严谨
- 右下角绿色按钮指创建仓库
> [!NOTE] 选择许可证
>这个网站简单介绍了许可证 [选择一个开源软件协议 | Choose a License](https://choosealicense.cc/)
# 获取远程仓库地址
下面以ComfyUI仓库为例, 获取它的远程仓库地址.
1. 在浏览器搜索或在GitHub搜索栏输入ComfyUI
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260617093951708.png)
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260617094037977.png)
2. 进入仓库
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260617094242541.png)

3. 点击绿色按钮(内容是<>Code), 里面的网址就是我们需要的仓库地址.
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260617094551386.png)
4. 点击旁边的两个方框重叠在一起的图标即可复制地址
5. 要使用它需要Git当中的[[Git#克隆现有仓库|克隆命令]]

# 进行开发
请参照这系列文章来配置通行证
[管理提交签名验证 - GitHub 文档](https://docs.github.com/zh/authentication/managing-commit-signature-verification)
下面是简要概括
## 安装GnuPG
从群文件或者[下载链接](https://www.gnupg.org/ftp/gcrypt/binary/gnupg-w32-2.5.21_20260702.exe)下载安装
## 生成GPG密钥
- 打开Git Bash
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260713164113857.png)
- 输入`gpg --full-generate-key`
- 一路回车, 到最后一步(让你从(y/N)二选一)的时候输入y(不输的话会循环)
- 输入名字, 邮箱, 描述, 密码
## 使用GPG密钥
- 输入`gpg --list-secret-keys --keyid-format=long`
- 复制sec ed25519/之后的数字
- 输入`gpg --armor --export 上一步的数字` 
- 复制以 `-----BEGIN PGP PUBLIC KEY BLOCK-----` 开头并以 `-----END PGP PUBLIC KEY BLOCK-----` 结尾的 GPG 密钥。
- 进入[SSH and GPG keys](https://github.com/settings/keys)
- 点击New GPG, 输入标题title和上文的密钥内容key
- 输入`git config --global --unset gpg.format`
- 输入`gpg --list-secret-keys --keyid-format=long`
- 复制sec ed25519/之后的数字
- 输入回车`git config --global user.signingkey 上一步的数字`
- 输入回车
```shell
git config --global commit.gpgsign true
git config --global tag.gpgSign true
```
## 工作流程
- 以下内容摘自Pro Git
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260713170307144.png)![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260713170703401.png)
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260713170805632.png)
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed@main/img/20260713170842983.png)