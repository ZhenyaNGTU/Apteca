#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

class APT {
public:
    int number, price, x, j ;//x-количество штук. j-место для 1 штуки
    char* name;
    char* ysl;
    char* date;
    char* znach;
    APT* next;
    APT(int n, int p, int xx, int jj, char* nam, char* d, char* y, char* z);
    void show();
};


void menu(char* fname);
APT* add(APT* e, int* m, int *sm);
void show(APT* e, int m, int sm);
APT* del(APT* e, int* m, int* sm);
void poisk(APT* e);
void privoz(APT* e, int* sm);
void otvoz(APT* e,  int* sm);
void WrFi(APT* e,char* fname,int* m, int* sm);
APT* ReFi(APT* e,char* fname, int* m, int* sm);

#endif // MAIN_H
