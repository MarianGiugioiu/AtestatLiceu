#include<fstream>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
int main()
{
    int n,i,a,b,v[10000],max=0,max1=0,min=100000;
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
    g<<min<<" "<<b<<endl;
    g<<max<<" "<<a<<endl;
    for(i=1;i<=n;i++)
        if(v[i]<max)
        if(v[i]>max1)
        max1=v[i];
    g<<max1<<" "<<max;
}
