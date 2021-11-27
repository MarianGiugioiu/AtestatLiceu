#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    long n,min=10000,max=0,max1=0,v[100],x;
    int gasit=0,a,b,i;
    ifstream f("atestat.in");
    ofstream g("atestat.out");
    f>>n;
    for(i=1;i<=n;i++)
       {f>>x;
       v[i]=x;
       }

    for(i=1;i<=n;i++)
      if(min>v[i])
         min=v[i];

    for(i=1;i<=n;i++)
      if(max<v[i])
         max=v[i];

    for(i=1;i<=n&&gasit==0;i++)
     if(min==v[i])
     {
         gasit=1;
         a=i;
     }
     gasit=0;
     for(i=1;i<=n&&gasit==0;i++)
     if(max==v[i])
     {
         gasit=1;
         b=i;
     }

    g<<min<<" "<<a<<endl;
    g<<max<<" "<<b<<endl;

    for(i=1;i<=n;i++)
     if(max1<v[i]&&v[i]!=max)
        max1=v[i];

    g<<max1<<" "<<max;


}
