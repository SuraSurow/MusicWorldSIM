

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

                sort (_creator ,&size);
                //nie mialem czasu na wiecej :D

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




