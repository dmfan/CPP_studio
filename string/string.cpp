/* STL 

list容器

*/


#include <iostream> // For standard streams
#include <iomanip>  // For stream manipulators
#include <algorithm> // For copy()
#include <iterator> // std::istream_iterator is declared in the <iterator> header file
#include <string>
#include <list>



int main()
{
    std::list<std::string> names {"Jane","Jim", "Jules", "Janet"};
    names.emplace_back("Ann");
    std::string nameA("Alan");
    std::cout << nameA;
    names.emplace_back(std::move(nameA)); // 用 std::move() 函数将 name 的右值引用传入 emplace_back() 函数。这个操作执行后，nameA 变为空，因为它的内容已经被移到 list 中
    std::cout << nameA;
    std::cout << "\n";
    names.emplace_front("Hugo");                // emplace_front() 在 list 的第一个元素之前构造元素
    names.emplace(++begin(names), "Hannah");    // emplace() 在迭代器指定的位置构造一个元素
    for(const auto& name : names)
    std::cout << name << std::endl;

    printf("end!");
    printf("end!");

}
