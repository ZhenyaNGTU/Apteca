#include "main.h"
using namespace std;

void privoz(APT* e, int* sm)

{
    int n;
    int i;

    cout<<"Введите номер препарата, который хотите завезти: ";
    cin>>n;
    while(1)
    {
    if(e->number==n)
    {
        cout<<"Свободно места: "<<*sm<<endl;
        cout<<"Место занимаемое одним таким лекарством: "<<e->j<<endl;
        cout<<"Какое количество лекарств вы хотите добавить? ";
        cin>>i;
        if ((i*e->j)>*sm)
        {
            cout<<"Недостаточно свободного места.\n";
            continue;
        }
        else {
            *sm=*sm-(i*e->j);
            cout<<"Лекарства завезены.";
            e->x+=i;
            }
    }
    if(e->next==NULL)
        break;
    e=e->next;

    }
}


void otvoz(APT* e,  int* sm)
{
    int n;
    int i;

    cout<<"Введите номер препарата, который хотите продать: \n";
    cin>>n;
    while(1)
    {
        if(e->number==n)
        {
            cout<<"Какое количество лекарства вы хотите продать? \n";
            cin>>i;
            if (i>e->x)
            {
                cout<<"У вас нет в наличии такого количества препарата.\n";
                continue;\

            }
          else {
                *sm=*sm+(i*e->j);
                cout<<"Лекарства проданы.";
                e->x-=i;
            }
            if(e->next==NULL)
                break;
            e->next;

            }

        }


}
