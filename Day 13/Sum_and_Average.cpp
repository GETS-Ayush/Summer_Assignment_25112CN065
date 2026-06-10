#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
    }

    float avg = (float)sum / n;

    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<avg;

    return 0;
}