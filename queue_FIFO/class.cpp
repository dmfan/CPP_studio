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
    cout << name << "的名字是" << age << "年龄是" << score << endl;
  }
};

int main() {
  //
  Student stu;
  stu.name = "小明";
  stu.age = 15;
  stu.score = 98.0f;
  stu.say();

  Student *Pstu = &stu;  //
  Pstu->name = "小亮";

  system("pause");
  return 0;
}
