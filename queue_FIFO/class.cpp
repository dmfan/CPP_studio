/*
 *calss
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

//
class Student {
 public:
  //
  const char *name;
  int age;
  float score;
  //
  void say() {
    cout << name << "��������" << age << "������" << score << endl;
  }
};

int main() {
  //
  Student stu;
  stu.name = "С��";
  stu.age = 15;
  stu.score = 98.0f;
  stu.say();

  Student *Pstu = &stu;  //
  Pstu->name = "С��";

  system("pause");
  return 0;
}
