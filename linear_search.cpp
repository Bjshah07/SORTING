#include <iostream>
using namespace std;
void linear(int arr[], int x, int n)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "the element is present at " << i + 1 << " position";
        }
        else
        {
            flag++;
        }
    }
    if (flag != 0)
    {
        cout << "no. is not present ";
    }
}

int main()
{
    int n, arr[100], x;
    cout << "enter the no. of elements:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the no. to be searched:";
    cin >> x;
    linear(arr, x, n);

    return 0;
}