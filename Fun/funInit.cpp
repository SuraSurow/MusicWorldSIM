//
// Created by surow on 12/03/2023.
//
#include "../head/headHeadFile.h"


void init( Musician * _musician , const size_t * pSize)
{
    for( int i = 0 ; i < (*pSize) ; i++)
    {
        _musician[i].set_name(randName());
        _musician[i].set_surname(randSurname());
        _musician[i].set_age(randSize_t(20, 60));
        _musician[i].set_year(randSize_t(1980, 2022));
        _musician[i].set_month(randSize_t(1, 12));
        _musician[i].set_day(randSize_t(1, 28));
        _musician[i].set_distCompany(randDistCompany());
        _musician[i].set_nickName(randNickName());
        _musician[i].set_workExp(randSize_t(1,20));
    }
}

void init ( Album ** _albumS , const size_t * pSize )
{
    for (size_t i = 0 ; i < *pSize; i++ ) {
        init(_albumS[i]);
    }
}

void init ( Music ** _musicDiscES , const size_t * pSize )
{
    for (size_t i = 0 ; i < *pSize ; i++ ) {
        init( _musicDiscES[i] );
    }
}
void init (Producent ** _prod , const size_t * pSize)
{
    for (size_t i = 0 ; i < *pSize ;i++){
        init (_prod[i]);
    }
}

void init ( Music *& _musicDiscES)
{
    _musicDiscES->set_nameCre(randName());
    _musicDiscES -> set_surnameCre(randSurname());
    _musicDiscES -> set_nameMusic(randNameMusic());
    _musicDiscES -> set_typeMusic(randTypeMusic());
    _musicDiscES -> set_secondMusic(randSize_t(1,600));
    _musicDiscES -> set_yearMusic(randSize_t(1980,2022));
}

void init ( Album *& _albumS)
{
    _albumS -> set_nameAl(randAlbumName());
    _albumS -> set_nameCre(randName());
    _albumS -> set_surnameCre(randSurname());
    _albumS -> set_typeAl(randTypeMusic());
    _albumS -> set_yearCre(randSize_t(1990,2022));
    _albumS -> set_countSong(randSize_t(8,30));
}
void init ( Musician & _musician)
{
    _musician.set_name(randName());
    _musician.set_surname(randSurname());
    _musician.set_age(randSize_t(20, 60));
    _musician.set_year(randSize_t(1980, 2022));
    _musician.set_month(randSize_t(1, 12));
    _musician.set_day(randSize_t(1, 28));
    _musician.set_distCompany(randDistCompany());
    _musician.set_nickName(randNickName());
    _musician.set_workExp(randSize_t(1,20));
}
void init ( Producent *& _prod)
{
    _prod -> set_name(randName());
    _prod -> set_surname(randName());
    _prod -> set_age(randSize_t(20,80));
    _prod -> set_year(randSize_t(1960,2022));
    _prod -> set_month(randSize_t(1, 12));
    _prod -> set_day(randSize_t(1, 28));
    _prod -> set_expertiseArea(randExertiseArea());
    _prod -> set_hasGrammyAward(randSize_t(0,4));
    _prod -> set_FavoriteBPM(randSize_t(30,180));
    _prod -> set_numOfProductions(randSize_t(10,100));

}
