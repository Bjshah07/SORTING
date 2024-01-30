#include <iostream>
using namespace std;
template <class T1, class T2> //DECLEARING MULTIPLE TEMPLATES
class multiple
{
public:
    T1 data1;
    T2 data2;
    void display()
    {
        cout << "data1 is :" << data1 << endl
             << "data2 is :" << data2;
    }
};

int main()
{
    multiple<char, char> m;
    m.data1 = 'h';
    m.data2 = '4';
    m.display();
    return 0;
}