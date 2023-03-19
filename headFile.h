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
#define EXIT 0
#define CREATE 1
#define INITIALIZE 2
#define PRINT 3
#define ADD 4
#define DELETE 5
#define SORT 6
#define DATA_SHEET 7


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
void init( album ** _albumS, size_t * size );
void init ( musicDisc ** _musicDiscES, size_t * size );
void initAlbum (album * const _albumS);
void initMusicDisc ( musicDisc * const _musicDiscES);
//---------------------------------------------------
void print (creator *_creator , size_t *size);
void print (album **_album , size_t *size);
void print (musicDisc **_musicDisc , size_t *size);
//------------------------------------------------
void add (album **& _album , size_t * size );
void add (musicDisc **& _musicDisc , size_t * size );
int add (creator *& _creator , size_t * size_old ,size_t * size_new);
//------------------------------------------------

void get_size( size_t *size);//------

void menu_show_content();//-------

void start();//-------

void print_size (size_t *size);


void pressEnter();//---------

int index(size_t* ptrNum);//---------
string randName();
string randSurname();
string randAlbumName();
string randTypeMusic();
string randNameMusic();
void preestart();

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






#endif //LAB_HEADFILE_H
