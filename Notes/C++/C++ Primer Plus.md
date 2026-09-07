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
## 变量与基础数据类型
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
## 更复杂的复合类型
### 数组
`typeName arrayName[arraySize]`
- typeName存储元素的类型
- arrayName数组名
- arraySize元素个数, 必须是整数常量或const值而不是变量
- 务必给至少一个元素赋值,例如`typeName arrayName[arraySize] {1, 2, 3,...};`将每一个元素赋值为一些数字
- 数组只能初始化一次, 不能将一个数组赋值给另外一个数组
- 若初始化时提供的值少于数组长度, 则其他元素均设为0. 若你想将这个初始化为0, 那么你可以`typeName arrayName[arraySize]{}`
#### 索引
- 从零开始
- `arrayName[index]`, 务必不要越界
### 字符串(C-风格)
- 第一种是char数组, 以`'\0'` 结尾.
- 第二种是字符串常量/字符串字面值 ( 注意与字符常量的单引号做区分 ). 它也是char数组, 但形如`char str[]{"string"};
#### 拼接
- 任何由两个空白 (空格, 制表符, 换行符) 分割的字符串常量都将自动化拼接成一个
- `sizeof(array)`会指出数组的长度 (以byte为单位). 而来自头文件cstring的`strlen(stringInArray)`会指出字符串中可见字符长度, `strncpy(positionName, source, maxLength)`或`strcpy(positionName, source)`用于复制字符串. `strcat(char1, char2);`会把2接到1后面
- 截取字符串可以将中间一个字符设置成`\0`即可, 因为数组字符串只会读取到`\0`为止, 其余后面的会被忽略.
![444](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260802104625369.png)
#### 读取输入
- cin其中一个缺陷是如果输入结果包含空白, 则只会读取前半部分. 剩下的要么被丢掉, 要么被下一个cin读取
- 故可使用`cin.getline(array, length)`成员函数读取整行, array是指你要存入的数组名字, length是最多可读取的字符串长度. 但只能读取length-1个字符, 因为最后一个字符必须添加`'\0'`.
- 其实你可以这样写以读取两次: `cin.getline(name1, length1).getline(name2, length2)`
- ![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260802104706449.png)
- 还有一种叫做`cin.get(array, length)`与上面的区别是不再读取并不再丢弃换行符. 因此引申出一个问题: 连续两次调用`cin.get(array, length)`会产生第二个cin读取不到的问题, 具体大家可以试试. 因此更好的是在第一个那里使用`cin.get(array, length).get()` 
### 字符串string类
- 先包含头文件string.
- 还要`using std::string`. string类使得我们不需要使用数组处理, 可以当做普通变量 `string str{"string"}`.
- 索引和数组一致
- 不过它可以自动处理string的大小, 而且还能用+, +=来拼接字符串.
- string成员函数`size()`可以确定字符串字符数, 用法是`stringName.size()`返回长度.
- 输入: `getline(cin, stringName)` 
- ![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260802113101211.png)
- ![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260802113205241.png)
### 结构, 共用体, 枚举
```cpp
// 放在main外部, 这是结构定义, 结构可以包含不同的类型
struct structName
{
	typeName varName{};
	...
} name3{}, name4{}; // 同时初始化structName结构name3, name4

// 创建变量访问属性
structName name1{var, ...};
name1.varName;   // varName成员

structName name2{var, ...};
name2 = name1; // 成员赋值有效

// 结构数组
structName arrayName[20]{{}}; // 初始化包含20个类型为structName的结构

// 这是共用体, 它可以存储多种类型但只能同时存储一种类型, 如果省略unionName则成为匿名共用体
union unionName
{
	typeName varName;
};

// 可以代替const的新方法
// enum, 即枚举
// 创建枚举
enum spectrum {a, b, c, ...}; // a, b ,c默认值为0, 1, 2. 这三个称为枚举量, 枚举量必须是整型
spectrum band; // 声明枚举变量
band = a; // band只能接受spectrum中定义的a, b, c...
// 当然你也可以指定值, 比如把a改成a = 10; 那么紧跟其后的未初始化的b自动加1, 变成11, c是12. 当然你也可以指定b,c的值
```
### 指针
- `&`运算符可以指出变量在内存的位置.
- 例如`&home`就是home的地址. 指针就是这样的值
- `*`运算符可以是间接值或解除引用运算符, 如对于指针使用`*`即可获取该地址的值
```cpp
// 声明指针
int mai{6};
int* maiP;
maiP = &mai; // 此时maiP指针指向mai的, 也就是6的地址
// 此时maiP和&mai一样,都是6的地址, *maiP和mai一样,都是6
// 为一个数据对象获得并指定分配内存
typeName * pointerName = new typeName;
// 释放内存(仅用于空指针和new创建的指针)
delete pointerName;
// 创建动态数组
int* psome = new int [10];
typeName* pointerName = new typeName[elementNum];
// 释放动态数组
delete [] psome;
delete [] pointerName;
// 访问动态数组, 指针可以作为数组名
psome[0];
psome[1];
// 创建动态结构
struct inflatable // 定义结构
{
	int price;
};

