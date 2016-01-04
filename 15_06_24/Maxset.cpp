#include<iostream>
using namespace std;

int main()
{
    int A[9] = {-2, 1, 6, 4, -1, 2, 1, -5, 4},n1=9;
    int maxt=-2,maxnow=0,maxneg=0,maxnegm=-9999999,i=0,c=0,a[1000];
        for(i=0,c=0; i<n1 ; maxneg=0,i++)
        {
            maxnow = maxnow+A[i];
            maxneg = maxneg+A[i];
            if(maxnow<0)
            {
                maxnow=0;
                c=0;
            }
            if(maxnow>maxt)
            {
                maxt = maxnow;
                a[c++]=A[i];
            }
            if(maxneg>maxnegm)
            {
                maxnegm = maxneg;
            }
            if(maxt==0 && maxneg<-1)
            {
                maxt = maxnegm;
                c=0;
            }
        }
    cout<<maxt<<"\n";
    for(i=0 ; i<c ; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
