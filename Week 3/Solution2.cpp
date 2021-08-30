#include<iostream>
using namespace std;
void selectionSort(int a[], int n)
{
    int swaps=0; bool flag=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                flag=1;;
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        swaps++;

    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"comparisons = "<<n*(n-1)/2<<endl;
    cout<<"swaps = "<<swaps<<endl;
    return ;
}
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        selectionSort(a,n);
        t--;
    }
    return 0;
}