inflatable * ps = new inflatable // ps是指针
ps->price = 20; // 访问price并赋值20
(*ps).price = 20; // 和上一句等效
// 综合运用
inflatable s1, s2, s3;
// 指向结构s1的指针
inflatable* pa{&s1};
pa->price = 2; // 和s1.price = 2; 一致
(pa + 1) -> price = 3; // 和s2.price = 3; 一致
// 结构数组
inflatable arrS[3];
arrS[0].price = 2;
// 结构指针数组
inflatable* arrP[3]{&s1, &s2, &s3};
arrP[0]->price = 2; // 和*arrP[0].price = 2; 一致
// 结构指针数组的指针
inflatable** ppa = arrP; // 和auto ppa = arrP; 一致
(*ppa)->price = 2; // 和arrP -> price = 2; 一致

// 动态数组的替代品模板类vector, 模板类array
// 引入头文件vector, array, using std::vector, using std::array
vector<typeName> vt(size); // 标准格式
array<typeName, size> arr; // 这里的size是常量
```


> [!Warning] 指针的危险
> 一定要在对指针使用解除引用运算符 **\*** 之前将指针初始化为一个确定的适当的地址.

# 循环, 分支, 关系表达式, 逻辑运算符
```cpp
for (initialization1, init2, ...; testExpression; updateExpression1, uE2, ...)
{	
	statement
	...
}
for (typeName x : object)
{
	statement
	...
}
// 加入&以修改object内容
for (typeName &x : object)
{
	statement
	...
}
// i++ 表达式使用i原先的值, 再加1. ++i i先加1, 表达式使用i加1后的值. 后者效率更高
// 逗号运算符,  可以将多个语句合并为一个语句
// 引入头文件cstring, 使用strcmp(element1, element2)可以比较两个C-风格字符串, 相同返回0 反之非0
// 当至少有一方是string, 你可以用关系运算符直接比较二者而不是strcmp()
while (testExpression)
{
	statement
	...
}
// 实现延迟循环: 头文件ctime提供了类型clock_t,常量CLOCK_PER_SEC和clock()函数, clock()函数可以获取程序开始后所用时间, 单位为刻, CLOCK_PER_SEC可以和秒相乘获得刻, 刻最好用clock_t存储
// 创建别名 
typedef typeName aliasName; // aliasName为别名

do
{
	statement
	...
} while (testExpression);
// EOF检测
// 
cin.fail(); // 判断是否到达EOF, 到达返回true

// if语句
if (testCondition)
{
	statement
	...
}
else
{
	if (testCondition)
	{
		...
	}
	else
	{
		...
	}
}
// 与: && 或: || 非: !
// 库cctype
isalpha(char); // 判断字符是否为字母
isdigits(char); // 判断字符是否为数字
isspace(char); // 判断字符是否为空白
ispunct(char); // 判断字符是否为标点符号
```
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/20260815172301527.png)
```cpp
expression1 ? expression2 : expression3; // 若第一个为true, 则返回第二个, 反之为第三个
// switch语句
switch (intExpression)
{
	case label1 : statements
	case label2 : statements
	...
	default     : statements
}
// break continue 同Python
// cin特性
cin.clear() // 重置错误输入标记
```
![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/20260815173949466.png)
```cpp
// fstream头文件处理文本文件输入输出
#include<fstream>
#include<ctsdlib>
using std::ofstream;
ofstream file; // 创建ofstream对象file, 准备写入文件
file.open("test.txt"); // 打开text.txt文件
file << "123" // 向文件写入123

using std::ifstream;
char wt;
ifstream file; //创建对象file, 准备读取文件
file.open("test.txt"); // 打开text.txt文件
file.is_open(); // 检查文件是否成功打开, 若成功返回true
file >> wt; // 将文件内容写入wt

exit(EXIT_FALIURE); // 来自cstdlib, 终止程序

file.eof(); // 最后一次读取操作读取到EOF返回true
file.fail(); // 最后一次读取操作类型不匹配返回true
file.bad(); // 最后一次读取操作遇到其他非法原因, 返回true
file.good(); // 最后一次读取操作完全正确且不到EOF, 返回true
```
## 拓展
`cout.setf()` 和 `cout.precision()` 是 C++ `<iostream>` 中用于**控制输出格式**的两个核心成员函数。它们分别负责“开关标志位”和“精度/位数设置”。

---

### 1. `cout.precision(n)` — 控制数值精度

#### 作用

设置浮点数输出的**有效数字位数**或**小数点后位数**（取决于当前是否设置了 `fixed` / `scientific` 标志）。

#### 两种模式

|当前格式标志|`precision(n)` 的含义|示例 (`n=3`)|
|:--|:--|:--|
|**默认** (无 fixed/scientific)|**总有效数字**为 n 位|`3.14159` → `3.14`|
|`fixed` 或 `scientific`|**小数点后**保留 n 位|`3.14159` → `3.142`|

#### 用法

```cpp
#include <iostream>
using namespace std;

