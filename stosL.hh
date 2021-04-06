#ifndef stosL__hh
#define stosL__hh

#include<iostream>

struct lista
{
    lista * nastepny;
    int liczba;
};

class stosL
{
    private:
        lista * wsk;
        
    public:
        stosL(); //konstruktor
        ~stosL(); //destruktor
        bool empty (void); //sprawdzanie, czy jest pusty
        lista * top (void); // odczytywanie elementu ze szczytu
        void push (int a); //dodawanie elementu
        void pop (void); //usuwanie elementu
};


#endif
