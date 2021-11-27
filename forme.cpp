#include<bits/stdc++.h>
#include <math.h>
using namespace std;
#define pi 3.14159265358979
class Forma
{
protected:
    string tip;
    double aria,perimetru;
public:
    virtual double getX(){}
    virtual double getY(){}
    virtual double getR(){}
     double getAria(){return aria;}
    string getTip(){return tip;}
    virtual  double Aria()=0;
    virtual  double Perimetru(){}
    friend ostream &operator<<(ostream &in, Forma &x)
    {
        in<<fixed<<setprecision(2)<<x.tip<<" "<<x.aria<<" "<<x.perimetru;
        return in;
    }
    bool operator<(const Forma &v) const{
        if(this->aria==v.aria)
            return this->perimetru<v.perimetru;
        return this->aria<v.aria;
    }
};
class Cerc : public Forma
{
protected:
     double x,y,r;
public:
     double getX(){return x;}
     double getY(){return y;}
     double getR(){return r;}
     double Aria()
    {
        aria=pi*r*r;
    }
     double Perimetru()
    {
        perimetru=2*pi*r;
    }
    Cerc(){tip="cerc";x=y=r=aria=perimetru=0;}
    Cerc( double X,  double Y,  double R)
    {
        tip="cerc";
        x=X;
        y=Y;
        r=R;
        Aria();
        Perimetru();
    }

};
class  Dreptunghi: public Forma
{
protected:
     double x1,x2,y1,y2;
public:
     double Aria()
    {
        aria=(x2-x1)*(y2-y1);
    }
     double Perimetru()
    {
        perimetru=(x2-x1)*2+(y2-y1)*2;
    }
    Dreptunghi(){tip="dreptunghi";x1=x2=y1=y2=aria=perimetru=0;}
    Dreptunghi( double X1,  double Y1,  double X2,  double Y2)
    {
        tip="dreptunghi";
        x1=X1;
        y1=Y1;
        x2=X2;
        y2=Y2;
        Aria();
        Perimetru();
    }
};
class  Patrat: public Forma
{
protected:
     double x1,x2,y1,y2;
public:
     double Aria()
    {
        aria=(x2-x1)*(x2-x1);
    }
     double Perimetru()
    {
        perimetru=(x2-x1)*4;
    }
    Patrat(){tip="patrat";x1=x2=y1=y2=aria=perimetru=0;}
    Patrat( double X1,  double Y1,  double X2,  double Y2)
    {
        tip="patrat";
        x1=X1;
        y1=Y1;
        x2=X2;
        y2=Y2;
        Aria();
        Perimetru();
    }
};
bool cmp(Forma* x, Forma* y)
{
    return (*x)<(*y);
}
int main()
{
    int n,k=0;
     double m,M;
    Forma *v[1005];
    cin>>n>>m>>M;
    if(n<0||n>500||m>M){cout<<"Valoare de intrare invalida";return 0;}
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        if(s=="cerc")
        {
             double a,b,c;
            cin>>a>>b>>c;
            if(a<-1000||a>1000||b<-1000||b>1000||c<0||c>1000){cout<<"Valoare de intrare invalida";return 0;}
            v[i]= new Cerc(a,b,c);
        }
        if(s=="patrat")
        {
             double a,b,c,d;
            cin>>a>>b>>c>>d;
            if(a<-1000||a>1000||b<-1000||b>1000||c<-1000||c>1000||d<-1000||d>1000){cout<<"Valoare de intrare invalida";return 0;}
            Patrat (a,b,c,d);
            v[i]=new Patrat(a,b,c,d);
        }
        if(s=="dreptunghi")
        {
             double a,b,c,d;
            cin>>a>>b>>c>>d;
            if(a<-1000||a>1000||b<-1000||b>1000||c<-1000||c>1000||d<-1000||d>1000){cout<<"Valoare de intrare invalida";return 0;}
            Dreptunghi e(a,b,c,d);
            v[i]=new Dreptunghi(a,b,c,d);
        }
    }
    sort(v+1,v+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
        cout<<(*v[i])<<"\n";
        if(v[i]->getAria()>=m&&v[i]->getAria()<=M)
            k++;
    }
    //cout<<".*";
    cout<<k<<"\n";
    int u=1;
    for(int i=n;i>1&&u;i--)
        if(v[i]->getTip()=="cerc")
        for(int j=i-1;j>=1&&u;j--)
        if(v[j]->getTip()=="cerc")
    {
         double d=sqrt((v[i]->getX()-v[j]->getX())*(v[i]->getX()-v[j]->getX())+(v[i]->getY()-v[j]->getY())*(v[i]->getY()-v[j]->getY()));
        if(v[i]->getR()+v[j]->getR()>=d)
            u=0;
    }
    if(u)cout<<"nu";
    else cout<<"da";
}
