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



int menu()
{
    int choiceIndex=0;
    index(&choiceIndex);
    switch ( choiceIndex )
    {
        case EXIT :
        {
            cout
            << " !!! Exit !!!"
            << "\n Thanks you for use application";
            pressEnter();
            return EXIT_SUCCESS;
        }
        case CREATE :
        {
            const string name="CREATE";
            menu(name);
            index(&choiceIndex);
            menu(&choiceIndex,name);



            break;
        }
        case INITIALIZE :
        {
            break;
        }
        case PRINT :
        {
            break;
        }
        case ADD :
        {

            break;
        }
        case DELETE :
        {
            break;
        }
        case SORT :
        {
            break;
        }
        case DATA_SHEET :
        {
            break;
        }
        default :
        {
            std::cout << "ERROR, probably you write bad index, try again";
            pressEnter();
            menu();
        }

    }
menu();
return 0;
}

void menu(const string& name)
{
    cout
    << "\nChoice what's object you want "
    << name
    << "\n\n1.Creator"
    << "\n2.Album"
    << "\n3.Disc";
}

void menu (const int* ptrNum,const string& typeMenu)
{

    switch(*ptrNum)
    {
        case 1 :
        {
            //creator

            creator_sMenu(typeMenu);
            break;
        }
        case 2 :
        {
            //album
            album_sMenu(typeMenu);
            break;
        }
        case 3 :
        {
            //disc
            disc_sMenu(typeMenu);

            break;
        }

    }
}

int creator_sMenu( const string&  typeMenu)
{



    if ( typeMenu == MenuText::create )
    {

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
    else if ( typeMenu == MenuText::data_sheet )
    {

    }
    else {return EXIT_FAILURE;}

    return EXIT_SUCCESS;
}

void album_sMenu ( const string& typeMenu  )
{


}

void disc_sMenu (const  string& typeMenu  )
{


}
//
//zrob przekazanie tego char name[] ="create'' i za pomoca strcmp
//wykonaj wybranie danej operacji !!!!!