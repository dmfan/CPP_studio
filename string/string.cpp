/* STL 
c++�е�c_str()����
string��const char*�� char* ��char[]�໥ת��
�ο���https://blog.csdn.net/yunhaic/article/details/80042047
*/


#include<iostream>
#include<stdlib.h>


using namespace std;


int main(){

    char c_str[] = "hello world!";
    char* c = nullptr;//��ʼ��char*���ͣ�����ֵΪ��
    const char* constc = nullptr;//��ʼ��const char*���ͣ�����ֵΪ��
    string info_extend = "Hello World!";

    //string����תconst char*����
    constc = info_extend.c_str();

    cout << "c_str:" << c_str << endl;
    cout << "constc:" << constc << endl;
    cout << "string:" << info_extend.c_str() << endl;

    //const char*����תchar*����     stringת��Ϊchar*Ҫ��ת��Ϊconst char*��ת��Ϊchar *
    c = const_cast<char*>(constc);
    cout << "c:" << c << endl;

    //string����תchar[]����
    for (int i = 0; i < info_extend.length(); i++) //string����תchar[]����
        c_str[i]=info_extend[i];
    cout << "c_str:" << c_str << endl;
    

system("pause");
return 0;
}