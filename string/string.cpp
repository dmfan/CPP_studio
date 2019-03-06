/* STL 
���array����������
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
    std::cout<<"end";

}
