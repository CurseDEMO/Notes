#include <iostream> // 包含输入输出流库
using namespace std; // 使用标准命名空间
int main() {
   char a[10];
   char b[10];
   cin.get(a, 20);
   cin.get(b, 20);
   cout << a << b << endl; // 输出 "Hello, World!" 并换行
   return 0; // 返回 0 表示程序成功执行
}