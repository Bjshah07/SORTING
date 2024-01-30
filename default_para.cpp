#include <iostream>
using namespace std;
template <class t1 = int, class t2 = float>
class def
{
public:
    t1 a;
    t2 b;
    void display()
    {
        cout << "the vlue is :" << a << endl;
        cout << "the value is :" << b << endl;
    }
};
int main()
{
    def <int,float> m;
    m.a=5;
    m.b='A';
    m.display();
    cout<<"\ninitializing within :  \n";
    def<int,char> n={3,'o'};
    n.display();
    return 0;
}