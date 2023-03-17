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

#define ZERO 0
#define MIN 1
#define MAX 100


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
    string nameCre; //
    string surnameCre; //
    string nameMusic;
    string typeMusic;
    size_t  secondMusic;
    size_t yearMusic;
};
struct album {
    string nameCre;
    string surnameCre;
    string nameAl;
    string typeAl;
    size_t yearCre;
    size_t countSong;
};
struct creator {
    string nameCre;
    string surnameCre;
    size_t ageCre;
    size_t yearCre;
    size_t monthCre;
    size_t dayCre;
};




//globalne zmienne







//tworzenie wszelkich obiektow oraz wskaznikow do obiektow

void create(creator *& _creator, const size_t *size);
void create(album **& _album,const size_t *size);
void create(musicDisc **& _musicDisc,const size_t *size);
//--------------------------------------------------
void del ( creator *& _creatorS , size_t size );
void del( album **& _albumS, size_t& size);
void del( musicDisc **& _musicDiscES, size_t& size);
//---------------------------------------------------
void init( creator * _creatorS , size_t * size );
void init( album * const * const _albumS, size_t * size );
void init ( musicDisc * const * const _musicDiscES, size_t * size );
void initAlbum (album * const _albumS);
void initMusicDisc ( musicDisc * const _musicDiscES);
//---------------------------------------------------
void print (creator *_creator , size_t *size);
void print (album **_album , size_t *size);
void print (musicDisc **_musicDisc , size_t *size);
//------------------------------------------------
void add (album **& _album , size_t & size );
void add (musicDisc **& _musicDisc , size_t & size );

//------------------------------------------------

void get_size( size_t *size);//------

void menu_show_content();//-------

void start();//-------


void pressEnter();//---------

int index(size_t* ptrNum);//---------
string randName();
string randSurname();
string randAlbumName();
string randTypeMusic();
string randNameMusic();
void prestart();

size_t randSize_t (int min, int max);


int loop( creator * _creator,album ** _album, musicDisc ** _musicDisc,size_t * pSize);

void menu(const string& name);//--------

void menu(creator * _creator,album ** _album, musicDisc ** _musicDisc,
        const size_t* ptrNum, const string& typeMenu , size_t * pSize);//do uzycia

void menus(creator * _creator,album ** _album ,musicDisc ** _musicDisc,
           const string & name , size_t * ptrNum , size_t * pSize);//#########


int creator_sMenu ( creator * _creator , const string& typeMenu ,size_t * pSize);
int album_sMenu ( album ** _album , const string& typeMenu,size_t * pSize );
int disc_sMenu ( musicDisc ** _musicDisc , const string& typeMenu ,size_t * pSize );



/*
 //void create(creator*& _creator);
//void create(album*& _album);
//void create(musicDisc*& _musicDisc);
 //void create(album*& _album, size_t size);
//void create(musicDisc*& _musicDisc, size_t size);
//void create(creator**& _creator,size_t size);
 */


#endif //LAB_HEADFILE_H
