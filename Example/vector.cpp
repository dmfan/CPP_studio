/* 程序创建两个vector对象，一个是int规范，一个是string规范
同时深刻揭示了getline的用法
*/
#include<iostream>
#include<stdlib.h>
#include <string>
#include <vector>

using namespace std;

const int NUM = 5;

int main(){
    string mm;
    vector <string>names(NUM);//定义矢量对象
    vector <int> sexs(NUM);//定义矢量对象
    cout<<"Please Do Exactly As Told You Will enter \n"<<NUM<<" Personal Name and Their Sex.\n";
    int i = 0;
    for (i = 0; i < NUM;i++)//输入信息
    {
        cout << "Enter title # " << i +1 << ": ";
        getline (cin,names[i]);//getline 其读入的第二个参数为string类型
        cout << "Enter sex (0/1) #";
        cin >> sexs[i];//获取输入信息
        cout << "end" << endl;
        mm=cin.get();   //等待  关于这里为啥要使用cin.get()，以及不使用cin.get()会是什么结果  需要参考C++primer 78页关于getline的描述
                        //getline从输入流cin中读入内容，直到遇到换行符为止，然后把所读的内容存入到string对象中区，但换行符仍然留在cin输入流中
                        //getline只要一遇到换行符就结束读取操作并返回结果，哪怕输入的一开始就是换行符也是如此。如果输入真的一开始就是换行符，那么所得的结果是个空string。
                        //所以这里需要使用cin.get()读取掉换行符，如果将读取值赋值给mm如string mm = cin.get(),mm将得到换行符
        cout << "aaaend" << mm << endl;
    }
    cout << "Thank you. You entered the following:    \n"<< "name/sex" << endl;
    for (i = 0; i < NUM; i++)
    {
        cout << names[i] << "\t" << sexs[i] << endl;
    }

system("pause");
return 0;
}