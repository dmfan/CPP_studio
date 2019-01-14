/* 
基本内置类型 转义字符\
*/
#include<iostream>
#include<stdlib.h>
#include <string>
#include <vector>

using namespace std;


int main(){
    int sum = 0, value = 0;
    std::cout << "Please input some "
    "number: \n";
    std::cout << "Please input some "
    "number \115 : \12";
    std::cout << "Please input some "
    "number \1159 : \12";//ISO Latin-1字符集 \115('M')

    std::cout << "Please input some "
    "number \x123 : \12";
    std::cout << "Please input some "
    "number \x1234 : \12";

system("pause");
return 0;
}