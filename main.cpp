#include "main.h"
using namespace std;

int main (int argc, char* argv[])
{
    if(argc!=2)
    {
     cout<<"Проверьте подлючен ли файл\n";
     return 0;
    }

    menu(argv[1]);
    return 0;
}
