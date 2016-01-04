#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
        int m,n,cntr[1001] = {0};
        int count1=0,a,b,i,flag = 1;
        scanf("%d %d",&n,&m);
        for(i=1 ; i<m+1 ; i++)
        {
            scanf("%d %d",&a,&b);
            cntr[a]++;
            cntr[b]++;
            if(cntr[a] > 2 || cntr[b] > 2)
                flag = 0;
        }
        for(i=1 ; i<=m+1 ; i++)
        {
            //cout<<cntr[i]<<" ";
            if(cntr[i] == 1)
                count1++;
        }
        //cout<<"\n";
        if(count1 == 2 && flag && m==n-1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

    return 0;
}
