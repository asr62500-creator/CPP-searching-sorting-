#include <iostream>
using namespace std;

void perm(int arr[], int left, int right)
{
    if (left == right)
    {
        for (int i = 0; i <= right; i++)
            cout << arr[i] << " ";
        cout << endl;
        return;
    }

    for (int i = left; i <= right; i++)
    {
        swap(arr[left], arr[i]);          // choose
        perm(arr, left + 1, right);    // explore
        swap(arr[left], arr[i]);          // backtrack
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    perm(arr, 0, n - 1);
    return 0;
}