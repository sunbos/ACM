#include<bits/stdc++.h>
using namespace std;
 
set<int>s;

int main()
{
    int T,n,i,x;
    cin>>T;
    while(T--)
    {
        cin>>n;
        for(i = 0; i < n; i++)
        {
            cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<endl;
        s.clear();
    }
}
