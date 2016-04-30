#include "main.h"

using namespace std;
APT::APT(int n, int p ,int xx, int jj, char* nam, char* d, char* y, char* z)
{
    number=n;
    price=p;
    x=xx;
    j=jj;
    name=new char[strlen(nam)];
    strcpy(name,nam);
    delete nam;
    ysl=new char[strlen(y)];
    strcpy(ysl,y);
    delete y;
    znach=new char[strlen(z)];
    strcpy(znach,z);
    delete z;
    date=new char[strlen(d)];
    strcpy(date,d);
    delete d;
    next=NULL;

}

APT* add(APT* e, int* m, int* sm)//добавление нового препарат

{
   APT* begin;
   string name,ysl,znach,date;
   char* nam;
   char* ys;
   char* znac;
   char* dat;
   int num, pric, jj;

    if (e==NULL)
    {
        cout<<"Введите общее количество мест на полках: ";
        cin>>*m;
            *sm=*m;
        cout<<"Введите уникальный номер препарата: ";
        cin>>num;
        cout<<"Введите цену лекарства: ";
        cin>>pric;
        cout<<"Введите место, занимаемое одним препаратом: ";
        cin>>jj;

        cout<<"Введите название лекарства: ";
        cin.ignore();
        getline(cin,name);
        nam=new char[name.length()];
        strcpy(nam,name.c_str());
        //cin.ignore();
        cout<<"Введите срок годности препарата: ";
        getline(cin,date);
        dat=new char[date.length()];
        strcpy(dat,date.c_str());
        cout<<"Введите условия хранения: ";
        getline(cin, ysl);
        ys=new char[ysl.length()];
        strcpy(ys, ysl.c_str());
        //cin.ignore();
        cout<<"Введите назначение препарата: ";
        getline(cin, znach);
        znac=new char[znach.length()];
        strcpy(znac, znach.c_str());
        begin=new APT(num,pric,0,jj,nam,dat,ys,znac);

        return begin;

    }
    else
    {
 begin=e;
 while(e->next!=NULL)
     e=e->next;
        cout<<"Введите уникальный номер препарата: ";
        cin>>num;
        if (e->number==num)

            {
                cout<<"Этот номер уже занят, подберите другой! \n\n";
                return begin;
            }

        cout<<"Введите цену лекарства: ";
        cin>>pric;
        cout<<"Введите место, занимаемое одним препаратом: ";
        cin>>jj;
        cout<<"Введите название лекарства: ";
        cin.ignore();
        getline(cin,name);
        nam=new char[name.length()];
        strcpy(nam,name.c_str());
        //cin.ignore();
        cout<<"Введите срок годности препарата: ";
        getline(cin,date);
        dat=new char[date.length()];
        strcpy(dat,date.c_str());
        cout<<"Введите условия хранения: ";
        getline(cin, ysl);
        ys=new char[ysl.length()];
        strcpy(ys, ysl.c_str());
        //cin.ignore();
        cout<<"Введите назначение препарата: ";
        getline(cin, znach);
        znac=new char[znach.length()];
        strcpy(znac, znach.c_str());
        e->next=new APT(num,pric,0,jj,nam,dat,ys,znac);

        return begin;
    }

}

APT* del(APT* e, int* m, int *sm) //удаление препарата
{
    int number;
    APT* begin;
    APT* buf;

    begin=e;

    cout<<"Введите уникальный номер препарата: ";
    cin>>number;
    if(e->next==NULL)
    {
        cout<<"Нельзя удалить единственный элемент списка"<<endl;
        return begin;
    }

    if (e->number==number)
    {

        while(1)
        {
            if(e->next->next==NULL)
                break;
            e=e->next;
        }
        *sm+=begin->x*begin->j;
        begin->number=e->next->number;
        begin->price=e->next->price;
        begin->x=e->next->x;
        begin->j=e->next->j;
        begin->name=new char[strlen(e->next->name)];
        strcpy(begin->name,e->next->name);
        begin->date=new char[strlen(e->next->date)];
        strcpy(begin->date,e->next->date);
        begin->ysl=new char[strlen(e->next->ysl)];
        strcpy(begin->ysl,e->next->ysl);
        begin->znach=new char[strlen(e->next->znach)];
        strcpy(begin->znach,e->next->znach);
        delete (e->next);
        e->next=NULL;
        return begin;
    }

    while(1)
    {

        if((e->next->number==number)&&(e->next->next!=NULL))
        {
            buf=e->next;
            *sm+=buf->j*buf->x;
            e->next=e->next->next;
            delete buf;
            return begin;
        }
        if((e->next->number==number)&&(e->next->next==NULL))
        {
            *sm+=e->next->j*e->next->x;
            delete e->next;
            e->next=NULL;
            return begin;
        }
        if(e->next==NULL)
            break;
        e=e->next;

    }
    return begin;


}
