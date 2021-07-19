#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter no. of test cases: ";
    cin>>t;
    while(t>0)
    {
        cout<<"Enter size of array and key element: ";
        int n,key;
        cin>>n>>key;
        int a[n];
        cout<<"Enter "<< n <<" elements in array: ";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int cmp=1,flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                flag=1;
                break;
            }
            cmp++;
        }
        (flag==1)?cout<<"YES "<<cmp<<endl:cout<<"NO"<<endl;
        t--;
    }

    return 0;

}
