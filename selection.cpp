#include <iostream>
#include <vector>
using namespace std;
void selection(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[min_idx])
            {
                min_idx = j;
            }
        }
        if (i!=min_idx)
        {
            swap(v[i],v[min_idx]);
        }
        
    }
}
int main()
{
    int n;
    cout<<"enter the no. of elements : ";
    cin>>n;
    vector<int> v(n);
    cout << "enter the elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    selection(v);
    cout<<"after selection sort:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}