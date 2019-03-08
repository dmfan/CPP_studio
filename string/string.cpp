/* STL 
vector成员函数insert()
需要注意的是，在使用同样参数的情况下，调用 insert() 没有调用 emplace() 高效。在 insert() 调用中，
构造函数调用 string("two")  生成了一个对象，作为传入的第二个参数。在 emplace() 调用中，构造函数用第二个参数直接在容器中生成了字符串对象。
*/


#include <iostream> // For standard streams
#include <iomanip>  // For stream manipulators
#include <iterator> // std::istream_iterator is declared in the <iterator> header file
#include <array>    // For array<T,N>
#include <vector>

int main()
{
    std::vector<std::string> words {"one","three","eight"};  //Vector with 3 elements
    
    // 插入第二个参数指定的单个元素
    auto iter = words.insert(++std::begin(words), "two");   //插入点的位置由begin()返回的迭代器++递增后得到。所以新元素会插入作为words的第二个元素。返回的迭代器指向被插入的元素 string(”two”)。

    // 插入一个由第二个和第三个参数指定的元素序列
    std::string more[] {"five","six","seven"}; // Array elements to be inserted
    words.insert(--std::end(words) , std::begin(more), std::end(more));//这里本应该有返回的迭代器指向插入的第一个元素，但是我使用VSCode时会报错

    // 在 vector 的末尾插入一个元素
    iter = words.insert(std::end(words), "ten");    //std::vector::end Returns an iterator referring to the past-the-end element in the vector container.

    // 在插入点插入多个单个元素。第二个参数是第三个参数所指定对象的插入次数
    // iter = words.insert(std::cend(words)-1, 2, "nine");     // st::vector::cend Returns a const_iterator pointing to the past-the-end element in the container.

    // 在插入点，插入初始化列表指定的元素。第二个参数就是被插入元素的初始化列表
    words.insert(std::end(words), {std::string {"twelve"},std::string {"thirteen"}});//这里本应该有返回的迭代器，但是我使用VSCode时会报错



    std::copy(std::begin(words), std::end(words),std::ostream_iterator<std::string> (std:: cout," "));//将 words 容器的所有元素复制到 cout；这是通过将一个 ostream_iterator 对象作为目的地址来实现的。
    std::cout << std::endl;



}

/*

vector 的成员函数 insert()，需要一个标准的迭代器来指定插入点；它不接受一个反向迭代器——这无法通过编译。如果需要查找给定对象的最后一个元素，或者在它的后面插入一个新的元素，就需要用到反向迭代器。这里有一个示例：
std::vector<std::string> str { "one", "two", "one", "three"};
auto riter = std::find(std::rbegin(str), std::rend(str) , "one");
str.insert(riter.base(), "five");
find() 算法会在头两个参数所指定的一段元素中，搜索第三个参数指定的元素，返回第一个找到的元素，因此会找到 String("one")。它会返回一个迭代器，这个迭代器和用来指定搜索范围的迭代器有相同的类型，是一个指向匹配元素的反向迭代器。如果没有找到匹配的元素，那么它就是指向第一个元素之前位置的迭代器 rend(str)。使用反向迭代器意味着 find()会找到最后匹配的元素；使用标准迭代器会找到第一个匹配的元素，如果没有匹配的元素，会返回 end(str)。

调用 riter 的成员函数 base() 可以得到一个标准迭代器，从序列反方向来看，它指向 riter 前的一个位置，也是朝向序列结束的方向。因为 riter 指向第三个元素，也就是“one”，所以 riter.base() 指向第 4 个元素“three”。如果使用 riter.base() 作为 insert() 的第一个参数，“five”将被插入到这个位置之前，也就是 riter 所指向元素的后面。执行完这些语句后，str 容器会包含下面 5 个字符串元素：
"one", "two", "one", "five", "three"

如果想把插入点变成 find() 返回位置的前一个位置，需要将 insert() 的第一个参数变为 iter.base()-1。
*/
