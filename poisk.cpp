#include "main.h" //Поиск лекарств

using namespace std;

void poisk(APT* e)
{
    int n;
    int i;
    float c;

    cout<<"По какому параметру ищем?\n 1. Номер.\n 2. Цена.\n";
    cin>>i;
    switch(i){
    case 1:

    cout<<"Введите номер лекарства: ";
    cin>>n;

    while(1)
    {
        if (e->number==n)
        {
        cout<<"Номер: "<<e->number<<endl;
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
    break;

    case 2:
        cout<<"Введите цену лекарства: ";
        cin>>c;

        while (1)
        {
            if(e->price==c)
            {
                cout<<"Номер: "<<e->number<<endl;
                cout<<"Название препарата: "<<e->name<<endl;
                cout<<"Цена: "<<e->price<<endl;
                cout<<"Срок годности: "<<e->date<<endl;
                cout<<"Условия хранения: "<<e->ysl<<endl;
                cout<<"Назначение препарата: "<<e->znach<<endl;
                break;
                }
            else

                if(e->next==NULL)
                    break;
                e=e->next;

            }



    }

}
