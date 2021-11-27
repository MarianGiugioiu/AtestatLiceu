#include<fstream>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
void citire(int k,int n,int v[100])
{
    f>>v[k];k++;
    if(k<=n)citire(k,n,v);

}
void maxim(int k,int &m,int n,int v[100])
{
    if(v[k]>m)
       m=v[k];k++;
       if(k<=n)
        maxim(k,m,n,v);
}
int main()
{
    int m=0,n,v[100];
    f>>n;
    citire(1,n,v);
    maxim(1,m,n,v);
    g<<m;
}
