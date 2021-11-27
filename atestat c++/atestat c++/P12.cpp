#include<fstream>
using namespace std;
ifstream f("matrice.in");
ofstream g("matrice.out");
int main()
{
    int n,a[100][100],l1,l2,c1,c2,i,j,aux,b[100][100];
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
          {f>>a[i][j];b[i][j]=a[i][j];}
    f>>l1>>l2;
    for(j=1;j<=n;j++)
    {
        aux=a[l1][j];
        a[l1][j]=a[l2][j];
        a[l2][j]=aux;
    }
    for(i=1;i<=n;i++)
       {
        for(j=1;j<=n;j++)
          g<<a[i][j]<<" ";
    g<<endl;
       }


    f>>c1>>c2;
     for(i=1;i<=n;i++)
    {
        aux=b[i][c1];
        b[i][c1]=b[i][c2];
        b[i][c2]=aux;
    }
      for(i=1;i<=n;i++)
       {
        for(j=1;j<=n;j++)
          g<<b[i][j]<<" ";
    g<<endl;
       }
}
