#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       set<char>st;
       for(int i=0;i<s.length();i++)
       st.insert(s[i]);
       bool flag =  true ;
       for(int i=0;i<s.length();i++)
       {
        if(s[i]!=s[i%st.size()])
        {
            flag = false;
            break;
        }
       }
    if(flag)
    cout<<"YES\n";
    else
    cout<<"NO\n";

}
return 0;
}