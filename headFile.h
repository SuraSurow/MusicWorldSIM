//
// Created by surow on 11/03/2023.
//

#ifndef LAB_HEADFILE_H
#define LAB_HEADFILE_H

//standard library

#include <iostream>
#include <string>
#include <cstdlib>
#include <locale>
#include <ctime>
#include <random>
#include <type_traits>
#include <chrono>

//own header

#include "create.h"
/*
void create(creator *& _creator, const size_t *size);
void create(album **& _album,const size_t *size);
void create(musicDisc **& _musicDisc,const size_t *size);
 */
#include "add.h"
/*
int add (album **& _album , size_t * size ,size_t *size_new);
int add (musicDisc **& _musicDisc , size_t * size ,size_t *size_new);
int add (creator *& _creator , size_t * size , size_t * size_new);
 */
#include "delete.h"
/*
int del ( creator *& _creatorS , size_t *size , size_t *size_new );
int del( album **& _albumS , size_t* size,size_t * size_new );
int del( musicDisc **& _musicDiscES , size_t * size , size_t * size_new);
*/
#include "init.h"
/*
void init( creator * _creatorS , size_t * size );
void init( album ** _albumS , size_t * size );
void init ( musicDisc ** _musicDiscES , size_t * size );
void initAlbum ( album *&  _albumS );
void initMusicDisc ( musicDisc *&  _musicDiscES );
*/
#include "optiFun.h"
/*
void get_size( size_t *size);
int index(size_t* ptrNum);
void pressEnter();
 */
#include "print.h"
/*
void print (creator *_creator , size_t *size);
void print (album **_album , size_t *size);
void print (musicDisc **_musicDisc , size_t *size);
void preestart();
void menu_show_content();
void start();

 */
#include "randData.h"
/*
string randName();
string randSurname();
string randAlbumName();
string randTypeMusic();
string randNameMusic();
size_t randSize_t (int min, int max);
 */

//struct,namespace,macro!!!

#include "struct.h"
/*
#define EXIT 0
#define CREATE 1
#define INITIALIZE 2
#define PRINT 3
#define ADD 4
#define DELETE 5
#define SORT 6
#define DATA_SHEET 7
#define MIN 1
#define MAX 100


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
            data_sheet = "DATA_SHEET",
            start_path = "START_PATH";
}


struct creator {
    string nameCre;
    string surnameCre;
    size_t ageCre;
    size_t yearCre;
    size_t monthCre;
    size_t dayCre;
};
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
 */
#include "sort.h"
/*
int sort (creator * _creator ,size_t *size);
*/
#endif //LAB_HEADFILE_H
