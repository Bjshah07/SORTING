#include <iostream>
using namespace std;
void merge_all(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = a[i + l];
    }
    for (int j = 0; j < n2; j++)
    {
        b[j] = b[mid + 1 + j];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
        }
    }
    while (i < n1)
    {
        arr[k++] = a[i++];
    }
    while (j < n2)
    {
        arr[k++] = b[j++];
    }
}
void merge(int arr[], int l, int r)
{
    if (l <= r)
    {
        return;
    }
    int mid = r + l / 2;
    merge(arr, l, mid);
    merge(arr, mid + 1, r);
    merge_all(arr, l, mid, r);
}
int main()
{
    int  arr[]={7,4,3,5,9,42,41,45,121,1,34};
    // cout << "enterr the no. of elements" << endl;
    // cin >> n;
    // cout << "enter the elements : " << endl;
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    merge(arr, 0, n - 1);
    cout << "after sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}