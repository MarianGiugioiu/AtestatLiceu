#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    long n,x,v[100],a,b;
    int i,s;

    ifstream f("atestat.in");
    ofstream g("atestat.out");
    f>>n;
    for(i=1;i<=n;i++)
    {
        s=0;
        f>>x;
        v[i]=x;
        while(x)
        {
            s=s+x%10;
            x/=10;
        }
        if(v[i]%s==0)
        g<<v[i]<<" ";
    }
    a=v[1];
    for(i=2;i<=n;i++)
    {
        b=v[i];
        while(a!=b)
        {
            if(a>b)
                a=a-b;
            else
                b=b-a;
        }
    }
   g<<endl<<a;
}
