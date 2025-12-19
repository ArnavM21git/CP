#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,c4=0,c8=0;
        string s;
        cin>>n>>x>>y;
        cin>>s;
        for(char c:s)
        {
            if(c=='4')
            {
                c4++;
            }
            if(c=='8')
            {
                c8++;
            }
        }
        if(abs(x)>c8){
        x=abs(x)-c8;}
        if(abs(y)>c8){
        y=abs(y)-c8;}== 
        
        if(x+y<=c4){cout<<"yes"<<endl;}
        else{cout<<"no"<<endl;}

    }
}