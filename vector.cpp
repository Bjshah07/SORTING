#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);
    cout<<"the size is:"<<v.size()<<endl;
    cout<<"the capacity is:"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"the size is:"<<v.size()<<endl;
    cout<<"the capacity is:"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"the size is:"<<v.size()<<endl;
    cout<<"the capacity is:"<<v.capacity()<<endl;

    v.resize(4);
    cout<<"the size is:"<<v.size()<<endl;
    cout<<"the capacity is:"<<v.capacity()<<endl;

    v.resize(5);
    cout<<"the size is:"<<v.size()<<endl;
    cout<<"the capacity is:"<<v.capacity()<<endl;

    return 0;
}