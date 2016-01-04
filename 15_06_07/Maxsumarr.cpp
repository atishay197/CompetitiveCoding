#include<iostream>
using namespace std;

int main()
{
    int A[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4},n1=9;
    int maxt=-1,maxnow=0,maxneg=0,maxnegm=-9999999,i=0,c=0;
    {
        for(i=0; i<n1 ; maxneg=0,i++,c++)
        {
            int b[c][1000];

            maxnow = maxnow+A[i];
            maxneg = maxneg+A[i];
            cout<<"Loop "<<i<<":"<<maxneg;
            if(maxnow<0)
                maxnow=0;
            if(maxnow>maxt)
                maxt = maxnow;
            if(maxneg>maxnegm)
                maxnegm = maxneg;
            if(maxt==0 && maxneg<-1)
                maxt = maxnegm;
        }
    }
    cout<<"\n"<<maxneg<<" "<<maxnegm<<" "<<maxt;
}
