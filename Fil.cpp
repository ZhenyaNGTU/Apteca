#include "main.h"

using namespace std;

void WrFi(APT* e,char* fname,int* m, int* sm) //Запись в файл
{
    fstream file;
    file.open(fname,ios_base::out | ios_base::trunc);
    file<<*m<<' ';
    file<<*sm<<'\n';
    while(1)
    {
        file<<e->number<<'\n';
        file<<e->price<<'\n';
        file<<e->j<<'\n';
        file<<e->x<<'\n';
        file<<e->date<<'\n';
        file<<e->name<<'\n';
        file<<e->ysl<<'\n';
        file<<e->znach<<'\n';

        if(e->next==NULL)
                break;
        e=e->next;
    }
}

APT* ReFi(APT* e,char* fname, int* m, int* sm)  //Чтение из файла
{
    fstream file;
    string a,b,c,d;
    char *aa,*bb,*cc,*dd;
    int n,p,xx,jj;
    char buf;
    APT* begin;
    int flag=0;
    file.open(fname, ios_base::in);
    file>>*m;
    file>>*sm;
    while(1)
    {
        file>>n;
        file>>p;
        file>>jj;
        file>>xx;
        file.get(buf);
        getline(file,a, '\n');
        getline(file,b, '\n');
        getline(file,c, '\n');
        getline(file,d, '\n');
        /*cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;*/
        if(flag==0)
        {
            aa=new char[a.length()];
            strcpy(aa,a.c_str());
            bb=new char[b.length()];
            strcpy(bb,b.c_str());
            cc=new char[c.length()];
            strcpy(cc,c.c_str());
            dd=new char[d.length()];
            strcpy(dd,d.c_str());
            begin=new APT(n,p,xx,jj,bb,aa,cc,dd);
            e=begin;
            flag=1;
        }
        else
        {
            aa=new char[a.length()];
            strcpy(aa,a.c_str());
            bb=new char[b.length()];
            strcpy(bb,b.c_str());
            cc=new char[c.length()];
            strcpy(cc,c.c_str());
            dd=new char[d.length()];
            strcpy(dd,d.c_str());
            e->next=new APT(n,p,xx,jj,bb,aa,cc,dd);
            e=e->next;
        }
        if(file.get()==EOF)
            break;
        file.unget();


    }

    return begin;

}
