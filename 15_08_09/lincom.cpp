#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,k,r,countr[505] = {0};
    char a[501][501];
    scanf("%d %d",&n,&m);
    for(i=0 ; i<n ; i++)
    {
        scanf("%s" , &a[i]);
        for(j=0 ; j<m ; j++)
        {
            //cout<<a[i][j]<<" ";
            if(a[i][j] == '1')
                countr[i]++;
        }
        //cout<<"\n";
        //for(k=0 ; k<n ; k++)
          //  cout<<countr[k]<<" ";
        //cout<<"\n";
    }
    scanf("%d" , &r);
    while(r--)
    {
        scanf("%d %d",&i,&j);
        i--;
        j--;
        if(a[i][j] == '1')
        {
            a[i][j] = '0';
            countr[i]--;
        }
        else
        {
            a[i][j] = '1';
            countr[i]++;
        }
        //for(k=0 ; k<n ; k++)
          //  cout<<countr[k]<<" ";
        //cout<<"\n";
    }
    int maxcnt=0 , tieflag = 0,index;
    for(i=0 ; i<n ; i++)
    {
            if(countr[i] > maxcnt)
            {
                maxcnt = countr[i];
                index = i+1;
                tieflag = 0;
            }
            else if(countr[i] == maxcnt)
                tieflag = 1;
    }
    if(tieflag)
        printf("Tie\n");
    else
        printf("%d\n",index);
    return 0;
}
