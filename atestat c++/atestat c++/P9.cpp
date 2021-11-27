#include<bits/stdc++.h>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
int main()
{
    int n,v[100],i,k=0,p=0,c[100],x,aux,j;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        k++;
        v[k]=x;
        if(x%2==1)
        {p++;
            c[p]=x;
        }
    }
    for(i=1;i<p;i++)
        for(j=i+1;j<=p;j++)
        if(c[i]<c[j])
    {
        aux=c[i];
        c[i]=c[j];
        c[j]=aux;
    }
    for(i=1;i<=p;i++)
        g<<c[i]<<" ";
g<<endl;
       for(i=1;i<k;i++)
        for(j=i+1;j<=k;j++)
        if(v[i]>v[j]&&v[i]%2==1&&v[j]%2==1)
    {
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
    }
    for(i=1;i<=k;i++)
        g<<v[i]<<" ";

}
