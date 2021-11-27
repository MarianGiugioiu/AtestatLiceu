#include<fstream>
#include<string.h>
using namespace std;
ifstream f("atestat.in");
ofstream g("atestat.out");
int main()
{
    char *p,s[100],s1[100],s2[100];
    int l1,l2,h,i;
    f.get(s1,100);
    f.get();
    f.get(s2,100);
    l1=strlen(s1);
    l2=strlen(s2);
    strcpy(s,s2);
    if(l1==l2)
    {
        h=1;
        for(i=0;i<l1&&h;i++)
        {
            p=strchr(s2,s1[i]);
            if(p)
                strcpy(p,p+1);
            else
                h=0;
        }
        if(h==1)
            g<<"Sirurile sunt anagrame";
            else
            g<<"Sirurile nu sunt anagrame";
    }
    g<<endl;
    for(i=0;i<l2;i++)
    {
        p=strchr("aeiou",s[i]);
        if(p)
            {strcpy(s+i,s+i+1);i--;l2--;}
    }
    for(i=0;i<l1;i++)
    {
        p=strchr("aeiou",s1[i]);
        if(p)
            {strcpy(s1+i,s1+i+1);i--;l1--;}
    }
    g<<s1<<" "<<s;
}
