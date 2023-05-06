#include <iostream>
using namespace std;

int main()
{

    int i, j, n, temp;

    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n];

    cout << "enter the elements of array" << endl;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "your array before sorting : " << endl;

    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    cout << endl;

    // sorting begins here :

    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && temp < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    cout << "sorted arr" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}
