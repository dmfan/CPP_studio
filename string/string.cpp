/* STL 
for (auto i : c) ��ʹ��
�������vector< bool>��for(auto i : c)����i���ı䣬Ҳ��Ӱ�쵽c�� 
��std::vector<float>ʹ��for(auto i : c)�򲻻ᡣ
*/
//�ο� http://c.biancheng.net/stl/string/ https://blog.csdn.net/haolexiao/article/details/56842552

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


//auto �� auto& �� auto&& ������
    for(auto value : values)
        cout << value << ' ';

    for(auto& value : values)//����  �������ı�ԭ����ֵ�û���������for(const auto &i : c)�������Ҫ�ı�Ļ�����for(auto &i : c)
        value = value * 10;

    for(auto&& value : values)
    {
        value = value * 10;
    }
    std::cout << std::endl << "-----" << std::endl;

    
    nn=0;
    for(auto value : c)//���ı� c ��������
    {
        std::cout << c.at(nn) << std::endl;
        value = mm;
        std::cout << c.at(nn) << std::endl;
        mm += 1;
        nn += 1;
    }
    std::cout << "^^^^^" << std::endl;
    nn=0;
    for(auto& value : c)//�ı� c ��������
    {
        value = mm;
        std::cout << c.at(nn) << std::endl;
        mm += 1;
        nn += 1;
    }
    std::cout << "*****" << std::endl;
    nn=0;
    for(auto&& value : c)//�ı� c ��������
    {
        value = mm;
        std::cout << c.at(nn) << std::endl;
        mm += 1;
        nn += 1;
    }
    
    //���� vector<bool>
    std::cout << "#####" << std::endl;
    nn=0;
    for(auto value : cc)
    {
        value = !value;
        std::cout << cc.at(nn) << std::endl;
        nn += 1;
    }
    // ����vector<bool>�Ƚ����� �������vector< bool>��for(auto i : c)����i���ı䣬Ҳ��Ӱ�쵽c�� 
    // ������vector< bool>��for(auto &i : c)��g++�ϻᱨ����������VS�ϲ��ᱨ��ȴ���޸����ݣ����Ρ� 
    // ���Դ�ʱ�ı���ֵ��Ҫ����ֵ����for(auto &&i : c)���������ֵĻ���Ҫ��for(const auto &i : c)
    

system("pause");
return 0;
}