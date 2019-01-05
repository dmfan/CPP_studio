#include <queue>
#include <iostream>
#include <stdlib.h>

using namespace std;

void clear(queue<int> &q)
{
    queue<int> empty;
    swap(empty, q);
}

int main()
{
    std::queue<int> q; //类模板，将数据的类型参数化
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    int u = q.back();
    cout << "队列最后一个元素为：" << u << endl;

    int v = q.front();
    cout << "队列第一个元素为：" << v << endl;

    q.pop();
    v = q.front();
    cout << "pop后,队列第一个元素为：" << v << endl;

    int size = q.size();
    cout << "队列中存在" << size << "个元素" << endl;

    cout << "判断队列是否为空，为空输出1，否则输出0：" << endl;
    int flag = q.empty();
    cout << flag << endl;


    //清空
    clear(q);
    cout << q.empty() << endl;

    system("pause");
    return 0;
}