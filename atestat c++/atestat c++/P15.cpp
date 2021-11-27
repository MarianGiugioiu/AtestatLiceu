#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
ofstream g("date.out");
int main()
{
    char *p,s[100],s1[100];
    int l1,i;
    cin.get(s1,100);
    l1=strlen(s1);
    strcpy(s,s1);
    for(i=0;i<l1;i++)
    {
        p=strchr("aeiou",s1[i]);
        if(p)
            {strcpy(s1+i,s1+i+1);i--;l1--;}
    }
    g<<s1<<endl;
    l1=strlen(s);
    for(i=l1+1;i>0;i--)
        s[i]=s[i-1];
    strcat(s,"A");
    s[0]='A';
    g<<s;
}
