#include<bits/stdc++.h>
using namespace std;
class Bit
{
    public:
    int N,n;
    int a[1030];
    int b[3000];
    int c[3000];
    friend istream &operator>>(istream &in, Bit &x)
    {
        in>>x.N;
        in>>x.n;
        for(int i=1;i<=x.N;i++) in>>x.a[i];
    }
    int f0()
    {
        b[0]=0;
        int j=0,k=1;
        while(j<N)
        {
            int i=1,o=1;
            while(i<=n&&i+j<=N)
            {
                if(a[j+i]==1) o=0;
                i++;
            }
            if(o==0||i<=n)
            {
                b[k++]=1;
                for(int u=j+1;u<=j+n&&u<=N;u++) b[k++]=a[u];
            }
            else b[k++]=0;
            j+=n;
        }
        return k;
    }
    int f1()
    {
        c[0]=1;
        int j=0,k=1;
        while(j<N)
        {
            int i=1,o=1;
            while(i<=n&&i+j<=N)
            {
                if(a[j+i]==0) o=0;
                i++;
            }
            if(o==0||i<=n)
            {
                c[k++]=0;
                for(int u=j+1;u<=j+n&&u<=N;u++) c[k++]=a[u];
            }
            else c[k++]=1;
            j+=n;
        }
        return k;
    }
    void comp()
    {
        int l0=f0(),l1=f1();
        if(l0<=l1)
        {
            cout<<fixed<<setprecision(2)<<(double)N/l0<<"\n";
            for(int i=0;i<l0;i++)
                cout<<b[i]<<"\n";
        }
        else
        {
            cout<<fixed<<setprecision(2)<<(double)N/l1<<"\n";
            for(int i=0;i<l1;i++)
                cout<<c[i]<<"\n";
        }
    }
};
int main()
{
    Bit z;
    cin>>z;
    /*for(int i=1;i<=z.N;i++) cout<<z.a[i];
    cout<<endl;
    cout<<z.f0()<<" "<<z.f1()<<endl;
    for(int i=0;i<=11;i++) cout<<z.b[i];
    cout<<endl;
    for(int i=0;i<=13;i++) cout<<z.c[i];
    cout<<endl;*/
    z.comp();
}
