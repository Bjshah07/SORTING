#include <iostream>
using namespace std;
template <class T> //TEMPLATES IS USED FOR DYNAMIC DATA-TYPE(CAN BE INT, FLOAT, CHAR ETC.)
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<float> v1(3);
    v1.arr[0] = 1.7;
    v1.arr[1] = 4.7;
    v1.arr[2] = 6.9;
    vector<float> v2(3);
    v2.arr[0] = 1.4;
    v2.arr[1] = 0.8;
    v2.arr[2] = 2.009;
    float a = v1.dotproduct(v2);
    cout << a << endl;
    return 0;
}