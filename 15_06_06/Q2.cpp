#include<iostream>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n=0,i=0,j=0,nnc=0,ppc=0,pnc=0,npc=0;
        long int a[10][10],pp[10][10],pn[10][10],np[10][10],nn[10][10];
        cin>>n;
        for(i=0 ; i<n ; i++)
        {
            cin>>a[i][0];
            for(j=1 ; j < (2*(a[i][0])+1) ; j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0 ; i<n ; i++)
        {
            cout<<"\n"<<a[i][0]<<"\n";
            for(j=1 ; j<(2*a[i][0]+1) ; j+=2)
            {
                cout<<"\n"<<a[i][j]<<","<<a[i][j+1]<<"\n\n";
                if(a[i][j] < 0)
                {

                    if(a[i][j+1] < 0)
                    {
                        nn[i][nnc] = a[i][j];
                        nn[i][nnc+1] = a[i][j+1];
                        cout<<"\nNN:";
                        cout<<nn[i][nnc]<<" "<<nn[i][nnc+1]<<"\n";
                        nnc += 2;
                    }

                    if(a[i][j+1] >= 0)
                    {
                        np[i][npc] = a[i][j];
                        np[i][npc+1] = a[i][j+1];
                        cout<<"\nNP:";
                        cout<<np[i][npc]<<" "<<np[i][npc+1]<<" ";
                        npc += 2;
                    }

                }

                if(a[i][j] > 0)
                {
                    if(a[i][j+1] < 0)
                    {
                        pn[i][pnc] = a[i][j];
                        pn[i][pnc+1] = a[i][j+1];
                        cout<<"\nPN:";
                        cout<<pn[i][pnc]<<" "<<pn[i][pnc+1]<<" ";
                        pnc += 2;
                    }

                    if(a[i][j+1] >= 0)
                    {
                        pp[i][ppc] = a[i][j];
                        pp[i][ppc+1] = a[i][j+1];
                        cout<<"\nPP:";
                        cout<<pp[i][ppc]<<" "<<pp[i][ppc+1]<<" ";
                        ppc += 2;
                    }

                }
            }
        }

    }
    return 0;
}
