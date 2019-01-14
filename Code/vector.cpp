/* 
展示控制流 cin  
程序功能：求多个数和
while(std::cin >> value)循环的结束条件
*/
#include<iostream>
#include<stdlib.h>
#include <string>
#include <vector>

using namespace std;


int main(){
    int sum = 0, value = 0;
    std::cout << "Please input some number: ";
    while(std::cin >> value)
    {
        sum += value;
        std::cout << "you input result:" << sum << std::endl;
    }
    std::cout << "Sum is : " << sum << std::endl;

system("pause");
return 0;
}