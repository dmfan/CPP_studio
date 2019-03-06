/* STL 
���array����������
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
    auto first = height_ins.begin();//����height_ins�ĵ�����
    auto last = height_ins.end () ;//����height_ins�ĵ�����

    while (first != last)//�����ȱ�ʾ������ɣ�
    {
        *first++=h;     //��ʼֵ min_ht
        h += ht_step;   //����ht_step
    }

}
