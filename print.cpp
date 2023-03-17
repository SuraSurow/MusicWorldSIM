//
// Created by surow on 16/03/2023.
//
#include "headFile.h"

void print (creator * _creator , size_t *size)
{
    for (int i = 0 ; i < *size ; i++)
    {
        cout
        <<"Name -> " << _creator[i].nameCre << "\n"
        <<"Surname -> " << _creator[i].surnameCre << "\n"
        <<"Age -> " << _creator[i].ageCre << "\n"
        <<"Year -> " << _creator[i].yearCre << "\n"
        <<"Month -> " << _creator[i].monthCre << "\n"
        <<"Day-> " << _creator[i].dayCre << "\n\n";
    }


}

void print (album ** _album ,size_t * size )

{
    for (int i = 0 ; i < *size ; i++)
    {
        cout
        <<"Name Creator -> " << _album[i]->nameCre << "\n"
        <<"Surname Creator -> " << _album[i]->surnameCre << "\n"
        <<"Name album -> " << _album[i]->nameAl<< "\n"
        <<"Type Music -> " << _album[i]->typeAl << "\n"
        <<"Year create -> " << _album[i]->yearCre << "\n"
        <<"Count of song-> " << _album[i]->countSong << "\n\n";

    }

}

void print (musicDisc  ** _musicDisc , size_t * size )
{
    for (int i = 0 ; i < *size ; i++)
    {
        cout
                <<"Name Creator -> " << _musicDisc[i]->nameCre << "\n"
                <<"Surname Creator -> " << _musicDisc[i]->surnameCre << "\n"
                <<"Name album -> " << _musicDisc[i]->nameMusic<< "\n"
                <<"Type Music -> " << _musicDisc[i]->typeMusic << "\n"
                <<"Year create -> " << _musicDisc[i]->secondMusic << "\n"
                <<"Count of song-> " << _musicDisc[i]->yearMusic<< "\n\n";

    }

}
