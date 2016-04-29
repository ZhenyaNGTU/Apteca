#include "main.h"
using namespace std;

int main (int argc, char* argv[])
{
    if(argc!=2)
    {
     cout<<"Проверьте подлючен ли файл\n";
     return 0;
    }

    //Сделать проверку на подключение файла (argc - кол-во введных элементов, передать в меню имя файла для открытия из argv[1])
    menu(argv[1]);
    return 0;
}
