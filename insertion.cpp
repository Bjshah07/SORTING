#include <iostream>
#include <vector>
using namespace std;
void insertion(vector<int> &v){
    int n=v.size();
    for (int i = 1; i < n; i++)
    {
        int c_e=v[i];
        int j=i-1;
        while (j>=0 && v[j]>c_e)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=c_e;
    }
return;
}
int main()
{
    int n;
    cout << "enter the no. of elements:";
    cin >> n;
    vector<int> v(n);
    cout<<"enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    insertion(v);
    cout << "after sorting :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}