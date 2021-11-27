#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
int main ()
{
    long n,k,p;
    int i,d,gasit1,gasit,nr;

    ifstream f("atestat.in");
    ofstream g("atestat.out");
    f>>n;
    f>>k;

    g<<1<<" ";
    p=1;

    while(p*k<=n)
    {
        p=p*k;
        g<<p<<" ";
    }

    d=2; gasit=0;
        while(d<=sqrt(k)&&gasit==0)
        {
            if(k%d==0)
            gasit=1;
            d++;
        }
        nr=0;

        if(gasit==0)
        {
           while(n%k==0)
            {
                nr++;n=n/k;
            }
        }
        else
        {
            while(n%2==0)
            {
                nr++;n=n/2;
            }
        }

        g<<endl<<nr;


}
