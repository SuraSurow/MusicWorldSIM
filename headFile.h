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
    struct musicDisc oneTrack[32];
};
struct creator {
    std::string nameCre;
    std::string surnameCre;
    size_t ageCre;
    size_t yearCre;
    size_t monthCre;
    size_t dayCre;
    struct album album[4];
};
//tworzenie wszelkich obiektow oraz wskaznikow do obiektow
void create(creator*& _creator);
void create(album*& _album);
void create(musicDisc*& _musicDisc);
void create(creator*& _creator, size_t size);
void create(album*& _album, size_t size);
void create(musicDisc*& _musicDisc, size_t size);
void create(creator**& _creator,size_t size);
void create(album**& _album,size_t size);
void create(musicDisc**& _musicDisc,size_t size);

//--------------------------------------------------

void start();
void pressEnter();
int index(int* ptrNum);
int menu();//
void menu(char name[]);//
void menu(int* ptrNum, char typeMenu[]);

void creatorsMenu ( char typeMenu[] );
void albumsMenu ( char typeMenu [] );
void discesMenu ( char typeMenu [] );
#endif //LAB_HEADFILE_H
