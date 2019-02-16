/* STL 
for (auto i : c) 的使用
如果对于vector< bool>用for(auto i : c)，对i做改变，也会影响到c。 
对std::vector<float>使用for(auto i : c)则不会。
*/
//参考 http://c.biancheng.net/stl/string/ https://blog.csdn.net/haolexiao/article/details/56842552

#include<iostream>
#include<stdlib.h>

#include <array>
#include <vector>

using namespace std;


int main(){

    double mm=0,nn=0;

  std::array<double, 10> values {0.1, 0.2, 0.3, 0.4};
  std::vector<float> c{5.1, 5.2, 5.3, 5.4};
  std::vector<bool> cc{ false, true, false, true, false };


//auto 和 auto& 和 auto&& 的区别
    for(auto value : values)
        cout << value << ' ';

    for(auto& value : values)//引用  如果不想改变原来的值得花，可以用for(const auto &i : c)，如果想要改变的话，用for(auto &i : c)
        value = value * 10;

    for(auto&& value : values)
    {
        value = value * 10;
    }
    std::cout << std::endl << "-----" << std::endl;

    
    nn=0;
    for(auto value : c)//不改变 c 容器内容
    {
        std::cout << c.at(nn) << std::endl;
        value = mm;
        std::cout << c.at(nn) << std::endl;
        mm += 1;
        nn += 1;
    }
    std::cout << "^^^^^" << std::endl;
    nn=0;
    for(auto& value : c)//改变 c 容器内容
    {
        value = mm;
        std::cout << c.at(nn) << std::endl;
        mm += 1;
        nn += 1;
    }
    std::cout << "*****" << std::endl;
    nn=0;
    for(auto&& value : c)//改变 c 容器内容
    {
        value = mm;
        std::cout << c.at(nn) << std::endl;
        mm += 1;
        nn += 1;
    }
    
    //对于 vector<bool>
    std::cout << "#####" << std::endl;
    nn=0;
    for(auto value : cc)
    {
        value = !value;
        std::cout << cc.at(nn) << std::endl;
        nn += 1;
    }
    // 另外vector<bool>比较特殊 如果对于vector< bool>用for(auto i : c)，对i做改变，也会影响到c。 
    // 而对于vector< bool>用for(auto &i : c)在g++上会报错【但是我在VS上不会报错却会修改内容，尴尬】 
    // 所以此时改变其值需要用右值引用for(auto &&i : c)，如果不锈钢的话，要用for(const auto &i : c)
    

system("pause");
return 0;
}