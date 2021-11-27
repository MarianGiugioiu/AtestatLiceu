#include<fstream>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
int main()
{
    long n;
    int m=0,i,v[10],x,a;
    f>>n;
    for(i=0;i<=9;i++)
        v[i]=0;
    for(i=1;i<=n;i++)
    {
        f>>x;
        while(x)
        {
            v[x%10]++;
            x=x/10;
        }
    }
    for(i=0;i<=9;i++)
        if(v[i]>m)
    {
        a=i;m=v[i];
    }
    g<<a<<endl;
    for(i=0;i<=9;i++)
        if(v[i]==0)
        g<<i<<" ";
}
