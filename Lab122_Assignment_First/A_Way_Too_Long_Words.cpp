#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,len;
    char s[100];
    cin>>n;
    for(i = 0; i < n; i++)
        {
        cin>>s;
        len = strlen(s);
        if(len>10)
           
           cout<<s[0]<<len-2<<s[len-1];

        else
           cout<<s;
           cout<<"\n";
        
    }


    return 0;
}