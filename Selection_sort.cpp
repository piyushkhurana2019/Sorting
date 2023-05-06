#include <iostream>
using namespace std;

int main()
{

    int i, j, min, arr[20], n;

    cout << "enter the size of array" << endl;
    cin >> n;
    cout << "enter the array" << endl;
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

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[min], arr[i]);
    }

    cout << "arr sorted" << endl;

    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}
