

#include "../head/headHeadFile.h"



int main()
{
    pressEnter();
    start();
    preestart();
    size_t size = 0;
    get_size(&size);
    Person  ** pPerson = nullptr;
    Musician * _musician = nullptr;
    Album ** _album = nullptr;
    Music ** _music = nullptr;
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
                printProcess("END");
                return EXIT_SUCCESS;
            }
            case CREATE : {
                create (_musician , &size);
                create ( _album  , &size);
                create (_music  , &size);
                create(_prod ,&size);//<----------
                printProcess("CREATE");
                break;
            }
            case INITIALIZE : {
                init(_musician, &size);
                init(_album,&size);
                init(_music, &size);
                init (_prod ,&size);
                cout << "\n\n!!!Oto Ostatni w Clasie Music object , za pomoca prywatnego wskaznika!!!\n";
                Music lastObj = *Music::gets_lastObj();
                print(lastObj);
                cout << "\n!!!Oto Ostatni w Clasie Album object , za pomoca prywatnego wskaznika!!!\n";
                Album  *_lastObj = Album::gets_lastObj();
                print( _lastObj);
                printProcess("INIT");
                break;
            }
            case PRINT : {
                cout << "\n\n\tMUZYCY (MUSICIAN)\n\n";
                print(_musician, &size);//doSomething zmieniony!!!!!
                cout << "\n\n\tALBUMY (ALBUMS)\n\n";
                print(_album,&size);
                cout << "\n\n\tPLYTY MUZYCZNE (SONG DISCS)\n\n";
                print(_music, &size);
                cout << "\n\n\tPRODUCENCI (MUSIC PRODUCENT)\n\n";
                print (_prod,&size);
                printProcess("PRINT");
                break;

            }
            case ADD : {
                size_t size_new=0;
                get_size(&size_new);
                size_t size_temp = size;
                add (_musician , size_temp, size_new );
                add( _album ,size_temp ,size_new);
                add(_music, size_temp, size_new);
                add (_prod,size_temp,size_new);
                size = size_new;
                printProcess("ADD");
                break;
            }
            case DELETE : {
                size_t size_new = 0;
                get_size(&size_new);
                del(_musician, size, size_new);
                del(_album,size,size_new);
                del(_music, size, size_new);
                del(_prod,size,size_new);
                size = size_new;
                printProcess("DELETE");
                break;
            }
            case SORT : {
                sort (_musician , &size);
                sort(_album,&size);
                sort(_music, &size);
                sort(_prod,&size);
                printProcess("SORT");
                break;
            }
            case EDIT: {
                edit(_musician, _album, _music, _prod, size);
                printProcess("EDIT");
                break;
            }
            case CREATE_V2 : {
                create (pPerson,&size);
                printProcess("CREATE 'POLIMORFIZM' ");
                break;
            }
            case SAVE : {
                ofstream file_prod(path(obj_Producent_path_file));
                ofstream file_musician(path(obj_Musician_path_file));
                ofstream file_album(path(obj_Album_path_file));
                ofstream file_music(path(obj_Music_path_file));
                save(file_prod,_prod,size);
                save(file_musician,_musician,size);
                save(file_album,_album,size);
                save(file_music, _music, size);

                break;
            }
            case LOAD :
            {
                size_t size_new = 0;
               size_new = countLineFILE(path(obj_Producent_path_file));
               cout << size_new;
               size_t size_temp = size;
               if(size_new > size )
               {
                   add(_prod, size_temp, size_new);
                   add(_musician, size_temp, size_new);
                   add(_album, size_temp, size_new);
                   add(_music, size_temp, size_new);
               }

               else if(size_new < size )
               {
                   del(_prod,size,size_new);
                   del(_musician, size, size_new);
                   del(_album,size,size_new);
                   del(_music, size, size_new);
               }
               size = size_new;
               load(_prod,size);
               load(_musician,size);
               load(_album,size);
               load(_music,size);
               break;
            }
            default : {
                fflush(stdin);
                wrongInput();
                pressEnter();
            }
        }
        fflush(stdin);
    }while(choiceIndex != 0);

    return EXIT_SUCCESS;
}




