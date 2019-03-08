/* STL 
vector��Ա����insert()
��Ҫע����ǣ���ʹ��ͬ������������£����� insert() û�е��� emplace() ��Ч���� insert() �����У�
���캯������ string("two")  ������һ��������Ϊ����ĵڶ����������� emplace() �����У����캯���õڶ�������ֱ�����������������ַ�������
*/


#include <iostream> // For standard streams
#include <iomanip>  // For stream manipulators
#include <iterator> // std::istream_iterator is declared in the <iterator> header file
#include <array>    // For array<T,N>
#include <vector>

int main()
{
    std::vector<std::string> words {"one","three","eight"};  //Vector with 3 elements
    
    // ����ڶ�������ָ���ĵ���Ԫ��
    auto iter = words.insert(++std::begin(words), "two");   //������λ����begin()���صĵ�����++������õ���������Ԫ�ػ������Ϊwords�ĵڶ���Ԫ�ء����صĵ�����ָ�򱻲����Ԫ�� string(��two��)��

    // ����һ���ɵڶ����͵���������ָ����Ԫ������
    std::string more[] {"five","six","seven"}; // Array elements to be inserted
    words.insert(--std::end(words) , std::begin(more), std::end(more));//���ﱾӦ���з��صĵ�����ָ�����ĵ�һ��Ԫ�أ�������ʹ��VSCodeʱ�ᱨ��

    // �� vector ��ĩβ����һ��Ԫ��
    iter = words.insert(std::end(words), "ten");    //std::vector::end Returns an iterator referring to the past-the-end element in the vector container.

    // �ڲ�������������Ԫ�ء��ڶ��������ǵ�����������ָ������Ĳ������
    // iter = words.insert(std::cend(words)-1, 2, "nine");     // st::vector::cend Returns a const_iterator pointing to the past-the-end element in the container.

    // �ڲ���㣬�����ʼ���б�ָ����Ԫ�ء��ڶ����������Ǳ�����Ԫ�صĳ�ʼ���б�
    words.insert(std::end(words), {std::string {"twelve"},std::string {"thirteen"}});//���ﱾӦ���з��صĵ�������������ʹ��VSCodeʱ�ᱨ��



    std::copy(std::begin(words), std::end(words),std::ostream_iterator<std::string> (std:: cout," "));//�� words ����������Ԫ�ظ��Ƶ� cout������ͨ����һ�� ostream_iterator ������ΪĿ�ĵ�ַ��ʵ�ֵġ�
    std::cout << std::endl;



}

/*

vector �ĳ�Ա���� insert()����Ҫһ����׼�ĵ�������ָ������㣻��������һ������������������޷�ͨ�����롣�����Ҫ���Ҹ�����������һ��Ԫ�أ����������ĺ������һ���µ�Ԫ�أ�����Ҫ�õ������������������һ��ʾ����
std::vector<std::string> str { "one", "two", "one", "three"};
auto riter = std::find(std::rbegin(str), std::rend(str) , "one");
str.insert(riter.base(), "five");
find() �㷨����ͷ����������ָ����һ��Ԫ���У���������������ָ����Ԫ�أ����ص�һ���ҵ���Ԫ�أ���˻��ҵ� String("one")�����᷵��һ�������������������������ָ��������Χ�ĵ���������ͬ�����ͣ���һ��ָ��ƥ��Ԫ�صķ�������������û���ҵ�ƥ���Ԫ�أ���ô������ָ���һ��Ԫ��֮ǰλ�õĵ����� rend(str)��ʹ�÷����������ζ�� find()���ҵ����ƥ���Ԫ�أ�ʹ�ñ�׼���������ҵ���һ��ƥ���Ԫ�أ����û��ƥ���Ԫ�أ��᷵�� end(str)��

���� riter �ĳ�Ա���� base() ���Եõ�һ����׼�������������з�������������ָ�� riter ǰ��һ��λ�ã�Ҳ�ǳ������н����ķ�����Ϊ riter ָ�������Ԫ�أ�Ҳ���ǡ�one�������� riter.base() ָ��� 4 ��Ԫ�ء�three�������ʹ�� riter.base() ��Ϊ insert() �ĵ�һ����������five���������뵽���λ��֮ǰ��Ҳ���� riter ��ָ��Ԫ�صĺ��档ִ������Щ����str ������������� 5 ���ַ���Ԫ�أ�
"one", "two", "one", "five", "three"

�����Ѳ������ find() ����λ�õ�ǰһ��λ�ã���Ҫ�� insert() �ĵ�һ��������Ϊ iter.base()-1��
*/
