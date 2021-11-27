#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    long n,a,b,d,v[100][100];
    int i,nr=0;

    ifstream f("atestat.in");
    ofstream g("atestat.out");

    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>a>>b;
        v[i][1]=a;
        v[i][2]=b;
        while(a!=b)
        {
            if(a<b)
                b=b-a;
            else
                a=a-b;
        }
        if(a==1)
            nr++;
        g<<v[i][1]/a<<" "<<v[i][2]/a<<endl;
    }
g<<nr;
}
