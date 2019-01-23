/* STL 
如果对于vector< bool>用for(auto i : c)，对i做改变，也会影响到c。 
对std::vector<float>使用for(auto i : c)则不会。
*/
//http://c.biancheng.net/stl/string/

#include<iostream>
#include<stdlib.h>

#include <array>
#include <vector>

int main(){

    double total {};
    double mm=0,nn=0;

  std::array<double, 10> values {0.5, 1.0, 1.5, 2.0};
  std::vector<float> c{0.5, 1.0, 1.5, 2.0};
  std::vector<bool> cc{ false, true, false, true, false };



    for(auto&& value : values)
        total += value;
    for(auto&& value : values)
    {
        value = mm;
        mm += 1;
    }
    std::cout << "-----" << std::endl;
    nn=0;
    for(auto& value : c)//改变 c 容器内容
    {
        value = mm;
        std::cout << c.at(nn) << std::endl;
        mm += 1;
        nn += 1;
    }
    std::cout << "-----" << std::endl;
    nn=0;
    for(auto&& value : c)//改变 c 容器内容
    {
        value = mm;
        std::cout << c.at(nn) << std::endl;
        mm += 1;
        nn += 1;
    }
    std::cout << "-----" << std::endl;
    nn=0;
    for(auto value : c)//不改变 c 容器内容
    {
        std::cout << c.at(nn) << std::endl;
        value = mm;
        std::cout << c.at(nn) << std::endl;
        mm += 1;
        nn += 1;
    }
    
    

system("pause");
return 0;
}