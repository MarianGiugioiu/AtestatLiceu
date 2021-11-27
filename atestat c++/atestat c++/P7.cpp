#include<fstream>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
int fib(int n)
{
    int a=1,b=1,i;
    for(i=3;i<=n;i++)
       {
           b=a+b;
           a=b-a;
       }
    return b;
}
int main()
{
    int n,x,p=1,y=0;
    f>>n;
    x=fib(n);
    g<<x<<endl;
    while(x)
    {
        y=y+x%2*p;
        p=p*10;
        x=x/2;
    }
    g<<y;
}
