/* STL 

deque??
*/


#include <iostream> // For standard streams
#include <iomanip>  // For stream manipulators
#include <algorithm> // For copy()
#include <iterator> // std::istream_iterator is declared in the <iterator> header file
#include <string>
#include <deque>

int main()
{
    std::deque<std::string> names {"1A1A"};

    std::deque<std::string> words {"one","none","some","all","none","most","many"};

    std::deque<std::string> words_copy {words};// Makes a copy of the words container

    std::deque<std::string> words_part {std::begin(words),std::end(words)-2};

    std::cout << words.at(2) << std::endl; // Output the third element in words
    std::cout << words.at(0) << std::endl; // Output the third element in words

    //Example
    std::cout << "Enter first names separated by spaces. Enter Ctrl+Z on a new line to end:\n";
    std::copy(std::istream_iterator < std::string > {std::cin}, std::istream_iterator < std::string > {}, std::front_inserter(names));//copy() ???????????????????????????????????????? Ctrl+Z ????????????????
    std::cout << "\nIn reverse order, the names you entered are:\n";
    std::copy(std::begin(names), std::end(names), std::ostream_iterator < std::string > {std::cout, "  "});
    std::cout << std::endl;

}
