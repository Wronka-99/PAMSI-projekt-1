#include "stosL.hh"


stosL::stosL()
{
    wsk=NULL;
}



 stosL::~stosL()
 {
     while(wsk)
     {
         pop();
     }
 }



bool stosL::empty (void)
{
    return !wsk;
}




lista * stosL::top (void)
{
    return wsk;
}



void stosL::push (int a)
{
    
        lista *x = new lista;
        x->liczba=a;
        x->nastepny=wsk;
        wsk=x;
}





void stosL::pop (void)
{
 if (wsk!=0)
    {
        lista *x =wsk;
        wsk=wsk->nastepny;
        delete x;
    }
}