//
// Created by surow on 12/03/2023.
//
#include "headFile.h"


void init( creator * _creatorS ,size_t * pSize)
{
    for( int i = 0 ; i < *pSize ; i++)
    {
        _creatorS[i].nameCre = randName();
        _creatorS[i].surnameCre = randSurname();
        _creatorS[i].ageCre = randSize_t(1,100);
        _creatorS[i].yearCre = randSize_t(1980,2022);
        _creatorS[i].monthCre = randSize_t(1,12);
        _creatorS[i].dayCre = randSize_t(1,28);
    }
}

void init ( album * const * const  _albumS , size_t * pSize )
{
    for (size_t i = 0 ; i < *pSize; i++ ) {
        initAlbum(_albumS[i]);
    }
}

void init (musicDisc * const * const _musicDiscES , size_t * pSize )
{
    for (size_t i = 0 ; i < *pSize ; i++ ) {
        initMusicDisc ( _musicDiscES[i] );
    }
}

void initMusicDisc ( musicDisc * const _musicDiscES)
{
    _musicDiscES -> nameCre = randName();
    _musicDiscES -> surnameCre = randSurname();
    _musicDiscES -> nameMusic = randNameMusic();
    _musicDiscES -> typeMusic = randTypeMusic();
    _musicDiscES -> secondMusic = randSize_t(1,600);
    _musicDiscES -> yearMusic = randSize_t(1980,2022);


}

void initAlbum (album * const _albumS)
{
    _albumS -> nameAl=randAlbumName();
    _albumS -> nameCre = randName();
    _albumS -> surnameCre = randSurname();
    _albumS -> typeAl = randTypeMusic();
    _albumS -> yearCre = randSize_t(1990,2022);
    _albumS -> countSong = randSize_t(8,30);

}

