#include<fstream>
#include<math.h>
using namespace std;
int main()
{
    int d,n,i,nr=0,gasit,m1=0,m2=0;
    long x,v[100],p;
    ifstream f("atestat.in");
    ofstream g("atestat.out");

    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        v[i]=x;
        d=2; gasit=0;
        while(d<=sqrt(v[i])&&gasit==0)
        {
            if(v[i]%d==0)
            gasit=1;
            d++;
        }
        if(gasit==0)
        nr++;
        while(x%2)
        {
            m1++;
            x=x/2;
        }
        while(x%5)
        {
            m2++;
            x=x/2;
        }
    }
    g<<nr<<endl;
    if(m1<m2)
        g<<m1;
    else
        g<<m2;
}
