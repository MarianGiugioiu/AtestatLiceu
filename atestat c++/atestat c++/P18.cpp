#include<fstream>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
int factorial(int x,int k,int s)
{
    if(k==x)
        return 1;
    else if(k>x)
    return 0;
    else
        return factorial(x,k*s,s+1);
}
void functie(int n,int v[100])
{
    int i;
    for(i=1;i<=n;i++)
        if(factorial(v[i],1,2)==1)
        g<<v[i]<<" ";
}
int main()
{
    int n,v[100],i;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    functie(n,v);
}
