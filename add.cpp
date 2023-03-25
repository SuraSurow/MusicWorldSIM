//
// Created by surow on 17/03/2023.
//


#include "headFile.h"
int add (creator *& _creator , size_t * size , size_t * size_new)
{
    if ( *size_new >= *size) {
        auto *temp = new creator[*size_new];
        int i;
        for ( i=0; i < *size ; i++)
        {
            //temp[i].ageCre = _creator[i].ageCre;
            temp[i].set_ageCre(_creator[i].gets_ageCre());
            temp[i].set_yearCre(_creator[i].gets_yearCre());
            temp[i].set_dayCre(_creator[i].gets_dayCre()) ;
            temp[i].set_monthCre (_creator[i].gets_monthCre());
            temp[i].set_surnameCre (_creator[i].gets_surnameCre());
            temp[i].set_nameCre (_creator[i].gets_nameCre());
        }
        for (  ; i < *size_new ; i++)
        {
            //temp[i].nameCre = randName();
            temp[i].set_nameCre(randName());
            temp[i].set_nameCre(randSurname());
            size_t temp_size_t = 0;
            randSize_t(&temp_size_t,20,60);
            temp[i].set_ageCre(temp_size_t);
            randSize_t(&temp_size_t,1980,2022);
            temp[i].set_yearCre(temp_size_t);
            randSize_t(&temp_size_t,1,12);
            temp[i].set_monthCre(temp_size_t);
            randSize_t(&temp_size_t,1,28);
            temp[i].set_dayCre(temp_size_t);
        }
        delete[] _creator;
        _creator = nullptr;
        _creator = temp;
        *size=*size_new;
        return 0;
    }

    return EXIT_FAILURE;

}




int add (album **& _album , size_t * size ,size_t *size_new) {


    if(*size_new>=*size) {
        auto **temp = new album *[*size_new];
        int i = 0;
        for ( ; i < *size ; i++ ) {
            temp[ i ] = new album;
            //temp[ i ]->surnameCre = _album[ i ]->surnameCre;
            temp[i]->set_surnameCre(_album[i]->gets_surnameCre());
            temp[ i ]->set_nameCre(_album[ i ]->gets_nameCre());
            temp[ i ]->set_yearCre(_album[ i ]->gets_yearCre());
            temp[ i ]->set_typeAl (_album[ i ]->gets_typeAl());
            temp[ i ]->set_countSong ( _album[ i ]->gets_countSong());
            temp[ i ]->set_nameAl (_album[ i ]->gets_nameAl());
        }
        for ( ; i < *size_new ; i++ ) {
            temp[ i ] = new album;
            //initAlbum(temp[ i ]);
        }
        delete[] _album;
        _album = nullptr;
        _album = temp;
        *size = *size_new;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}
int add (musicDisc **& _musicDisc , size_t * size,size_t *size_new ) {


if(*size_new>=*size) {
    auto **temp = new musicDisc *[*size_new];
    int i = 0;
    for ( ; i < *size ; i++ ) {
        temp[ i ] = new musicDisc;
        temp[ i ]->set_surnameCre(_musicDisc[ i ]->gets_surnameCre()) ;
        temp[ i ]->set_nameCre( _musicDisc[ i ]->gets_nameCre());
        temp[ i ]->set_nameMusic(_musicDisc[ i ]->gets_nameMusic());
        temp[ i ]->set_typeMusic( _musicDisc[ i ]->gets_typeMusic()) ;
        temp[ i ]->set_secondMusic(_musicDisc[ i ]->gets_secondMusic());
        temp[ i ]->set_yearMusic(_musicDisc[ i ]->gets_yearMusic());
    }
    for ( ; i < *size_new ; i++ ) {
        temp[ i ] = new musicDisc;
        //initMusicDisc(temp[ i ]);
    }
    delete[] _musicDisc;
    _musicDisc = nullptr;
    _musicDisc = temp;
    *size = *size_new;
    return EXIT_SUCCESS;
}
return EXIT_FAILURE;
}