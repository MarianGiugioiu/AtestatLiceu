#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int i,j,n,a[100][100],go;
    ifstream f("matrice.in");
    ofstream g("matrice.out");
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            f>>a[i][j];
    go=0;
    for(i=2;i<=n && go==0;i++)
        for(j=1;j<i && go==0;j++)
        if(a[i][j]!=a[j][i])
            go=1;
    if(go==0)
    g<<"da";
    else
    g<<"nu";
    go=0;g<<endl;
    for(i=1;i<n && go==0;i++)
        for(j=1;j<=n-i && go==0;j++)
        if(a[i][j]!=a[n-j+1][n-i+1])
            go=1;
    if(go==0)
    g<<"da";
    else
    g<<"nu";
}
