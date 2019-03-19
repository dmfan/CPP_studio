/* STL 

list??
??????
*/


#include <iostream> // For standard streams
#include <iomanip>  // For stream manipulators
#include <algorithm> // For copy()
#include <iterator> // std::istream_iterator is declared in the <iterator> header file
#include <string>
#include <list>


int main()
{
   std::list<std::string> words;
   std::list<std::string> sayings {20}; // A list of 20 empty strings
   std::list<double> values(50, 3.1415926); //??????????? {50? 3.1415926} ????????
   std::list<double> save_values {values};  //save_values ? values ????
   std::list<double> sample_values {++values.cbegin(), --values.cend()};  //sample_values ?values????????49?????
                                                                          //??std::list<double> samples {++cbegin(values), --cend(values)};???vscode?

    for(const auto name : sample_values)
    std::cout << name << std::endl;
    printf("sample_values.size():%d",sample_values.size());

    printf("end!");

}
