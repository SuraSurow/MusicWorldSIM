//
// Created by surow on 24/03/2023.
//
#include "headFile.h"

void edit(creator* _creator , album ** _album , musicDisc ** _musicDisc ,const size_t &size)
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
            edit(_creator,choiceObj);
            break;
        }
        case 2:{
            print(_album,&size);
            printChoiceObj();
            size_t choiceObj;
            index(&choiceObj,size);
            edit(_album,choiceObj);

            break;
        }
        case 3:{
            print(_musicDisc,&size);
            printChoiceObj();
            size_t choiceObj;
            index(&choiceObj,size);
            edit(_musicDisc,choiceObj);

            break;
        }
        case 4:{
            print(_creator,&size);
            print(_album,&size);
            print(_musicDisc,&size);
            printChoiceObj();
            size_t choiceObj;
            index(&choiceObj,size);
            edit(_creator,choiceObj);
            edit(_album,choiceObj);
            edit(_musicDisc,choiceObj);
            break;
        }
        default:{
            cout << "\nERROR, probably you write bad index, try again";
            pressEnter();
        }
    }

}
void edit (creator * _creator,const size_t &choiceObj)
{
    printHowEdit(_creator);
    cout << "\n\nenter:";
    editPressing (_creator,choiceObj);
}

void edit (album ** _album,const size_t &choiceObj)
{
    printHowEdit(_album);
    cout << "\n\nenter:";
    editPressing(_album,choiceObj);
}

void edit (musicDisc ** _musicDisc,const size_t &choiceObj)
{
    printHowEdit(_musicDisc);
    cout << "\n\nenter:";
    editPressing (_musicDisc,choiceObj);
}



void editPressing (creator * _creator,const size_t &choiceObj)
{
    string str;
    cin.ignore();
    getline(cin, str);
    static int countDetail = 1;
    int ActuaLenght = 0;
    int  i = 0;
    for (;i < str.length()+1;i++){
        bool text = false , num = false ;
        if( std::isalnum(str[i]) != 0) { ActuaLenght++;}
        else
        {
            if( std::isdigit(str[i-1]) != 0){num= true;}
            if( std::isalpha(str[i-1]) != 0){text = true;}
            if( num ) {
                string substrString;
                substrString=str.substr(i-ActuaLenght,ActuaLenght);
                size_t bufNum;
                std::stringstream stream(substrString);
                stream >> bufNum;
                switch(countDetail) {
                    case 3: {_creator[choiceObj].set_ageCre(bufNum);break;}
                    case 4: {_creator[choiceObj].set_yearCre(bufNum);break;}
                    case 5: {_creator[choiceObj].set_monthCre(bufNum);break;}
                    case 6: {_creator[choiceObj].set_dayCre(bufNum);break;}
                    default : {cout <<std::endl<<"ERROR";break;}
                }
            }
            if( text ) {
                string substrString;
                substrString=str.substr(i-ActuaLenght,ActuaLenght);
                switch(countDetail){
                    case 1:{_creator[choiceObj].set_nameCre(substrString);break;}
                    case 2:{_creator[choiceObj].set_surnameCre(substrString);break;}
                    default : {cout <<std::endl<<"ERROR";break;}
                }
            }
            countDetail++;
            ActuaLenght = 0;
        }
    }


// napisz jakos pobranie z inputu liczb z tabicy do jednego variable!!!


}
void editPressing (album ** _album,const size_t &choiceObj)
{
    cout << "weszlo";
    string str;
    cin.ignore();
    getline(cin, str);
    static int countDetail = 1;
    int ActuaLenght = 0, i = 0;
    for (;i < str.length()+1;i++){
        bool text = false , num = false ;
        if( std::isalnum(str[i]) != 0) { ActuaLenght++;}
        else
        {
            if( std::isdigit(str[i-1]) != 0){num= true;}
            if( std::isalpha(str[i-1]) != 0){text = true;}
            if( num ) {
                string substrString;
                substrString=str.substr(i-ActuaLenght,ActuaLenght);
                size_t bufNum;
                std::stringstream stream(substrString);
                stream >> bufNum;
                switch(countDetail) {
                    case 5: {_album[choiceObj]->set_yearCre(bufNum);break;}
                    case 6: {_album[choiceObj]->set_countSong(bufNum);break;}
                    default : {cout <<std::endl<<"ERROR";break;}
                }
            }
            if( text ) {
                string substrString;
                substrString=str.substr(i-ActuaLenght,ActuaLenght);
                switch(countDetail){
                    case 1: {_album[choiceObj]->set_nameCre(substrString);break;}
                    case 2: {_album[choiceObj]->set_surnameCre(substrString);break;}
                    case 3:{_album[choiceObj]->set_nameAl(substrString);break;}
                    case 4:{_album[choiceObj]->set_typeAl(substrString);break;}
                    default : {cout <<std::endl<<"ERROR";break;}
                }
            }
            countDetail++;
            ActuaLenght = 0;
        }
    }
}
void editPressing (musicDisc ** _musicDisc,const size_t &choiceObj)
{
    string str;
    cin.ignore();
    getline(cin, str);
    static int countDetail = 1;
    int ActuaLenght = 0, i = 0;
    for (;i < str.length()+1;i++){
        bool text = false , num = false ;
        if( std::isalnum(str[i]) != 0) { ActuaLenght++;}
        else
        {
            if( std::isdigit(str[i-1]) != 0){num= true;}
            if( std::isalpha(str[i-1]) != 0){text = true;}
            if( num ) {
                string substrString;
                substrString=str.substr(i-ActuaLenght,ActuaLenght);
                size_t bufNum;
                std::stringstream stream(substrString);
                stream >> bufNum;
                switch(countDetail) {
                    case 5: {_musicDisc[choiceObj]->set_secondMusic(bufNum);break;}
                    case 6: {_musicDisc[choiceObj]->set_yearMusic(bufNum);break;}
                    default : {cout <<std::endl<<"ERROR";break;}
                }
            }
            if( text ) {
                string substrString;
                substrString=str.substr(i-ActuaLenght,ActuaLenght);
                switch(countDetail){
                    case 1: {_musicDisc[choiceObj]->set_nameCre(substrString);break;}
                    case 2: {_musicDisc[choiceObj]->set_surnameCre(substrString);break;}
                    case 3:{_musicDisc[choiceObj]->set_nameMusic(substrString);break;}
                    case 4:{_musicDisc[choiceObj]->set_typeMusic(substrString);break;}
                    default : {cout <<std::endl<<"ERROR";break;}
                }
            }
            countDetail++;
            ActuaLenght = 0;
        }
    }
}

