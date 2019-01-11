/* 程序创建两个vector对象，一个是int规范，一个是string规范
同时深刻揭示了getline的用法
*/
#include<iostream>
#include<stdlib.h>
#include <string>
#include <vector>

using namespace std;


int main(){
    int sum = 0, value = 0;
    while(std::cin >> value)
    {
        sum += value;
        std::cout << "you input result:" << sum << std::endl;
    }
    std::cout << "Sum is : " << sum << std::endl;

system("pause");
return 0;
}