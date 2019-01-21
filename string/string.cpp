/* STL string 
常见的 string 类构造函数 创建string对象
*/
//http://c.biancheng.net/stl/string/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){

string str("abcdefg");
char ch[] = "33333";
string a;//定义一个空字符串
string str_1(str);//构造函数，全部复制
string str_2(str,2,5);//构造函数，从字符串str的第2个元素开始，复制5个元素，赋值给str_2
string str_3(ch,5);//构造函数，将字符串ch的前5个元素赋值给str_3
string str_4(5,'X');//构造函数，将5个'X'组成的字符串"XXXXX"赋值给str_4
string str_5(str.begin(), str.end());//构造函数，复制字符串str的所有元素，并赋值给str_5

cout << str << endl;
cout << a << endl ;
cout << str_1 << endl;
cout << str_2 << endl;
cout << str_3 << endl;
cout << str_4 << endl;
cout << str_5 << endl;

system("pause");
return 0;
}