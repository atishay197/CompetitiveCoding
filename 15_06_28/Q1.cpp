#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cin>>b;
        int mindiff=0,maxdiff=0;
        int k = a.length();
        int l = b.length();
        int m = k>l?k:l;
        int n = k>l?l:k;
        int diff = m-n;
        for(int i=0 ; i<n ; i++)
        {
            if(a[i] != b[i] && a[i] != '?' && b[i]!= '?')
            {
                mindiff++;
                maxdiff++;
            }
            if(a[i] == '?' && b[i]== '?')
            {
                maxdiff++;
            }
            if(a[i] != '?' && b[i] == '?' || a[i] == '?' && b[i] != '?')
            {
                maxdiff++;
            }
        }
        cout<<mindiff<<" "<<maxdiff<<"\n";
    }
    return 0;
}
