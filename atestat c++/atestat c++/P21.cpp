#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
int a[100];
int f1(int p,int q,int r)
{
    int i,j,k,c[100];
    i=p;
    j=q+1;
    k=1;
    while(i<=q&&j<=r)
        if(a[i]<a[j])
    {c[k]=a[i];k++;i++;}
    else
    {
        c[k]=a[j];k++;j++;
    }
    while(i<=q)
      {c[k]=a[i];k++;i++;}
    while(j<=r)
    {
        c[k]=a[j];k++;j++;
    }
    k=1;
    for(i=p;i<=r;i++)
    {
        a[i]=c[k];
        k++;
    }

}
int f2(int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        f2(p,q);
        f2(q+1,r);
        f1(p,q,r);
    }
}
int main()
{
    int n,i;
    f>>n;
    for(i=1;i<=n;i++)
        f>>a[i];
    f2(1,n);
    for(i=1;i<=n;i++)
        g<<a[i]<<" ";
}
