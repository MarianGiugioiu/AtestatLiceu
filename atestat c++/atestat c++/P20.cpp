#include<fstream>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
int v[100],n;
int ma(int i, int j)
{ int a, b, m;
if (i==j)
return v[i];
else
{ m = (i+j)/2;
a = ma(i, m);
b = ma(m+1, j);
if (a>b)
return a;
else
return b;
}
}
int mi(int i, int j)
{ int a, b, m;
if (i==j)
return v[i];
else
{ m = (i+j)/2;
a = mi(i, m);
b = mi(m+1, j);
if (a<b)
return a;
else
return b;
}
}
int main()
{
    int i;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    g<<ma(1,n)<<endl;
    g<<mi(1,n);
}
