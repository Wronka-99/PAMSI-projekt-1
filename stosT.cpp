#include <iostream>
#include "stosT.hh"

using namespace std;


stosT::stosT (int a)
{
    n = a;
    S = new int [a];
    wsk = 0;
}


stosT::~stosT()
{
    delete [] S;
}


bool stosT::empty()
{
    if(wsk!=0)
        return 0;
    else
        return 1;
}


int stosT::top(void)
{
    if(wsk!=0)
        return S[wsk-1];
        
}

void stosT::push(int b)
{
    if(wsk<n)
    {
        S[wsk++] = b;
    }
}


void stosT::pop(void)
{
    if(wsk!=0)
        wsk--;
}

