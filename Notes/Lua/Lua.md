# 语法
## 标识符
英文字母, 数字, 下划线. 且==不能==以数字开头. 大小写敏感.
## 注释
- 以 **--** 开头的为单行注释. 
- 以 **--\[\[** 开头并以 **\]\]** 结尾的为多行注释
- 注释代码: 以 **--\[\[** 开头并以 **--\]\]** 结尾的为代码注释
	- 若需要重新启用, 只需在 **--\[\[** 之前再加一个 **-** ( 即: **---\[\[** )
# 变量
## 全局变量
- 无需声明
- 若不初始化, 默认为nil (空)
## 类型和值
- type()可获取类型
- **nil**: 无效值
- **Boolean**: **true** 和 **false**
	- 逻辑运算: **and or not** 同[[../Python/环境配置|Python]]
- **number**: 
	- 科学计数法: 4.57e-3 = 0.00457  4.57e+3 = 4570
	- 123, 123.123, 这些都是数值常量
## 运算:
- 一元运算符: 加+减-乘\*除/
- 向下取整的整除: //
- 取模 (求余数): %
- 关系运算: <, >, <=, >=, =\=, ~= (不等于) 均返回Boolean
## math库
- 三角函数（sin ,cos ,tan ,asin 等）、指数函数、取整函数、最大和最小函数max 和min ,用于生成伪随机数的伪随机数函数（random ）以及常量pi 和huge（最大可表示数值，在大多数平台上代表inf )。
	- 伪随机数
		- `math.random()`返回\[0,1)的随机实数.
		- `math.ramdom(n)` 返回\[1, n]的随机整数.
		- `math.random(m, n)` 返回\[m, n]的随机整数
		- 一般用`math.randomseed(os.time())`设置随机数种子
	- 取整
		- `math.floor(n)`将n向下取整
		- `math.ceil(n)`将n向上取整
		- `math.modf(n)`将n向0取整
		- 向最近整数取整
			```lua
			function round(x)
				local f = math.floor(x)
				if x == f then return f
				else return math.floor(x + 0.5)
				end
			end
			```
## 字符串: 一串字节的不可变序列
- 用 **""或''** 括起来的东西叫字符串. 长字符串用 **\[\[   ]]** 括起来
- 获取字符串的长度 **#** 运算符
	- `#"123"`或`#a`
- 连接字符串用 **..** 
	- `"Hello" .. "World"`
	![](https://cdn.jsdelivr.net/gh/CurseDEMO/image-bed/image/20260726134733766.png)
- 将字符串转为数值: `tonumber(string, b)`b表示进制
	- 若string内容为数字, 则转换成功, 反之为nil.
- 将数值转为字符串: `tostring(number)`
- 字符串标准库
	- `string.len(s)`返回s的长度
	- `string.rep(s, n)`将s重复n次
	- `string.reverse(s)` 反转s
	- `string.lower(s)` 转化s为小写
	- `string.upper(s)` 转化s为大写
	- `string.sub(s, i, j)`提取s中第i个到第j个字符, 包括边界. 字符串第一个字符索引为1, 最后一个负数索引为-1, 倒数第二个为-2.
	- `string.format("x = %d, y = %d", 10, 20)`
		- 用10, 20的十进制形式替换从左到右替换%d
		- %x表示十六进制, %f表示浮点数, %s表示字符串
		- %.4f表示保留4为小数, %02d表示十进制数至少有两个数字, 否则用0补齐, %2d则用空格补齐
	- 函数调用: `s:sub(i, j)`即`string.sub(s, i, j)`
	- `string.find(s, t)` 返回s中包含字符串t的起始索引和结束索引, 若找不到则返回nil
	- `string.gsub(s, t, u)`返回用u替换s中的t后的字符串和替换次数.