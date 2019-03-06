/* STL 
理解array容器迭代器
*/


#include <iostream> // For standard streams
#include <iomanip>  // For stream manipulators
#include <array>    // For array<T,N>
int main()
{
    const unsigned int min_ht {48U};
    const unsigned int max_ht {84U};
    const unsigned int ht_step {2U};
    const size_t ht_count { 1 + (max_ht - min_ht) / ht_step };
    std::array<unsigned int, ht_count> height_ins;

    unsigned int h {min_ht};
    auto first = height_ins.begin();//返回height_ins的迭代器
    auto last = height_ins.end () ;//返回height_ins的迭代器

    while (first != last)//如果相等表示遍历完成！
    {
        *first++=h;     //初始值 min_ht
        h += ht_step;   //递增ht_step
    }

}
