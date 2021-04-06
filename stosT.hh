#ifndef STOSTABLICA__HH
#define STOSTABLICA__HH
#include <iostream>

using namespace std;


class stosT
{
    private:
        int n; //rozmiar tablicy
        int wsk; //wskaznik do stosu
        int * S; //tablica dynamiczna
    
    public:
        stosT (int a); //konstruktor
        ~stosT(); //destruktor
        bool empty(void); //sprawdzanie czy stos jest pusty
        int top(void); //wyswietlanie elementu ze szczytu
        void push(int b); //dodawanie elementu na szczyt
        void pop(void); //usuwanie elementu
};




#endif