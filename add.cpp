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
            temp[i].ageCre = _creator[i].ageCre;
            temp[i].yearCre = _creator[i].yearCre;
            temp[i].dayCre = _creator[i].dayCre;
            temp[i].monthCre = _creator[i].monthCre;
            temp[i].surnameCre = _creator[i].surnameCre;
            temp[i].nameCre = _creator[i].nameCre;
        }
        for (  ; i < *size_new ; i++)
        {
            temp[i].nameCre = randName();
            temp[i].surnameCre = randSurname();
            size_t temp_size_t = 0;
            randSize_t(&temp_size_t,20,60);
            temp[i].ageCre = temp_size_t;
            randSize_t(&temp_size_t,1980,2022);
            temp[i].yearCre = temp_size_t;
            randSize_t(&temp_size_t,1,12);
            temp[i].monthCre = temp_size_t;
            randSize_t(&temp_size_t,1,28);
            temp[i].dayCre = temp_size_t;
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
            temp[ i ]->surnameCre = _album[ i ]->surnameCre;
            temp[ i ]->nameCre = _album[ i ]->nameCre;
            temp[ i ]->yearCre = _album[ i ]->yearCre;
            temp[ i ]->typeAl = _album[ i ]->typeAl;
            temp[ i ]->countSong = _album[ i ]->countSong;
            temp[ i ]->nameAl = _album[ i ]->nameAl;
        }
        for ( ; i < *size_new ; i++ ) {
            temp[ i ] = new album;
            initAlbum(temp[ i ]);
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
        temp[ i ]->surnameCre = _musicDisc[ i ]->surnameCre;
        temp[ i ]->nameCre = _musicDisc[ i ]->nameCre;
        temp[ i ]->nameMusic = _musicDisc[ i ]->nameMusic;
        temp[ i ]->typeMusic = _musicDisc[ i ]->typeMusic;
        temp[ i ]->secondMusic = _musicDisc[ i ]->secondMusic;
        temp[ i ]->yearMusic = _musicDisc[ i ]->yearMusic;
    }
    for ( ; i < *size_new ; i++ ) {
        temp[ i ] = new musicDisc;
        initMusicDisc(temp[ i ]);
    }
    delete[] _musicDisc;
    _musicDisc = nullptr;
    _musicDisc = temp;
    *size = *size_new;
    return EXIT_SUCCESS;
}
return EXIT_FAILURE;
}