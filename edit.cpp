//
// Created by surow on 24/03/2023.
//
#include "headFile.h"

void edit(creator* _creator , album ** _album , musicDisc ** _musicDisc , size_t &size)
{

    printEditMenu();
    int choiceEdit = 0 ;
    index(&choiceEdit);
    switch(choiceEdit){
        case 1:{
            print(_creator,&size);
            size_t choiceObj;
            printChoiceObj();
            index(&choiceObj,size);
            edit(_creator,size,choiceObj);
            break;
        }
        case 2:{
            print(_album,&size);
            printChoiceObj();
            size_t choiceObj;
            index(&choiceObj,size);
            edit(_creator,size,choiceObj);

            break;
        }
        case 3:{
            print(_musicDisc,&size);
            printChoiceObj();
            size_t choiceObj;
            index(&choiceObj,size);
            edit(_creator,size,choiceObj);

            break;
        }
        case 4:{
            print(_creator,&size);
            print(_album,&size);
            print(_musicDisc,&size);
            printChoiceObj();
            size_t choiceObj;
            index(&choiceObj,size);
            edit(_creator,size,choiceObj);
            edit(_album,size,choiceObj);
            edit(_musicDisc,size,choiceObj);
            break;
        }
        default:{
            cout << "\nERROR, probably you write bad index, try again";
            pressEnter();
        }
    }

}
void edit (creator * _creator,size_t &size,size_t &choiceObj)
{
    printClass(_creator);
    int choiceProperties;
    index(&choiceProperties);
    edit (_creator,size,choiceObj,choiceProperties);
}

void edit (album ** _album,size_t &size,size_t &choiceObj)
{
    printClass(_album);
    int choiceProperties;
    index(&choiceProperties);
    edit (_album,size,choiceObj,choiceProperties);
}

void edit (musicDisc ** _musicDisc,size_t &size,size_t &choiceObj)
{
    printClass(_musicDisc);
    int choiceProperties;
    index(&choiceProperties);
    edit (_musicDisc,size,choiceObj,choiceProperties);
}

void edit (creator * _creator,size_t &size,size_t &choiceObj,int &choiceProperties)
{
    cout << "edittttttttttttttttttttttttttttttttttttt";
    switch(choiceProperties)
    {
        case 1:
        {
            cout << "\nEnter new Name:";
            string str;
            cin.ignore();
            getline(cin,str);
            _creator[choiceObj].set_nameCre(str);
            break;
        }
        case 2:
        {
            cout << "\nEnter new Surname:";
            cin.ignore();
            string str;
            getline(cin,str);
            _creator[choiceObj].set_surnameCre(str);
            break;
        }
        case 3:
        {
            cout << "\nEnter new Age:";
            size_t num;
            cin.ignore();
            cin >> num;
            _creator[choiceObj].set_ageCre(num);
            break;
        }
        case 4:
        {
            cout << "\nEnter new Year:";
            size_t num;
            cin.ignore();
            cin >> num;
            _creator[choiceObj].set_yearCre(num);
            break;
        }
        case 5:
        {
            cout << "\nEnter new Month:";
            size_t num;
            cin.ignore();
            cin >> num;
            _creator[choiceObj].set_monthCre(num);
            break;
        }
        case 6:
        {
            cout << "\nEnter new Day:";
            size_t num;
            cin.ignore();
            cin >> num;
            _creator[choiceObj].set_dayCre(num);
            break;
        }
        default : {
            cout << "\nERROR, probably you write bad index, try again";
            pressEnter();
        }

    }


}
void edit (album ** _album,size_t &size,size_t &choiceObj,int &choiceProperties)
{
    switch(choiceProperties)
    {
        case 1:
        {
            cout << "\nEnter new Name:";
            cin.ignore();
            string str;
            getline(cin,str);
            _album[choiceObj]->set_nameCre(str);
            break;
        }
        case 2:
        {
            cout << "\nEnter new Surname:";
            cin.ignore();
            string str;
            getline(cin,str);
            _album[choiceObj]->set_surnameCre(str);
            break;
        }
        case 3:
        {
            cout << "\nEnter new Name Album:";
            cin.ignore();
            string str;
            getline(cin,str);
            _album[choiceObj]->set_nameAl(str);
            break;
        }
        case 4:
        {
            cout << "\nEnter new Type Album:";
            cin.ignore();
            string str;
            getline(cin,str);
            _album[choiceObj]->set_typeAl(str);
            break;
        }
        case 5:
        {
            cout << "\nEnter new Year:";
            cin.ignore();
            size_t num;
            cin >> num;
            _album[choiceObj]->set_yearCre(num);
            break;
        }
        case 6:
        {
            cout << "\nEnter new Count:";
            cin.ignore();
            size_t num;
            cin >> num;
            _album[choiceObj]->set_countSong(num);
            break;
        }
        default : {
            cout << "\nERROR, probably you write bad index, try again";
            pressEnter();
        }

    }

}
void edit (musicDisc ** _musicDisc,size_t &size,size_t &choiceObj,int &choiceProperties)
{
    switch(choiceProperties)
    {
        case 1:
        {
            cout << "\nEnter new Name:";
            cin.ignore();
            string str;
            getline(cin,str);
            _musicDisc[choiceObj]->set_nameCre(str);
            break;
        }
        case 2:
        {
            cout << "\nEnter new Surname:";
            cin.ignore();
            string str;
            getline(cin,str);
            _musicDisc[choiceObj]->set_surnameCre(str);
            break;
        }
        case 3:
        {
            cout << "\nEnter new Name Song:";
            cin.ignore();
            string str;
            getline(cin,str);
            _musicDisc[choiceObj]->set_nameMusic(str);
            break;
        }
        case 4:
        {
            cout << "\nEnter new Type Song:";
            cin.ignore();
            string str;
            getline(cin,str);
            _musicDisc[choiceObj]->set_typeMusic(str);
            break;
        }
        case 5:
        {
            cout << "\nEnter new Second of Song:";
            cin.ignore();
            size_t num;
            cin >> num;
            _musicDisc[choiceObj]->set_secondMusic(num);
            break;
        }
        case 6:
        {
            cout << "\nEnter new Year of Create Song:";
            cin.ignore();
            size_t num;
            cin >> num;
            _musicDisc[choiceObj]->set_yearMusic(num);
            break;
        }
        default : {
            cout << "\nERROR, probably you write bad index, try again";
            pressEnter();
        }

    }

}





