#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int i,j,n,a[100][100],go,prod=1;
    ifstream f("matrice.in");
    ofstream g("matrice.out");
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            f>>a[i][j];
    for(i=1;i<=n;i++)
    {
        prod=a[i][1]*prod;
        prod=a[i][n]*prod;
    }
    for(j=2;j<=n-1;j++)
    {
        prod=a[1][j]*prod;
        prod=a[n][j]*prod;
    }
    g<<prod;
    g<<endl;
    for(i=0;i<=n+1;i++)
    {
        a[i][0]=1;
        a[0][i]=1;
        a[i][n+1]=1;
        a[n+1][i]=1;
    }
    for(i=0;i<=n+1;i++)
    {
        for(j=0;j<=n+1;j++)
            g<<a[i][j]<<" ";
        g<<endl;
    }
}
