//
// Created by surow on 24/03/2023.
//
#include "../head/headHeadFile.h"

void edit( Musician* _creator , Album ** _album , Music ** _musicDisc ,Producent ** _prod, const size_t &size)
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
        case 4 : {
            print(_prod,&size);
            printChoiceObj();
            size_t choiceObj;
            index(&choiceObj,size);
            edit(_prod,choiceObj);
        }
        case 5:{
            print(_creator,&size);
            print(_album,&size);
            print(_musicDisc,&size);
            print (_prod ,&size);
            printChoiceObj();
            size_t choiceObj;
            index(&choiceObj,size);
            edit(_creator,choiceObj);
            edit(_album,choiceObj);
            edit(_musicDisc,choiceObj);
            edit(_prod,choiceObj);
            break;
        }
        default:{
            cout << "\nERROR, probably you write bad index, try again";
            pressEnter();
        }
    }

}
//--------------------------------------------------------------------

void edit( std::vector<Musician>& musician, Album** albums, Music** musicDiscs, Producent** producers, const size_t& size)
{
    printEditMenu();
    int choiceEdit = 0;
    index(&choiceEdit);
    switch (choiceEdit) {
        case 1: {
            print(musician);
            size_t choiceObj;
            printChoiceObj();
            index(&choiceObj, size);
            edit(musician, choiceObj);
            break;
        }
        case 2: {
            print(albums, &size);
            printChoiceObj();
            size_t choiceObj;
            index(&choiceObj, size);
            edit(albums, choiceObj);
            break;
        }
        case 3: {
            print(musicDiscs, &size);
            printChoiceObj();
            size_t choiceObj;
            index(&choiceObj, size);
            edit(musicDiscs, choiceObj);
            break;
        }
        case 4: {
            print(producers, &size);
            printChoiceObj();
            size_t choiceObj;
            index(&choiceObj, size);
            edit(producers, choiceObj);
            break;
        }
        case 5: {
            print(musician);
            print(albums, &size);
            print(musicDiscs, &size);
            print(producers, &size);
            printChoiceObj();
            size_t choiceObj;
            index(&choiceObj, size);
            edit(musician, choiceObj);
            edit(albums, choiceObj);
            edit(musicDiscs, choiceObj);
            edit(producers, choiceObj);
            break;
        }
        default: {
            cout << "\nERROR, probably you wrote a bad index, try again";
            pressEnter();
        }
    }
}

//-------------------------------------------------------------------



void edit ( Musician * musician, const size_t &choiceObj)
{
    printHowEdit(musician);
    cout << "\n\nenter:";
    editPressing (musician, choiceObj);
}

void edit(vector<Musician>& musicians, const size_t& choiceObj)
{
    printHowEdit(musicians);
    cout << "\n\nEnter: ";
    editPressing(musicians, choiceObj);
}

void edit ( Album ** _album, const size_t &choiceObj)
{
    printHowEdit(_album);
    cout << "\n\nenter:";
    editPressing(_album,choiceObj);
}

void edit ( Music ** _musicDisc, const size_t &choiceObj)
{
    printHowEdit(_musicDisc);
    cout << "\n\nenter:";
    editPressing (_musicDisc,choiceObj);
}

void edit ( Producent ** _prod , const size_t &choiceObj)
{
    printHowEdit(_prod);
    cout << "\n\nenter:";
    editPressing(_prod ,choiceObj);
}



void editPressing ( Musician * _musician, const size_t &choiceObj) {
    string str;
    cin.ignore();
    getline(cin, str);
    static int countDetail = 1;
    int ActuaLenght = 0;
    int i = 0;
    for ( ; i < str.length() + 1 ; i++ ) {
        bool text = false, num = false;
        if ( std::isalnum(str[ i ]) != 0 ) { ActuaLenght++; }
        else {
            if ( std::isdigit(str[ i - 1 ]) != 0 ) { num = true; }
            if ( std::isalpha(str[ i - 1 ]) != 0 ) { text = true; }
            if ( num ) {
                string substrString;
                substrString = str.substr(i - ActuaLenght, ActuaLenght);
                size_t bufNum;
                std::stringstream stream(substrString);
                stream >> bufNum;
                switch ( countDetail ) {
                    case 3: {
                        _musician[ choiceObj ].set_age(bufNum);
                        break;
                    }
                    case 4: {
                        _musician[ choiceObj ].set_year(bufNum);
                        break;
                    }
                    case 5: {
                        _musician[ choiceObj ].set_month(bufNum);
                        break;
                    }
                    case 6: {
                        _musician[ choiceObj ].set_day(bufNum);
                        break;
                    }
                    case 9: {
                        _musician[ choiceObj ].set_workExp(bufNum);
                        break;
                    }
                    default : {
                        cout << std::endl << "ERROR";
                        break;
                    }
                }
            }
            if ( text ) {
                string substrString;
                substrString = str.substr(i - ActuaLenght, ActuaLenght);
                switch ( countDetail ) {
                    case 1: {
                        _musician[ choiceObj ].set_name(substrString);
                        break;
                    }
                    case 2: {
                        _musician[ choiceObj ].set_surname(substrString);
                        break;
                    }
                    case 7: {
                        _musician[ choiceObj ].set_distCompany(substrString);
                        break;
                    }
                    case 8: {
                        _musician[ choiceObj ].set_nickName(substrString);
                        break;
                    }
                    default : {
                        cout << std::endl << "ERROR";
                        break;
                    }
                }
            }
            countDetail++;
            ActuaLenght = 0;
        }
    }
}


