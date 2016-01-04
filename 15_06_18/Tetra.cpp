#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t,b[6],v,a[4];
    cin>>t;
    while(t--)
    {
        for(int i=0 ; i<6 ; i++)
        {
            cin>>b[i];
        }
        int u_ = b[1]*b[1] + b[2]*b[2] - b[3]*b[3];
        int v_ = b[2]*b[2] + b[0]*b[0] - b[4]*b[4];
        int w_ = b[0]*b[0] + b[1]*b[1] - b[5]*b[5];
        v = sqrt(4*b[0]*b[1]*b[2]*b[0]*b[1]*b[2] - b[0]*u_*b[0]*u_ - b[1]*v_*b[1]*v_ - b[2]*w_*b[2]*w_ + u_*v_*w_*u_*v_*w_)/12;
        cout<<"Volume : "<<v<<"\n";

    }
    return 0;
}
