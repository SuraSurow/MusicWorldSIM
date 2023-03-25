//
// Created by surow on 12/03/2023.
//
#include "headFile.h"


void init( creator * _creatorS ,size_t * pSize)
{
    for( int i = 0 ; i < (*pSize) ; i++)
    {
        _creatorS[i].set_nameCre(randName());
        _creatorS[i].set_surnameCre(randSurname());
        size_t temp=0;
        randSize_t(&temp,20,60);
        _creatorS[i].set_ageCre(temp);
        randSize_t(&temp,1980,2022);
        _creatorS[i].set_yearCre(temp);
        randSize_t(&temp,1,12);
        _creatorS[i].set_monthCre(temp);
        randSize_t(&temp,1,28);
        _creatorS[i].set_dayCre(temp);

    }
}

void init ( album ** _albumS , size_t * pSize )
{
    for (size_t i = 0 ; i < *pSize; i++ ) {
        initAlbum(_albumS[i]);
    }
}

void init (musicDisc ** _musicDiscES , size_t * pSize )
{
    for (size_t i = 0 ; i < *pSize ; i++ ) {
        initMusicDisc ( _musicDiscES[i] );
    }
}

void initMusicDisc ( musicDisc *& _musicDiscES)
{
    _musicDiscES->set_nameCre(randName());
    _musicDiscES -> set_surnameCre(randSurname());
    _musicDiscES -> set_nameMusic(randNameMusic());
    _musicDiscES -> set_typeMusic(randTypeMusic());
    size_t temp=0;
    randSize_t(&temp,1,600);
    _musicDiscES -> set_secondMusic(temp);
    randSize_t(&temp,1980,2022);
    _musicDiscES -> set_yearMusic(temp);
}

void initAlbum (album *& _albumS)
{
    _albumS -> set_nameAl(randAlbumName());
    _albumS -> set_nameCre(randName());
    _albumS -> set_surnameCre(randSurname());
    _albumS -> set_typeAl(randTypeMusic());
    size_t temp = 0;
    randSize_t(&temp,1990,2022);
    _albumS -> set_yearCre(temp);
    randSize_t(&temp,8,30);
    _albumS -> set_countSong(temp);
}

