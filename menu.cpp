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
            std::cout
            << " !!! Exit !!!"
            << "\n Thanks you for use application";
            pressEnter();
            return EXIT_SUCCESS;
        }
        case CREATE :
        {
            char name[]="CREATE";
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
}

void menu(char name[])
{
    std::cout
    << "\nChoice what's object you want "
    << name
    << "\n\n1.Creator"
    << "\n2.Album"
    << "\n3.Disc";
}

void menu (int* ptrNum,char typeMenu[])
{

    switch(*ptrNum)
    {
        case 1 :
        {
            //creator

            creatorsMenu(typeMenu);
            break;
        }
        case 2 :
        {
            //album
            albumsMenu(typeMenu);
            break;
        }
        case 3 :
        {
            //disc
            discesMenu(typeMenu);

            break;
        }

    }
}

void creatorsMenu(char  typeMenu)
{


}

void albumsMenu ( char typeMenu [] )
{


}

void discesMenu ( char typeMenu [] )
{


}
//
//zrob przekazanie tego char name[] ="create'' i za pomoca strcmp
//wykonaj wybranie danej operacji !!!!!