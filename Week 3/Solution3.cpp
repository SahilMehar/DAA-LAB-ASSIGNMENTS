
#include<iostream>
using namespace std;
void sort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        
        if(a[i]==a[i+1])
        {
            flag=1;
            break;
        }
    }
    (flag==0)?cout<<"NO"<<endl:cout<<"YES"<<endl;
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
        sort(a,n);
        t--;
    }
}
