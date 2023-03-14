//
// Created by surow on 12/03/2023.
//

#include "headFile.h"
#define EXIT 0
#define CREATE 1
#define INITIALIZE 2
#define PRINT 3
#define ADD 4
#define DELETE 5
#define SORT 6
#define DATA_SHEET 7



int loop( creator * _creator,album ** _album, musicDisc ** _musicDisc)//2
{
    size_t choiceIndex;
    size_t* ptrChoiceIndex = &choiceIndex;
    menu_show_content();
    index(ptrChoiceIndex);
    switch ( choiceIndex )
    {
        case EXIT :
        {
            cout
            << " !!! Exit !!!"
            << "\n Thanks you for use application";
            return EXIT_SUCCESS;
        }
        case CREATE :
        {
            menus(_creator,_album,_musicDisc,
                    MenuText::create,ptrChoiceIndex);
            break;
        }
        case INITIALIZE :
        {
            menus(_creator,_album,_musicDisc,
                    MenuText::initialize,ptrChoiceIndex);
            break;
        }
        case PRINT :
        {
            menus(_creator,_album,_musicDisc,
                    MenuText::print,ptrChoiceIndex);
            break;
        }
        case ADD :
        {
            menus(_creator,_album,_musicDisc,
                    MenuText::add,ptrChoiceIndex);
            break;
        }
        case DELETE :
        {
            menus(_creator,_album,_musicDisc,
                    MenuText::del,ptrChoiceIndex);
            break;
        }
        case SORT :
        {
            menus(_creator,_album,_musicDisc,
                    MenuText::sort,ptrChoiceIndex);
            break;
        }
        case DATA_SHEET :
        {
            menus(_creator,_album,_musicDisc,
                    MenuText::data_sheet,ptrChoiceIndex);
            break;
        }
        default :
        {
            std::cout << "\nERROR, probably you write bad index, try again";
            pressEnter();
        }

    }
loop(_creator,_album,_musicDisc );
return 0;
}



void menu (creator * _creator,album ** _album ,musicDisc ** _musicDisc,
        const size_t* ptrNum,const string& typeMenu)
{

    switch(*ptrNum)
    {
        case 1 :
        {
            creator_sMenu(_creator , typeMenu);
            break;
        }
        case 2 :
        {
            album_sMenu( _album , typeMenu);
            break;
        }
        case 3 :
        {
            disc_sMenu(_musicDisc , typeMenu);

            break;
        }

    }
}

int creator_sMenu(creator * _creator, const string&  typeMenu)
{
    if ( typeMenu == MenuText::create )
    {
        size_t size;
        get_size(&size);
        create(_creator,size);
    }
    else if ( typeMenu == MenuText::initialize )
    {
        size_t size;
        get_size(&size);
        init(_creator,size);
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

int album_sMenu ( album ** _album , const string& typeMenu  )
{
    if ( typeMenu == MenuText::create )
    {
        size_t size;
        get_size(&size);
        create(_album,size);
    }
    else if ( typeMenu == MenuText::initialize )
    {


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

int disc_sMenu ( musicDisc ** _musicDisc ,const  string& typeMenu  )
{
    if ( typeMenu == MenuText::create )
    {
        size_t size;
        get_size(&size);
        create(_musicDisc,size);
    }
    else if ( typeMenu == MenuText::initialize )
    {


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




void menus (creator * _creator,album ** _album, musicDisc ** _musicDisc,
        const string & name , size_t * ptrNum)
{
    menu(name);
    index(ptrNum);
    menu(_creator, _album,_musicDisc,
            ptrNum,name);
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





//
//zrob przekazanie tego char name[] ="create'' i za pomoca strcmp
//wykonaj wybranie danej operacji !!!!!