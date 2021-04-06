#include <iostream>
#include "stosT.hh"
#include "stosL.hh"
#include <ctime>

using namespace std;



int menu_stosT();
int menu_stosL();
int pomiary_czasu(int a);


int main()
{
    bool dzialanie=1;
    char znak;
    int awaryjna=0;


       



     while(dzialanie)
        {
            cout<<endl<<"Wybierz co chcesz zrobic:"<<endl;
            cout<<"-nacisnij '1' aby przejść do stosu opartego na liście jednokierunkowej."<<endl;
            cout<<"-nacisnij '2' aby przejść do stosu opartego na tablicy dynamicznej."<<endl;
            cout<<"-nacisnij '3' aby przejść do czasów działania dwóch powyższych implementacji."<<endl;
            cout<<"-nacisnij '4' aby zakonczyc  "<<endl<<endl;
            cin>>znak;

            
            


            switch(znak)
                {
                    case '1':   
                            awaryjna=menu_stosL();  
                    break;


                    case '2':
                            awaryjna=menu_stosT();
                    break;


                    case '3':
                            cout<<"Podaj rozmiary stosów dla porówania czasów działania."<<endl;
                            int q;
                            cin>>q;
                            awaryjna=pomiary_czasu(q);
                    break;


                    case '4':
                            dzialanie=0;
                            cout<<endl<<endl<<"Koniec dzialania programu."<<endl;
                    break;
                }


        }

    return 0;
}




int menu_stosT()
{
    bool dzialaniea=1;
    char znaka;
    cout<<"Podaj rozmiar stosu"<<endl;
    int a;
    cin>>a;
    stosT stos(a);


    while(dzialaniea)
    {

        cout<<endl<<endl<<"Wybierz co chcesz zrobic:"<<endl;
        cout<<"-nacisnij 'A' aby sprawdzić, czy stos jest pusty."<<endl;
        cout<<"-nacisnij 'B' aby usunąć stos. "<<endl;
        cout<<"-nacisnij 'C' aby dodać element. "<<endl;
        cout<<"-nacisnij 'D' aby usunąć element. "<<endl;
        cout<<"-nacisnij 'E' aby wyświetlić element. "<<endl;
        cout<<"-nacisnij 'F' aby wyjsc z tego menu.  "<<endl;
        cin>>znaka;
        

        switch (znaka)
        {
            case 'A':
                if(stos.empty()==0)
                    cout<<"Na stosie znajdują się wartości."<<endl;
                else
                    cout<<"Na stsoie nie ma zapisanych liczb."<<endl;                
            break;

            case 'B':
               stos.~stosT();
               cout<<"Stos został usunięty."<<endl; 
            break;

            case 'C':
                cout<<"Podaj liczbę, ktora chcesz dodac do stosu."<<endl;
                int a;
                cin>>a;
                stos.push(a);  
            break;

            case 'D':
                stos.pop();
                cout<<"Usunięto element poprawnie."<<endl;
            break;

            case 'E':
                cout<<"Na szczycie stosu znajduje się:";
                cout<<stos.top()<<endl;
            break;

            case 'F':
                dzialaniea=0;
            break;
            
           
        }

        

    }
    return 0;
}



int pomiary_czasu(int a)
{
    cout<<"Proba programu. Dla stosu opartego na tablicy dynamicznej."<<endl;
    
    clock_t starta =clock();

            stosT stos(a);
            int i;

            for(i=1; i<=a; i++)
            {
                stos.push(i);
            }


            while(!stos.empty())
            {
                stos.top();
                stos.pop();
            }

    clock_t stopa = clock();
    double czasa = (stopa-starta)/(double)CLOCKS_PER_SEC;

    

    cout<<"Proba programu. Dla stosu opartego na liście."<<endl<<endl;

    clock_t startb =clock();

            stosL stosb;
            int j;

            for(j=1; j<=a; j++)
            {
                stosb.push(j);
            }


            while(!stosb.empty())
            {
                stosb.top()->liczba;
                stosb.pop();
            }
    clock_t stopb=clock();

    double czasb = (stopb-startb)/(double)CLOCKS_PER_SEC;

    cout<<"Czas działania programu opratego na na tablicy dynamicznej wyniósł:"<<czasa*1000<<"[ms]."<<endl<<endl;
    cout<<"Czas działania programu opratego na na liście:"<<czasb*1000<<"[ms]."<<endl<<endl;

    return 0;
}


int menu_stosL()
{       

        bool dzialaniea=1;
        char znaka;
        stosL stosd;



    while(dzialaniea)
    {
        cout<<endl<<endl<<"Wybierz co chcesz zrobic:"<<endl;
        cout<<"-nacisnij 'A' aby sprawdzić, czy stos jest pusty."<<endl;
        cout<<"-nacisnij 'B' aby usunąć stos. "<<endl;
        cout<<"-nacisnij 'C' aby dodać element. "<<endl;
        cout<<"-nacisnij 'D' aby usunąć element. "<<endl;
        cout<<"-nacisnij 'E' aby wyświetlić element. "<<endl;
        cout<<"-nacisnij 'F' aby wyjsc z tego menu.  "<<endl;
        cin>>znaka;
        

        switch (znaka)
        {
            case 'A':
                if(stosd.empty()==0)
                    cout<<"Na stosie znajdują się wartości."<<endl;
                else
                    cout<<"Na stsoie nie ma zapisanych liczb."<<endl;                
            break;

            case 'B':
               stosd.~stosL();
               cout<<"Stos został usunięty."<<endl; 
            break;

            case 'C':
                cout<<"Podaj liczbę, ktora chcesz dodac do stosu."<<endl;
                int a;
                cin>>a;
                stosd.push(a);  
            break;

            case 'D':
                stosd.pop();
                cout<<"Usunięto element poprawnie."<<endl;
            break;

            case 'E':
                cout<<"Na szczycie stosu znajduje się:";
                cout<<stosd.top()->liczba<<endl;
            break;

            case 'F':
                dzialaniea=0;
            break;
            
           
        }

        

    }




    return 0;
}
