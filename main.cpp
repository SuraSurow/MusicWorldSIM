

#include "headFile.h"



int main()
{
    pressEnter();
    start();
    preestart();
    size_t size = 0;
    get_size(&size);
    creator *_creator = nullptr;
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
                create (_creator , &size);
                create ( _album  , &size);
                create ( _musicDisc  , &size);

                break;
            }
            case INITIALIZE : {
                init(_creator,&size);
                init(_album,&size);
                init(_musicDisc,&size);
                break;
            }
            case PRINT : {
                cout << "\n\n\tWYKONAWCY (CREATORS)\n\n";
                print(_creator,&size);
                cout << "\n\n\tALBUMY (ALBUMS)\n\n";
                print(_album,&size);
                cout << "\n\n\tPLYTY MUZYCZNE (SONG DISCS)\n\n";
                print(_musicDisc,&size);
                break;

            }
            case ADD : {
                size_t size_new=0;
                get_size(&size_new);
                add ( _creator , &size, &size_new );
                add( _album ,&size ,&size_new);
                add(_musicDisc,&size,&size_new);
                break;


            }
            case DELETE : {
                size_t size_new = 0;
                get_size(&size_new);
                del(_creator,&size,&size_new);
                del(_album,&size,&size_new);
                del(_musicDisc,&size,&size_new);
                break;
            }
            case SORT : {

                size_t choiceSort = 0;
                sortMenu();
                index(&choiceSort);
                switch (choiceSort)
                {
                    case sortName::creator : {
                        sort (_creator ,&size);
                        break;
                    }
                    case sortName::album : {
                        sort ( _album,&size);
                        break;

                    }
                    case sortName::musicDisc : {
                        sort ( _musicDisc,&size);
                        break;
                    }
                    default : {

                        break;
                    }
                }



                break;
            }
            case DATA_SHEET : {;
                break;
            }
            default : {
                cout << "\nERROR, probably you write bad index, try again";
                pressEnter();
            }
        }


    }while(choiceIndex != 0);
    return EXIT_SUCCESS;
}




void start ()
{
    cout
    << "\n\tWitaj w Kreatorze Swiata Muzycznego\n"
    << "\n\t( welcome to the app that creates the music world ) "
    << "\n\n\tW naszym sumulatorze mozna:"
    << "\n\t( In our simulation can: )"
    << "\n\n\t-Tworzyc ( Create ) (please use first!!!)"
    << "\n\t-Inicjowac ( Initialize ) (please use second!!!)"
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
    << "\n\t1. Tworzyc ( create ) (please use first!!!)"
    << "\n\t2. Inicjowac ( Initialize ) (please use second!!!)"
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



