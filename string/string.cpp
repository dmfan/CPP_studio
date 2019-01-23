/* STL 
�������vector< bool>��for(auto i : c)����i���ı䣬Ҳ��Ӱ�쵽c�� 
��std::vector<float>ʹ��for(auto i : c)�򲻻ᡣ
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
    for(auto& value : c)//�ı� c ��������
    {
        value = mm;
        std::cout << c.at(nn) << std::endl;
        mm += 1;
        nn += 1;
    }
    std::cout << "-----" << std::endl;
    nn=0;
    for(auto&& value : c)//�ı� c ��������
    {
        value = mm;
        std::cout << c.at(nn) << std::endl;
        mm += 1;
        nn += 1;
    }
    std::cout << "-----" << std::endl;
    nn=0;
    for(auto value : c)//���ı� c ��������
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