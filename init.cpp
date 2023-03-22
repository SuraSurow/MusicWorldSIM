//
// Created by surow on 12/03/2023.
//
#include "headFile.h"


void init( creator * _creatorS ,size_t * pSize)
{
    for( int i = 0 ; i < (*pSize) ; i++)
    {
        _creatorS[i].nameCre = randName();
        _creatorS[i].surnameCre = randSurname();
        size_t temp=0;
        randSize_t(&temp,20,60);
        _creatorS[i].ageCre = temp;
        randSize_t(&temp,1980,2022);
        _creatorS[i].yearCre = temp;
        randSize_t(&temp,1,12);
        _creatorS[i].monthCre = temp;
        randSize_t(&temp,1,28);
        _creatorS[i].dayCre = temp;

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
    _musicDiscES -> nameCre = randName();
    _musicDiscES -> surnameCre = randSurname();
    _musicDiscES -> nameMusic = randNameMusic();
    _musicDiscES -> typeMusic = randTypeMusic();
    size_t temp=0;
    randSize_t(&temp,1,600);
    _musicDiscES -> secondMusic = temp;
    randSize_t(&temp,1980,2022);
    _musicDiscES -> yearMusic = temp;
}

void initAlbum (album *& _albumS)
{
    _albumS -> nameAl=randAlbumName();
    _albumS -> nameCre = randName();
    _albumS -> surnameCre = randSurname();
    _albumS -> typeAl = randTypeMusic();
    size_t temp = 0;
    randSize_t(&temp,1990,2022);
    _albumS -> yearCre = temp;
    randSize_t(&temp,8,30);
    _albumS -> countSong = temp;
}

