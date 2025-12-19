#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[100]={0};
        int n,ntd=0;
        cin>>n;
        while(n--)
        {
            int no;
            cin>>no;
            a[no]++;
        }
        for(int i=0;i<100;i++)
        {
            if(a[i]!=i&&a[i]!=0&&a[i]>i)
            {
                ntd+=a[i]-i;
            }
            else if(a[i]!=i&&a[i]!=0&&a[i]<i)
            {
                ntd+=a[i];
            }
        }
        cout<<ntd<<endl;
        
    }
}
