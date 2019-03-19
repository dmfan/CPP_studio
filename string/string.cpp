/* STL 

list??
???????
*/


#include <iostream> // For standard streams
#include <iomanip>  // For stream manipulators
#include <algorithm> // For copy()
#include <iterator> // std::istream_iterator is declared in the <iterator> header file
#include <string>
#include <list>


int main()
{
   std::list<std::string> words {"Jane", "Jim", "Jules", "Janet"};
   words.push_front("Ian");     // Add string ("Ian") to the front of the list
   words.push_back("Kitty");    // Append string ("Kitty") to the end of the list
   //?????????????????????????????????? pushJfront() ? push_back() ?????????????
   words.emplace_front("Ian");  //Create string ("Ian") in place at the front of the list   
   words.emplace_back("Kitty"); // Create string ("Kitty") in place at the end of the list

   //?????????  insert() ????????????????????????????????
   words.insert(++begin(words), "May"); // Insert "May" as the second element  

   auto iter = begin(words);    //iter ? list<std::string>::iterator ??
   std::advance(iter, 9); // Increase iter by 9  ??????9
   words.insert(iter, 3, "Dmm");// Insert 3 copies of 88 starting at the 10th


    for(const auto name : words)
    std::cout << name << std::endl;
    printf("sample_values.size():%d",words.size());

    printf("end!");

}
