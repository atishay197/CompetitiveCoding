#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b;
    int n,i;
    cin>>n;
    while(n--)
    {
        int counter = 0;
        cin>>a>>b;
        int al = a.length();
        int bl = b.length();
        int c[100] = {0};
        for(i=0 ; i<al ; i++)
            c[a[i]-65] = 1;
        for(i=0 ; i<bl ; i++)
        {
            if(c[b[i]-65] == 1)
                counter++;
        }
        cout<<counter<<"\n";
    }
    return 0;
}
