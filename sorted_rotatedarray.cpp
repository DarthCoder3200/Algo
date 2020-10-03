#include<iostream>
using namespace std;
///program to find the pivot element in a sorted rotated array very efficiently using a optimised code
///time complexity= O(log(n))
///space complexity = O(1)
///method used = BINARY SEARCH
int main()

{
    int n;int *arr;
    cin>>n;
    arr=new int[n]; //dynamic initialization of the  array
    for(int i=0;i<n;i++)
        cin>>arr[i];        //input for the array

    int s=0,e=n-1;int mid;
    while(s<=e)
    {
        cout<<"pivot is at index ";

        mid=(s+e)/2;
        if((arr[mid]>arr[mid+1])&&(mid<e))
            {cout<<mid;break;}             ///checking for pivot element
        if((arr[mid]<arr[mid-1])&&(mid>s))
            {cout<<mid-1;break;}

        if((arr[s]>=arr[mid]))
            e=mid-1;

        else
                e=mid+1;

    }

    if(s>e)
        cout<<"pivot does not exist";

    return 0;
}