double pi = 3.14159265;

// 默认模式：3位有效数字
cout.precision(3);
cout << pi << endl;          // 输出: 3.14

// fixed模式：小数点后3位
cout.setf(ios::fixed);
cout.precision(3);
cout << pi << endl;          // 输出: 3.142

// scientific模式：小数点后3位 + 科学计数法
cout.setf(ios::scientific);
cout.precision(3);
cout << pi << endl;          // 输出: 3.142e+00
```

> ⚠️ **注意**：`precision()` 的设置是**持久的**，一旦设置，后续所有输出都生效，直到再次修改。它返回之前的精度值，可用于保存/恢复：
> 
> ```cpp
> streamsize old = cout.precision(4); // 设为4，保存旧值
> // ... 输出 ...
> cout.precision(old);                // 恢复
> ```

---

### 2. `cout.setf(flags)` / `cout.setf(flags, mask)` — 设置格式标志位

#### 作用

通过位掩码（bitmask）开启/关闭特定的格式化选项。

#### 常用标志位

|标志|作用|等价操纵符|
|:--|:--|:--|
|`ios::fixed`|定点表示法（小数点后固定位数）|`std::fixed`|
|`ios::scientific`|科学计数法|`std::scientific`|
|`ios::showpoint`|始终显示小数点和尾随零|`std::showpoint`|
|`ios::showpos`|正数前显示 `+`|`std::showpos`|
|`ios::uppercase`|十六进制/科学计数法用大写字母|`std::uppercase`|
|`ios::left`|左对齐|`std::left`|
|`ios::right`|右对齐（默认）|`std::right`|
|`ios::internal`|符号左对齐，数值右对齐|`std::internal`|
|`ios::hex` / `oct` / `dec`|十六进制/八进制/十进制|`std::hex` 等|
|`ios::boolalpha`|bool 输出 true/false 而非 1/0|`std::boolalpha`|

#### 两种重载形式

```cpp
// 形式1：直接设置（仅开启，不影响其他无关位）
cout.setf(ios::fixed);
cout.setf(ios::showpoint);

// 形式2：先清除mask对应的位，再设置flags（安全切换互斥选项）
// 例如切换进制时，必须先清除旧的进制标志
cout.setf(ios::hex, ios::basefield);   // basefield = hex|oct|dec
cout.setf(ios::scientific, ios::floatfield); // floatfield = fixed|scientific
```

> ⚠️ **关键陷阱**：`fixed` 和 `scientific` 属于同一组互斥标志（`floatfield`）。如果只用形式1同时设置了两者，行为未定义。**必须用形式2**：
> 
> ```cpp
> // ✅ 正确切换到 fixed
> cout.setf(ios::fixed, ios::floatfield);
> 
> // ❌ 危险：可能两个标志同时被置位
> cout.setf(ios::fixed);
> cout.setf(ios::scientific); // 未清除 fixed！
> ```

#### 取消标志

```cpp
cout.unsetf(ios::showpoint);       // 关闭单个标志
cout.setf(0, ios::floatfield);     // 清除整个浮点格式组，回到默认
```

---

### 3. 现代 C++ 推荐：用操纵符替代

`setf()` 和 `precision()` 虽然功能完整，但代码冗长且易出错。C++ 提供了 `<iomanip>` 中的**流操纵符（manipulators）**，效果完全等价且更安全可读：

|setf / precision 写法|等价操纵符写法|
|:--|:--|
|`cout.setf(ios::fixed, ios::floatfield)`|`cout << fixed`|
|`cout.setf(ios::scientific, ios::floatfield)`|`cout << scientific`|
|`cout.precision(3)`|`cout << setprecision(3)`|
|`cout.setf(ios::showpoint)`|`cout << showpoint`|
|`cout.setf(ios::left)`|`cout << left`|
|`cout.setf(ios::hex, ios::basefield)`|`cout << hex`|

```cpp
#include <iomanip>

// 一行搞定，清晰安全
cout << fixed << setprecision(2) << showpos << 3.14159 << endl;
// 输出: +3.14
```

### 4. 总结对比

|维度|`precision(n)`|`setf(flags)`|
|:--|:--|:--|
|**控制对象**|数值精度/小数位数|格式开关（对齐、进制、浮点表示法等）|
|**参数类型**|`streamsize` (整数)|`fmtflags` (位掩码)|
|**持久性**|✅ 持久生效|✅ 持久生效|
|**返回值**|旧精度值|旧标志状态|
|**现代替代**|`setprecision(n)`|`fixed`, `scientific`, `hex` 等|

> 💡 **建议**：除非在编写底层格式化库或需要动态/条件化设置格式，否则**优先使用 `<iomanip>` 操纵符**。理解 `setf/precision` 的原理有助于调试格式问题和阅读旧代码。