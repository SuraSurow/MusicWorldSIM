//
// Created by surow on 12/03/2023.
//
#include "headFile.h"


void init( creator * _creatorS ,const size_t * pSize)
{
    for( int i = 0 ; i < (*pSize) ; i++)
    {
        _creatorS[i].set_nameCre(randName());
        _creatorS[i].set_surnameCre(randSurname());
        _creatorS[i].set_ageCre(randSize_t(20,60));
        _creatorS[i].set_yearCre(randSize_t(1980,2022));
        _creatorS[i].set_monthCre(randSize_t(1,12));
        _creatorS[i].set_dayCre(randSize_t(1,28));

    }
}

void init ( album ** _albumS , const size_t * pSize )
{
    for (size_t i = 0 ; i < *pSize; i++ ) {
        init(_albumS[i]);
    }
}

void init (musicDisc ** _musicDiscES , const size_t * pSize )
{
    for (size_t i = 0 ; i < *pSize ; i++ ) {
        init( _musicDiscES[i] );
    }
}

void init ( musicDisc *& _musicDiscES)
{
    _musicDiscES->set_nameCre(randName());
    _musicDiscES -> set_surnameCre(randSurname());
    _musicDiscES -> set_nameMusic(randNameMusic());
    _musicDiscES -> set_typeMusic(randTypeMusic());
    _musicDiscES -> set_secondMusic(randSize_t(1,600));
    _musicDiscES -> set_yearMusic(randSize_t(1980,2022));
}

void init (album *& _albumS)
{
    _albumS -> set_nameAl(randAlbumName());
    _albumS -> set_nameCre(randName());
    _albumS -> set_surnameCre(randSurname());
    _albumS -> set_typeAl(randTypeMusic());
    _albumS -> set_yearCre(randSize_t(1990,2022));
    _albumS -> set_countSong(randSize_t(8,30));
}
void init (creator & _creator)
{
    _creator.set_surnameCre(randSurname());
    _creator.set_nameCre(randName());
    _creator.set_ageCre(randSize_t(20,60));
    _creator.set_yearCre(randSize_t(1980,2022));
    _creator.set_monthCre(randSize_t(1,12));
    _creator.set_dayCre(randSize_t(1,28));
}

