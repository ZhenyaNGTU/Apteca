#include "main.h"
using namespace std;



void APT::show()
{
    cout<<"Уникальный номер: "<<number<<endl;
    cout<<"Название препарата: "<<name<<endl;
    cout<<"Цена: "<<price<<endl;
    cout<<"Срок годности: "<<date<<endl;
    cout<<"Условия хранения: "<<ysl<<endl;
    cout<<"Назначение препарата: "<<znach<<endl;
    cout<<"В наличии: "<<x<<endl;
    cout<<"Место, занимаемое одним лекарством: "<<j<<endl;
    cout<<"Место, занимаемое всеми лекарствами данного типа: "<<x*j<<endl;
    cout<<endl;
}

void show(APT* e,int m,int sm)
{
    APT* begin;
    begin=e;
    cout<<"Всего места: "<<m<<endl;
    cout<<"Свободно: "<<sm<<endl;
    while(1)
    {

        e->APT::show();
        if(e->next==NULL)
            break;
        e=e->next;
    }
    e=begin;

}
