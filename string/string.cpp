/* STL 
理解array容器迭代器
 resize(n) 调用会把元素的个数变为参数n指定的值，所以会增加两个用默认值初始化的元素。若n小于当前元素个数，会将容器大小减小至参数n大小，会移除多余的元素，这就好像重复调用了几次 pop_back() 函数。减少容器的大小不会影响容器的容量。
 resize(n,para) 调用将元素增加到第一个参数n指定的个数，并用第二个参数para初始化增加的新元素。
 可以通过调用 reserve() 来增加容器的容量,但元素的个数并不会改变
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
    std::cout<<std::endl;
    std::cout<<std::endl;

    
    std::cout << words_copy.size() << std::endl;
    for (uint8_t i=0;i<5;i++)
    std::cout << words_copy[i] << std::endl;
    // std::cout << words_copy[6] << std::endl;//溢出
    std::cout<<std::endl;

    words_copy.resize(7,"wewe");
    std::cout << words_copy.size() << std::endl;
    std::cout << words_copy[5] << std::endl;
    std::cout << words_copy[6] << std::endl;
    std::cout<<std::endl;

}
