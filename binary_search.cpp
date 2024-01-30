#include <iostream>
using namespace std;
int binary_rec(int arr[], int x, int l, int h)
{
    if (l > h)
    {
        return -1;
    }
    int mid = (l + h) / 2;
    if (arr[mid] == x)
    {
        return mid;
    }

    if (arr[mid] < x)
    {
        binary_rec(arr, x, mid + 1, h);
    }
    else
    {
        binary_rec(arr, x, l, mid - 1);
    }
}
int binary(int arr[], int n, int x, int y)
{

    int z = n - 1;
    int flag = 0;
    while (y <= z)
    {

        int mid = (y + z) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            y = mid + 1;
        }
        else
        {
            z = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n, arr[100], x;
    cout << "enter the no. of the elements:" << endl;
    cin >> n;
    cout << "enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the no. to be searched:";
    cin >> x;
    cout << "the no. is present at : " << binary(arr, n, x, 0) + 1 << " position" << endl;
    cout << " no. is at: " << binary_rec(arr, x, 0, n - 1);
    return 0;
}