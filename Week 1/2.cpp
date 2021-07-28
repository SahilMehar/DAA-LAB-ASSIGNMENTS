#include<iostream>
using namespace std;
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
        int s=0;
        int e=n;
        int flag=0, cmp=1;
        while(s<=e)
        {
            cmp++;
            int mid=(s+e)/2;
            if(a[mid]==key)
            {
                flag=1;
                break;
            }
            else if(a[mid]>key)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        if(flag==0)
        {
            cout<<"Not Present"<<" "<<cmp<<endl;
        }
        else
        {
            cout<<"Present"<<" "<<cmp<<endl;
        }
        t--;
    }
    return 0;
}
