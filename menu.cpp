//
// Created by surow on 12/03/2023.
//

#include "headFile.h"
#define EXIT 1
#define INITIALIZE 2
#define PRINT 3
#define ADD 4
#define DELETE 5
#define SORT 6
#define DATA_SHEET 7



int loop( creator * _creator,album ** _album, musicDisc ** _musicDisc,size_t * pSize)//2
{
    size_t choiceIndex;
    size_t* ptrChoiceIndex = &choiceIndex;
        menu_show_content();
        index(ptrChoiceIndex);
        switch (choiceIndex) {
            case EXIT : {
                cout
                        << " !!! Exit !!!"
                        << "\n Thanks you for use application";
                return EXIT_SUCCESS;
            }
            case INITIALIZE : {
                menus(_creator, _album, _musicDisc,
                      MenuText::initialize, ptrChoiceIndex, pSize);
                break;
            }
            case PRINT : {
                menus(_creator, _album, _musicDisc,
                      MenuText::print, ptrChoiceIndex, pSize);
                break;
            }
            case ADD : {
                menus(_creator, _album, _musicDisc,
                      MenuText::add, ptrChoiceIndex, pSize);
                break;
            }
            case DELETE : {
                menus(_creator, _album, _musicDisc,
                      MenuText::del, ptrChoiceIndex, pSize);
                break;
            }
            case SORT : {
                menus(_creator, _album, _musicDisc,
                      MenuText::sort, ptrChoiceIndex, pSize);
                break;
            }
            case DATA_SHEET : {
                menus(_creator, _album, _musicDisc,
                      MenuText::data_sheet, ptrChoiceIndex, pSize);
                break;
            }
            default : {
                std::cout << "\nERROR, probably you write bad index, try again";
                pressEnter();
            }

        }

loop(_creator,_album,_musicDisc ,pSize);
return 0;
}


void menus (creator * _creator,album ** _album, musicDisc ** _musicDisc,
            const string & name , size_t * ptrNum , size_t * pSize)
{
    menu(name);
    index(ptrNum);
    menu(_creator, _album,_musicDisc,
         ptrNum,name , pSize);
}

void menu(const string& name)
{
    cout
            << "\nChoice what's object you want "
            << name
            << "\n\n1.Creator"
            << "\n2.Album"
            << "\n3.Disc";
}//1





void menu (creator * _creator , album ** _album , musicDisc ** _musicDisc,
        const size_t* ptrNum , const string& typeMenu , size_t * pSize)
{


    switch(*ptrNum)
    {
        case 1 :
        {
            creator_sMenu(_creator , typeMenu,pSize);
            break;
        }
        case 2 :
        {
            album_sMenu( _album , typeMenu,pSize);
            break;
        }
        case 3 :
        {
            disc_sMenu(_musicDisc , typeMenu,pSize);

            break;
        }

    }
}

int creator_sMenu(creator * _creator, const string&  typeMenu , size_t * pSize)
{
    if ( typeMenu == MenuText::initialize )
    {
        init(_creator,pSize);
    }
    else if (typeMenu == MenuText::print )
    {

    }
    else if ( typeMenu == MenuText::add )
    {

    }
    else if ( typeMenu == MenuText::del)
    {

    }
    else if ( typeMenu == MenuText:: sort)
    {

    }
    else if ( typeMenu == MenuText::data_sheet )
    {

    }
    else {return EXIT_FAILURE;}

    return EXIT_SUCCESS;
}

int album_sMenu ( album ** _album , const string& typeMenu , size_t * pSize )
{

    if ( typeMenu == MenuText::initialize )
    {
        init( _album , pSize );
    }
    else if (typeMenu == MenuText::print )
    {

    }
    else if ( typeMenu == MenuText::add )
    {

    }
    else if ( typeMenu == MenuText::del)
    {

    }
    else if ( typeMenu == MenuText:: sort)
    {

    }

    else if ( typeMenu == MenuText::data_sheet )
    {

    }
    else {return EXIT_FAILURE;}
    return EXIT_SUCCESS;
}

int disc_sMenu ( musicDisc ** _musicDisc ,const  string& typeMenu ,size_t * pSize )
{
     if ( typeMenu == MenuText::initialize )
    {
         init( _musicDisc , pSize );
    }
    else if (typeMenu == MenuText::print )
    {

    }
    else if ( typeMenu == MenuText::add )
    {

    }
    else if ( typeMenu == MenuText::del)
    {

    }
    else if ( typeMenu == MenuText:: sort)
    {

    }
    else if ( typeMenu == MenuText::data_sheet )
    {

    }
    else {return EXIT_FAILURE;}
    return EXIT_SUCCESS;
}













//
//zrob przekazanie tego char name[] ="create'' i za pomoca strcmp
//wykonaj wybranie danej operacji !!!!!