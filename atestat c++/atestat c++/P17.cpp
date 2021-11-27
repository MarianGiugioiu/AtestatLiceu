#include<fstream>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
void functie(int n)
{
    int i;
    if(n)
    {
        for(i=1;i<=n;i++)
            g<<i<<" ";
        g<<endl;
        functie(n-1);
    }
}
int main()
{
    int n;
    f>>n;
    functie(n);
}
