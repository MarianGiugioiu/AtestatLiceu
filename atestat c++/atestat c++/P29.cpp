#include<fstream>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
int main()
{
    int a,b,c,v[100],n,i,j,min=1000,max=-1000,e,v1[100];
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>v[i];
        if(v[i]>max)
        {
            max=v[i];a=i;
        }
        if(v[i]<min)
        {
            min=v[i];b=i;
        }
    }
    if(a>b)
    {a=a+b;
    b=a-b;
    a=a-b;}
    for(e=a;e<=b;e++)
    v1[e-a+1]=v[e];
    e=e-a;
    for(i=1;i<e;i++)
    for(j=i+1;j<=e;j++)
    if(v1[i]>v1[j])
    {
        v1[i]=v1[i]+v1[j];
        v1[j]=v1[i]-v1[j];
        v1[i]=v1[i]-v1[j];
    }
    for(i=1;i<=e;i++)
    g<<v1[i]<<" ";
    g<<endl;
    c=v[1];
    for(i=1;i<=n;i++)
    if(v[i]==c)
    {for(j=i;j<n;j++)
    v[j]=v[j+1];n--;}
    for(i=1;i<=n;i++)
    g<<v[i]<<" ";

}
