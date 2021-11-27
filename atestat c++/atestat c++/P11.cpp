#include<fstream>
using namespace std;
ifstream f("matrice.in");
ofstream g("matrice.out");
int main()
{
    int n,x,i,s=0,nr=0,nr1=0,j;
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
        f>>x;
        if(j>i)
            if(x>0)
        {
            s=s+x;nr++;
        }
        if(j<i)
        if(x<0)
            nr1++;
    }
    g<<(float)s/nr;
    g<<endl<<nr1;

}
