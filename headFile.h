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
    struct musicDisc oneTrack[32];
};
struct creator {
    string nameCre;
    string surnameCre;
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
void menu(const string& name);
void menu(const int* ptrNum, const string& typeMenu);

int creator_sMenu (const string& typeMenu );
void album_sMenu (const string& typeMenu );
void disc_sMenu (const string& typeMenu  );
#endif //LAB_HEADFILE_H
