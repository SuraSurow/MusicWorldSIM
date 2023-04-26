

#include "../head/headHeadFile.h"



int main()
{
    pressEnter();
    start();
    preestart();
    size_t size = 0;
    get_size(&size);
    Musician * _creator = nullptr;
    Album ** _album = nullptr;
    Music ** _musicDisc = nullptr;
    Producent ** _prod = nullptr;
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
                create(_prod ,&size);
                break;
            }
            case INITIALIZE : {
                init(_creator,&size);
                init(_album,&size);
                init(_musicDisc,&size);
                init (_prod ,&size);
                cout << "\n\n!!!Oto Ostatni w Clasie Music object , za pomoca prywatnego wskaznika!!!";
                Music* lastObj=Music::gets_lastObj();
                print(lastObj);
                cout << "\n!!!Oto Ostatni w Clasie Album object , za pomoca prywatnego wskaznika!!!";
                Album* _lastObj=Album::gets_lastObj();
                print(_lastObj);
                break;
            }
            case PRINT : {
                cout << "\n\n\tMUZYCY (MUSICIAN)\n\n";
                print(_creator,&size);//print zmieniony!!!!!
                cout << "\n\n\tALBUMY (ALBUMS)\n\n";
                print(_album,&size);
                cout << "\n\n\tPLYTY MUZYCZNE (SONG DISCS)\n\n";
                print(_musicDisc,&size);
                cout << "\n\n\tPRODUCENCI (MUSIC PRODUCENT)\n\n";
                print (_prod,&size);
                break;

            }
            case ADD : {
                size_t size_new=0;
                get_size(&size_new);
                size_t size_temp = size;
                add ( _creator , &size_temp, &size_new );
                add( _album ,&size_temp ,&size_new);
                add(_musicDisc,&size_temp,&size_new);
                add (_prod,&size_temp,&size_new);
                size = size_new;
                break;
            }// tutaj skonczylem ,
            case DELETE : {
                size_t size_new = 0;
                get_size(&size_new);
                del(_creator,&size,&size_new);
                del(_album,&size,&size_new);
                del(_musicDisc,&size,&size_new);
                del(_prod,&size,&size_new);
                size = size_new;
                break;
            }
            case SORT : {
                sort (_creator ,&size);
                sort(_album,&size);
                sort(_musicDisc,&size);
                sort(_prod,&size);
                break;
            }
            case EDIT: {
                edit(_creator,_album,_musicDisc,_prod,size);
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




