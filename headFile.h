//
// Created by surow on 11/03/2023.
//

#ifndef LAB_HEADFILE_H
#define LAB_HEADFILE_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <locale>
#include <ctime>

//zamiast using namespace std uzylem tylko tych przestrzeni nazw
//z ktorych mam zamiar korzystac , uzywanie using namespace std powoduje gdzi
//ze gdy chcialbym szerzej korzysac z przesteni nazw to moglbym
//ktoraz zmienna z przestrzeni nazw stardard == std zedytowac i spowodowac
//mozliwe kompkikacje, dla bezpieczenstwa wymieniam tutaj tylko te
//zmienne oraz funckje z namespace std ktorych mam zamiar uzyc i nic wiecej

using
    std::string,
    std::cout,
    std:: cin;

namespace MenuText{
    const string
        create = "CREATE",
        initialize = "INITIALIZE",
        print = "PRINT",
        add = "ADD",
        del = "DELETE",
        sort = "SORT",
        data_sheet = "DATA_SHEET";
}


struct musicDisc {
    std::string nameMusic;
    std::string typeMusic;
    size_t  minutesMusic;
    size_t yearMusic;
};
struct album {
    std::string nameAl;
    std::string typeAl;
    size_t sizeAl;
};
struct creator {
    string nameCre;
    string surnameCre;
    size_t ageCre;
    size_t yearCre;
    size_t monthCre;
    size_t dayCre;
};
struct allStruct {
    creator * _creator;
    album ** _album;
    musicDisc ** _musicDisc;
};



//globalne zmienne







//tworzenie wszelkich obiektow oraz wskaznikow do obiektow

void create(creator*& _creator, size_t size);
void create(album**& _album,size_t size);
void create(musicDisc**& _musicDisc,size_t size);
//--------------------------------------------------
void del ( creator *& _creatorS , size_t size );
void del( album **& _albumS, size_t& size);
void del( musicDisc **& _musicDiscES, size_t& size);
//---------------------------------------------------
void init( creator * _creatorS ,  size_t size);
//---------------------------------------------------

void get_size( size_t *size);//------
void menu_show_content();//-------
void start();//-------
void pressEnter();//---------
int index(size_t* ptrNum);//---------
string randName();


int loop( creator * _creator,album ** _album, musicDisc ** _musicDisc);//--------

void menu(const string& name);//--------

void menu(creator * _creator,album ** _album, musicDisc ** _musicDisc,
        const size_t* ptrNum, const string& typeMenu);//do uzycia

void menus(creator * _creator,album ** _album ,musicDisc ** _musicDisc,
           const string & name , size_t * ptrNum);//#########


int creator_sMenu ( creator * _creator , const string& typeMenu );
int album_sMenu ( album ** _album , const string& typeMenu );
int disc_sMenu ( musicDisc ** _musicDisc , const string& typeMenu  );



/*
 //void create(creator*& _creator);
//void create(album*& _album);
//void create(musicDisc*& _musicDisc);
 //void create(album*& _album, size_t size);
//void create(musicDisc*& _musicDisc, size_t size);
//void create(creator**& _creator,size_t size);
 */


#endif //LAB_HEADFILE_H
