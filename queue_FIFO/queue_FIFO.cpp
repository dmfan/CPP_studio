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
    std::queue<int> q; //��ģ�壬�����ݵ����Ͳ�����
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    int u = q.back();
    cout << "�������һ��Ԫ��Ϊ��" << u << endl;

    int v = q.front();
    cout << "���е�һ��Ԫ��Ϊ��" << v << endl;

    q.pop();
    v = q.front();
    cout << "pop��,���е�һ��Ԫ��Ϊ��" << v << endl;

    int size = q.size();
    cout << "�����д���" << size << "��Ԫ��" << endl;

    cout << "�ж϶����Ƿ�Ϊ�գ�Ϊ�����1���������0��" << endl;
    int flag = q.empty();
    cout << flag << endl;


    //���
    clear(q);
    cout << q.empty() << endl;

    system("pause");
    return 0;
}