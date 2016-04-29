#include "main.h"

using namespace std;

void poisk(APT* e)
{
    int n;

    cout<<"Введите номер лекарства: ";
    cin>>n;

    while(1)
    {
        if (e->number==n)
        {
        cout<<"Название препарата: "<<e->name<<endl;
        cout<<"Цена: "<<e->price<<endl;
        cout<<"Срок годности: "<<e->date<<endl;
        cout<<"Условия хранения: "<<e->ysl<<endl;
        cout<<"Назначение препарата: "<<e->znach<<endl;
        break;
        }
        if(e->next==NULL)
            break;
        e=e->next;

    }

}

