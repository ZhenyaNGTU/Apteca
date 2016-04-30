#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

class APT {
public:
    int number, price, x, j ;//x-количество штук. j-место для 1 штуки, number - уникальный номер препарата, price - цена
    char* name;//имя препарата
    char* ysl;//условия хранения
    char* date;//срок годности препарата
    char* znach;//назначение(обезболивающее, противовирусное и тд)
    APT* next;//указатель на следующий цветок
    APT(int n, int p, int xx, int jj, char* nam, char* d, char* y, char* z);
    void show();
};


void menu(char* fname);//меню
APT* add(APT* e, int* m, int *sm);//добавление нового препарата
void show(APT* e, int m, int sm);//показ всех лекарств
APT* del(APT* e, int* m, int* sm);//удаление лекарств
void poisk(APT* e);//поиск лекарств
void privoz(APT* e, int* sm);//привоз лекарств
void otvoz(APT* e,  int* sm);//продажа лекарств
void WrFi(APT* e,char* fname,int* m, int* sm);//запись в файл
APT* ReFi(APT* e,char* fname, int* m, int* sm);//чтение из файла

#endif // MAIN_H
