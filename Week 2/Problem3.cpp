//Given an array of nonnegative integers, design an algorithm and a program to count the number of pairs of integers such that their difference is equal to a given key, K.


#include<iostream>
using namespace std;
difference(int a[],int n,int key)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(a[i]-a[j])==key)
            {
                count++;
            }

        }
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int key;
        cin>>key;
        cout<<difference(a,n,key)<<endl;
        t--;
    }
    return 0;
}
