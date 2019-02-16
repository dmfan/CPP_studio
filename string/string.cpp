/* STL 
c++中的c_str()函数
string、const char*、 char* 、char[]相互转换
参考：https://blog.csdn.net/yunhaic/article/details/80042047
*/


#include<iostream>
#include<stdlib.h>


using namespace std;


int main(){

    char c_str[] = "hello world!";
    char* c = nullptr;//初始化char*类型，并赋值为空
    const char* constc = nullptr;//初始化const char*类型，并赋值为空
    string info_extend = "Hello World!";

    //string类型转const char*类型
    constc = info_extend.c_str();

    cout << "c_str:" << c_str << endl;
    cout << "constc:" << constc << endl;
    cout << "string:" << info_extend.c_str() << endl;

    //const char*类型转char*类型     string转换为char*要先转换为const char*再转换为char *
    c = const_cast<char*>(constc);
    cout << "c:" << c << endl;

    //string类型转char[]类型
    for (int i = 0; i < info_extend.length(); i++) //string类型转char[]类型
        c_str[i]=info_extend[i];
    cout << "c_str:" << c_str << endl;
    

system("pause");
return 0;
}