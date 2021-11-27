#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
ifstream g("atestat.in");
    ofstream h("atestat.out");
int v[11];
int prim(int k)
{
    int i;
    for(i=2;i<=sqrt(k);i++)
        if(k%i==0)
        return 0;
    return 1;
}
int f(int s)
{
   int i,s1;
   for(i=0;i<=9;i++)
    if(v[i])
   {
       v[i]--;
       s1=s*10+i;
       if(prim(s1))
        h<<s1<<" ";
       f(s1);
       v[i]++;
   }
}
int main()
{
    int i,n,x,s=0,j;
    g>>n;
    for(i=1;i<=n;i++)
    {
        g>>x;v[x]++;
    }
    for(i=9;i>=0;i--)
        for(j=1;j<=v[i];j++)
        s=s*10+i;
    h<<s<<endl;
    f(0);

}
