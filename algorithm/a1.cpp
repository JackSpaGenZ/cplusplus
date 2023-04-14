#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+10];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    /* Sorting the array in descending order. */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i]>a[j])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}