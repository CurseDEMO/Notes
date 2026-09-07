#include<ctime>
#include<iostream>

int main()
{
   using namespace std;

   int ch; // 注意：必须用 int 类型接收，因为 EOF 是 -1，char 可能无法正确表示
   while ((ch = cin.get()) != EOF) 
{
   cout << (char)ch; // 输出字符
}
   return 0;
}