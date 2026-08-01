==**请先学习Python**==
# 环境配置
- 安装[[../Visual Studio Code/VSCode基本安装与配置|VSCode]]
- 安装扩展C/C++
- 下载[编译器](https://aka.ms/vs/stable/vs_BuildTools.exe)并选择**使用C++的桌面开发**然后点击安装
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260728130235653.png)
- 在这里创建first.cpp文件. 上方一个加号的图标点击即可.
 ![211](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260728135727700.png)
 - 在右上角, 点击调试文件
 ![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260728140131691.png)
 - 在上方弹出的栏, 选择第一个即可(不一定名字一样)
 ![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260728140215336.png)
  - 恭喜你运行成功, 以后你需要调试就选*调试文件*单纯运行就选*运行文件* .
  - 如果你遇到一些问题, 请`Ctrl+Shift+P`, 然后搜索terminal:select default profile, 点击command prompt.
# 基础(不必全部理解)
## 语句
- 每一个语句后面要有**分号;**.
- 每一个变量必须声明. (`type-name var-name;`)
## main()
函数定义
```c++
int main()
{
	...
	return 0;
}
```
- 每一个C++程序==必须==包含**main函数**
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260728142729278.png)
## 注释
- 以`//`开头
## 预处理器
`#include <iostream>` 编译时自动运行, 预处理器将iostream文件添加到程序中(即源代码编译前, 替换or添加文本)
## 头文件
上节的iostream就是头文件
- 命名约定
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260728143641682.png)
## 名称空间
`using namespace std;`使得头文件的定义对程序可用(暂时不用理解它, 且不建议使用, 由于本教程面向新手, 故使用)
- 让函数能够访问名称空间std. 
- 原则是只让需要访问名称空间的函数使用对应的using语句
	- `using std::cout;`
	- 诸如此类
## 显示一条消息
- 如果你想像Python一样print一个消息, 请输入`cout << "Hello, World!";`
- 完整程序
```c++
#include <iostream> 
using namespace std; 
int main() {
   cout << "Hello, World!"; 
   return 0; 
}
```
- 原理:
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260728144350366.png)
## 另起一行
`endl`, 如果它输入到输出流中会导致换行
## 代码格式(重要)
- 每条语句一行
- 花括号各占一行
- 函数中的语句相对于花括号要有缩进Tab
- 与函数名称相关的圆括号周围没有空白
## 赋值
使用=
## OOP面向对象编程
### 类
- 描述了一种数据类型的全部属性.
### 对象
- 根据类的描述创建的实体.
不理解没关系, 学完Python就理解了, 或者看下文.
## 函数
### 函数调用
- e.g `sprt(2)`调用sprt函数, 计算2的算数平方根.
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260728150642185.png)
- 完整代码:
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260728151022436.png)
### 定义函数
```c++
// 先定义函数原型(格式: 返回值类型 函数名(输入值类型);)
type functionname(type);  // 第一个type是返回值类型, 第二个是参与类型
// 再定义函数
type functionname(agruments)
{
	statements;
}
```
- 应把上述函数放在main函数的后面
- 函数定义不得嵌套(一个函数定义里面不能定义另一个函数)
- `type`表示类型, `functionname`是函数名, `arguments`是参数, `statements`是语句.
- 除了void类型的返回, 每一个函数定义都需要`return`语句.
## 命名约定
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260728162158637.png)
# 数据
## 变量
### 标识符
- 字母+数字+下划线_
- 不能以数字开头
- 大小写敏感
- 不得使用关键字
- 以__或下划线和大写字母开头的名称被保留给编译器和及其使用资源(实现)使用. 以_下划线开头的名称被保留给实现, 用作全局标识符 (细节在下文讨论).
### 整型
- char
- short
- int
- long
- long long
- 以上每一个都有无符号类型(unsigned) , 基本整型共10+1种. 多出来的是signed char.
#### 长度
- short至少16位
- int至少和short等宽
- long至少32位且至少与int等宽
- long long至少64位且至少与long等宽
- 使用头文件climits
	- 确定不同系统的整型最大长度
		- INT_MAX表示当前系统最大int. LLONG_MAX LONG_MAX SHRT_MAX同理
		- CHAT_BIT: 字节位数
		- 示例
		- ![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260729070604832.png)
		- 输出:
		- ![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260729070746655.png)
	- 确定一个类型的宽度
		- sizeof函数, 可以确定在不同系统中一个类型的字节数
	- 该头文件的符号常量
		- ![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260729071151616.png)
#### 初始化方式
- `int my_var;` `my_var = 114514` 
- `int my_var = 114514;`
- `int my_var{114514};`(推荐)
- 以上三个都是将my_var初始化并赋值114514.
#### 如何选择整型
- int -高效
- short -省内存
- char -只需一个字节
- long和long long -数值很大的时候
#### 选用进制
- 0x或0X开头的为16进制
- 0开头的且其余每一位数字为1-7的为8进制
- 1-9开头的为十进制
- 它们都以二进制存储在计算机中
#### 修改cout进制显示方式
- 在输出数字前设置格式: `cout << hex` (16进制) `cout << oct` (8进制)
- 示例
- ![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260729081552788.png)
#### char
- 字符常量书写: 用'  '括起来, 表示其数值编码
- 存储一个字节`char ch = 'M';
- 比如一个'M', 对应ASCII码77, 即ch实际内容是77
#### cout.put( ) OOP典范
基础概念见Python. 这里是类ostream的成员函数put( ), 由对象cout使用, 中间用句号.隔开. 即:通过类ostream类对象cout使用成员函数put( ).
#### 转义序列
![210](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260729121825006.png)
#### wcha_t
- 宽字符类型, 表示扩展字符集, 一种整数, 空间足以表示系统使用的最大扩展字符集.
- 使用wcout和wcin
- 字符常量为`L'M'`
#### char16_t和char32_t
- 均无符号, 只有16位和32位的区别
- 前者字符常量为`u'M'`后者为`U'M'` 
#### bool
- true和false, 分别可转换为int中的1,0.\
- 任何非零值都可转为true, 反之为false.
### 浮点数
#### 表示
- 带小数点
- E记法(科学计数法): `2.34E+9`即2340000000
#### 有效位: 数字中有意义的位
- 14000有效位是2位
- 12.123是5位
#### 浮点类型
- float 至少32位 使用f/F后缀
- double 至少48位且不少于float
- long double至少和double一样多 使用L后缀
## const限定符
- 类似`#define`
- 用于定义常量, 定义后不可修改.
- 格式: `const type name{value};`
## 运算
- 加+, 减-, 乘\*, 除/ (如果被除数和除数都是整数, 则结果为商的整数部分, 反之为浮点数)
- %, 求模(余数), 两边必须是整数, 若有一个是负数, 则a % b = a - (a / b) \* b 
- 类型转换
	- 由小位到大位可以自然进行, 安全的. 反之, 转换后结果不确定或者变得奇怪.
	- 强制转换: `static_cast<typeName>(value)` 返回一个转换后的值.