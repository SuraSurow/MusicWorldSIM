

#include "headFile.h"



int main()
{
    pressEnter();
    start();
    preestart();
    size_t size;
    size_t* pSize = &size;
    get_size(pSize);
    creator * _creator = nullptr;
    album ** _album = nullptr;
    musicDisc ** _musicDisc = nullptr;
    size_t choiceIndex;
    do{
        menu_show_content();
        index(&choiceIndex);
        switch ( choiceIndex ) {
            case EXIT : {
                cout
                        << " !!! Exit !!!"
                        << "\n Thanks you for use application";
                return EXIT_SUCCESS;
            }
            case CREATE : {
                cout <<"tutaj";
                //create(_creator,pSize);
                cout << "\nalbumy";
                create(_album,pSize);
                cout << "\nmusicDisc";
                create(_musicDisc,pSize);
                break;
            }
            case INITIALIZE : {
                //init(_creator,pSize);
                init(_album,pSize);
                init(_musicDisc,pSize);
                break;
            }
            case PRINT : {
                //print(_creator,pSize);
                cout << "\nalbumy\n";

                print(_album,pSize);
                cout << "\nmusicDisc\n";

                print(_musicDisc,pSize);
                break;
            }
            case ADD : {

                //dd(_creator,)
                //cout <<"\n!!!debug!!!\n"<< sizeof(**_album);
                add(_album,pSize);
                add(_musicDisc ,pSize);
                //cout <<"\n!!!debug!!!\n"<< sizeof(**_album);
                size_t fcalkowityRozmiar = sizeof(album) * (*pSize);

                std::cout << "Rozmiar tablicy obiektow: " << fcalkowityRozmiar << " bajtow\n";

                break;
            }
            case DELETE : {
                //del(_creator,*pSize);
                del(_album,*pSize);
                del(_musicDisc,*pSize);
;
                break;
            }
            /*case SORT : {
;
                break;
            }
            case DATA_SHEET : {
;
                break;
            }*/
            default : {
                std::cout << "\nERROR, probably you write bad index, try again";
                pressEnter();
            }
        }


    }while(choiceIndex != 0);



    //loop(_creator,_album,_musicDisc ,pSize);
    return EXIT_SUCCESS;
}




void start ()
{
    cout
    << "\n\tWitaj w Kreatorze Swiata Muzycznego\n"
    << "\n\t( welcome to the app that creates the music world ) "
    << "\n\n\tW naszym sumulatorze mozna:"
    << "\n\t( In our simulation can: )"
    << "\n\n\t-Tworzyc ( Create ) "
    << "\n\t-Inicjowac ( Initialize )"
    << "\n\t-Wyswietlic ( Print )"
    << "\n\t-Dodac ( add )"
    << "\n\t-Usunac ( delete )"
    << "\n\t-Sortowac ( sort )"
    << "\n\t-Zestawiac Dane ( data sheet )"
    << "\n\n\t!!! Tworcow Muzycznych ( music artist's )\t!!!"
    << "\n\t!!! Albumy Muzyczne ( music album's )\t\t!!!"
    << "\n\t!!! Utwory Muzyczne ( music song's )\t\t!!!";
    pressEnter();
}


void menu_show_content()
{
    cout
    << "\n\n\t0. EXIT"
    << "\n\t1. Tworzyc ( create )"
    << "\n\t2. Inicjowac ( Initialize )"
    << "\n\t3. Wyswietlic ( Print )"
    << "\n\t4. Dodac ( add )"
    << "\n\t5. Usunac ( delete )"
    << "\n\t6. Sortowac ( sort )"
    << "\n\t7. Zestawiac Dane ( data sheet )"
    ;
}

void preestart()
{
    cout
    << "\nPrzed uzytkowaniem oprogramowania nalezy stworzyc obiekty"
    << "( Objects must be created before using the software ) "
    << "\n\n-Creator"
    << "\n-Album"
    << "\n-Disc"
    << "\nWprowadz Liczbe obiektow"
    << "\n(Enter count of object)\n"
    ;
}



