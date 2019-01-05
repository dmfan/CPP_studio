/*
 *calss
 */

#include <iostream>
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
    cout << name << "的年龄是" << age << "，成绩是" << score << endl;
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

  return 0;
}