//------------------------------------------------------------------------------------
void editPressing(std::vector<Musician>& musicians, const size_t& choiceObj)
{
    std::string str;
    std::cin.ignore();
    std::getline(std::cin, str);
    static int countDetail = 1;
    int actualLength = 0;
    int i = 0;
    for (; i < str.length() + 1; i++) {
        bool text = false, num = false;
        if (std::isalnum(str[i]) != 0) {
            actualLength++;
        }
        else {
            if (std::isdigit(str[i - 1]) != 0) {
                num = true;
            }
            if (std::isalpha(str[i - 1]) != 0) {
                text = true;
            }
            if (num) {
                std::string substrString;
                substrString = str.substr(i - actualLength, actualLength);
                size_t bufNum;
                std::stringstream stream(substrString);
                stream >> bufNum;
                switch (countDetail) {
                    case 3: {
                        musicians[choiceObj].set_age(bufNum);
                        break;
                    }
                    case 4: {
                        musicians[choiceObj].set_year(bufNum);
                        break;
                    }
                    case 5: {
                        musicians[choiceObj].set_month(bufNum);
                        break;
                    }
                    case 6: {
                        musicians[choiceObj].set_day(bufNum);
                        break;
                    }
                    case 9: {
                        musicians[choiceObj].set_workExp(bufNum);
                        break;
                    }
                    default: {
                        std::cout << std::endl << "ERROR";
                        break;
                    }
                }
            }
            if (text) {
                std::string substrString;
                substrString = str.substr(i - actualLength, actualLength);
                switch (countDetail) {
                    case 1: {
                        musicians[choiceObj].set_name(substrString);
                        break;
                    }
                    case 2: {
                        musicians[choiceObj].set_surname(substrString);
                        break;
                    }
                    case 7: {
                        musicians[choiceObj].set_distCompany(substrString);
                        break;
                    }
                    case 8: {
                        musicians[choiceObj].set_nickName(substrString);
                        break;
                    }
                    default: {
                        std::cout << std::endl << "ERROR";
                        break;
                    }
                }
            }
            countDetail++;
            actualLength = 0;
        }
    }
}
//------------------------------------------------------------------------------------

void editPressing ( Album ** _album, const size_t &choiceObj)
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
                    case 5: {_album[choiceObj]->set_yearCre(bufNum);break;}

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
void editPressing ( Music ** _musicDisc, const size_t &choiceObj)
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

void editPressing ( Producent ** _prod, const size_t &choiceObj)
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
                    case 3:{_prod[choiceObj]->set_age(bufNum);break;}
                    case 4: {_prod[choiceObj]->set_year(bufNum);break;}
                    case 5: {_prod[choiceObj]->set_month(bufNum);break;}
                    case 6: {_prod[choiceObj]->set_day(bufNum);break;}
                    case 8: {_prod[choiceObj]->set_hasGrammyAward(bufNum);break;}
                    case 9: {_prod[choiceObj]->set_FavoriteBPM(bufNum);break;}
                    case 10: {_prod[choiceObj]->set_numOfProductions(bufNum);break;}
                    default : {cout <<std::endl<<"ERROR";break;}
                }
            }
            if( text ) {
                string substrString;
                substrString=str.substr(i-ActuaLenght,ActuaLenght);
                switch(countDetail){
                    case 1: {_prod[choiceObj]->set_name(substrString);break;}
                    case 2: {_prod[choiceObj]->set_surname(substrString);break;}
                    case 7: {_prod[choiceObj]->set_expertiseArea(substrString);break;}
                    default : {cout <<std::endl<<"ERROR";break;}
                }
            }
            countDetail++;
            ActuaLenght = 0;
        }
    }
}

