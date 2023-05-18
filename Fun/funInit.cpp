//
// Created by surow on 12/03/2023.
//
#include "../head/headHeadFile.h"


void init( Musician * _musician , const size_t * pSize)
{
    for( int i = 0 ; i < (*pSize) ; i++) {
        _musician[i].set_name(randStringData(name_txt_path_file, "name.txt"));
        _musician[i].set_surname(randStringData(surname_txt_path_file, "surname.txt"));
        _musician[i].set_age(randSize_t(20, 60));
        _musician[i].set_year(randSize_t(1980, 2022));
        _musician[i].set_month(randSize_t(1, 12));
        _musician[i].set_day(randSize_t(1, 28));
        _musician[i].set_distCompany(randStringData(distCompany_txt_path_file, "distCompany.txt"));
        _musician[i].set_nickName(randStringData(nickName_txt_path_file, "nickName.txt"));
        _musician[i].set_workExp(randSize_t(1, 20));

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

void init ( Music *& _musicDisc)
{
    _musicDisc->set_nameCre(randStringData(name_txt_path_file, "name.txt"));
    _musicDisc -> set_surnameCre(randStringData(surname_txt_path_file, "surname.txt"));
    _musicDisc -> set_nameMusic(randStringData(nameMusic_txt_path_file, "nameMusic.txt"));
    _musicDisc -> set_typeMusic(randStringData(typeMusic_txt_path_file, "typeMusic.txt"));
    _musicDisc -> set_secondMusic(randSize_t(1, 600));
    _musicDisc -> set_yearMusic(randSize_t(1980, 2022));
}

void init(Album*& _album)
{
    _album->set_nameAl(randStringData(albumName_txt_path_file, "albumName.txt"));
    _album->set_nameCre(randStringData(name_txt_path_file, "name.txt"));
    _album->set_surnameCre(randStringData(surname_txt_path_file, "surname.txt"));
    _album->set_typeAl(randStringData(typeMusic_txt_path_file, "typeMusic.txt"));
    _album->set_yearCre(randSize_t(1990, 2022));

}
void init ( Musician & _musician)
{
    _musician.set_name(randStringData(name_txt_path_file,"name.txt"));
    _musician.set_surname(randStringData(surname_txt_path_file,"surname.txt"));
    _musician.set_age(randSize_t(20, 60));
    _musician.set_year(randSize_t(1980, 2022));
    _musician.set_month(randSize_t(1, 12));
    _musician.set_day(randSize_t(1, 28));
    _musician.set_distCompany(randStringData(distCompany_txt_path_file,"distCompany.txt"));
    _musician.set_nickName(randStringData(nickName_txt_path_file,"nickName.txt"));
    _musician.set_workExp(randSize_t(1,20));
}
void init ( Producent *& _prod)
{
    _prod -> set_name(randStringData(name_txt_path_file,"name.txt"));
    _prod -> set_surname(randStringData(surname_txt_path_file,"surname.txt"));
    _prod -> set_age(randSize_t(20,80));
    _prod -> set_year(randSize_t(1960,2022));
    _prod -> set_month(randSize_t(1, 12));
    _prod -> set_day(randSize_t(1, 28));
    _prod -> set_expertiseArea(randStringData(expertiseArea_txt_path_file,"expertiseArea.txt"));
    _prod -> set_hasGrammyAward(randSize_t(0,4));
    _prod -> set_FavoriteBPM(randSize_t(30,180));
    _prod -> set_numOfProductions(randSize_t(10,100));
    init(*_prod->gets_coWorker());
}
