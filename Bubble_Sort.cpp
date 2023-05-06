#include<iostream>
using namespace std;

int main(){

    int i,j,n,flag;

    cout<<"enter the size of the array"<<endl;
    cin>>n;

    int arr[n];

    cout<<"enter the elements of array"<<endl;

     for ( i = 0; i <n; i++)
        {
            cin>>arr[i];
        }
     for ( i = 0; i <n; i++)
        {
            cout<<arr[i];
        }
        cout<<endl;

    //sorting begins here:

    for ( i = 0; i < n-1; i++)
    {
            flag=0;
        for (j  = 0; j < n-1-i; j++)
        {
            if (arr[j+1]<arr[j])
            {
                swap(arr[j+1],arr[j]);
                flag=1;
            }

        }
            if (flag==0)
            {
                break;
            }

    }
        
        cout<<"arr sorted"<<endl;

        for ( i = 0; i <n; i++)
        {
            cout<<arr[i];
        }
    
return 0;
}
