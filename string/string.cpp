/* STL 
理解array容器迭代器
*/


#include <iostream> // For standard streams
#include <iomanip>  // For stream manipulators
#include <array>    // For array<T,N>
#include <vector>

int main()
{
    std::array<std :: string, 5> words {"one", "two","three", "four", "five"};
    
    // std::vector<std::string> words_copy {"ooo" , "cdcd", "doso"};
    std::vector<std::string> words_copy {std::begin(words) , std::end(words)};//可以用元素类印相同的容器来初始化 vector<T> 容器。用一对迭代器来指定初始值的范围。
    std::cout << words_copy[0] << std::endl << words_copy[2] ;
    std::cout<<"end";

}
