#include "main.h"

using namespace std;

void menu(char *fname)
{
    APT* begin;
    APT* z;
    z=begin=NULL;
    int sm;
    int m;
    int i;
    fstream file;
    file.open(fname, ios_base::in);
    if(file==NULL)
    {
        cout<<"База данных пуста. Начинаем заполнение\n";
        begin=add(begin, &m, &sm);
        cout<<"База данных создана.\n";
        WrFi(begin,fname,&m,&sm);
    }
    else
    {
        cout<<"База данных подключена.\n";
        begin=ReFi(begin,fname,&m,&sm);
    }

    while(1)
   {
        cout<<"1. Добавить препарат \n2. Удалить препарат \n3. Просмотр всех лекарств\n4. Продать лекарства\n5. Привоз лекарств \n6. Поиск \n7. Выход из программы \n";
        cin>>i;
        switch(i)
        {
        case 1:
            begin=add(begin, &m, &sm);
            WrFi(begin,fname,&m,&sm);
            continue;
        case 2:
            begin=del(begin, &m,&sm);
            WrFi(begin,fname,&m,&sm);
            continue;
        case 3:
            show(begin,m,sm);
            continue;
        case 4:
            otvoz(begin,&sm);
            WrFi(begin,fname,&m,&sm);
            continue;
        case 5:
            privoz(begin,&sm);
            WrFi(begin,fname,&m,&sm);
            continue;
        case 6:
            poisk(begin);
            continue;

        case 7:
            exit(1);
            continue;
        default:
            cout<<"Нет такого пункта меню."<<endl;
            continue;


        }

   }

}
