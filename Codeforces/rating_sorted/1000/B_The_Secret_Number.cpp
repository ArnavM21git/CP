#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,p=10;
        cin>>n;
        vector <long long> v;
        for(int k=1;k<=18;k++)
        {
            if(n % (p+1)==0)
            {
                v.push_back(n/(1+p));
                
            }
            
             p *= 10;

        }
        sort(v.begin(),v.end());
        if(v.size()!=0)
            cout<<v.size()<<endl;
        else
            cout<<v.size();
        for(long long i:v)
        {

            cout<<i<<" ";
        }
        cout<<endl;
    }
}