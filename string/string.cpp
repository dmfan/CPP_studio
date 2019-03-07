/* STL 
���array����������
 resize(n) ���û��Ԫ�صĸ�����Ϊ����nָ����ֵ�����Ի�����������Ĭ��ֵ��ʼ����Ԫ�ء���nС�ڵ�ǰԪ�ظ������Ὣ������С��С������n��С�����Ƴ������Ԫ�أ���ͺ����ظ������˼��� pop_back() ���������������Ĵ�С����Ӱ��������������
 resize(n,para) ���ý�Ԫ�����ӵ���һ������nָ���ĸ��������õڶ�������para��ʼ�����ӵ���Ԫ�ء�
 ����ͨ������ reserve() ����������������,��Ԫ�صĸ���������ı�
*/


#include <iostream> // For standard streams
#include <iomanip>  // For stream manipulators
#include <array>    // For array<T,N>
#include <vector>

int main()
{
    std::array<std :: string, 5> words {"one", "two","three", "four", "five"};
    
    // std::vector<std::string> words_copy {"ooo" , "cdcd", "doso"};
    std::vector<std::string> words_copy {std::begin(words) , std::end(words)};//������Ԫ����ӡ��ͬ����������ʼ�� vector<T> ��������һ�Ե�������ָ����ʼֵ�ķ�Χ��
    std::cout << words_copy[0] << std::endl << words_copy[2] ;
    std::cout<<std::endl;
    std::cout<<std::endl;

    
    std::cout << words_copy.size() << std::endl;
    for (uint8_t i=0;i<5;i++)
    std::cout << words_copy[i] << std::endl;
    // std::cout << words_copy[6] << std::endl;//���
    std::cout<<std::endl;

    words_copy.resize(7,"wewe");
    std::cout << words_copy.size() << std::endl;
    std::cout << words_copy[5] << std::endl;
    std::cout << words_copy[6] << std::endl;
    std::cout<<std::endl;

}
