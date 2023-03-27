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
            temp[i] = _creator[i];
        }
        for (  ; i < *size_new ; i++)
        {
            //temp[i].nameCre = randName();
            init(temp[i]);
        }
        delete[] _creator;
        _creator = nullptr;
        _creator = temp;
        return 0;
    }
    return EXIT_FAILURE;
}

int add (album **& _album , size_t * size ,size_t *size_new) {
    if(*size_new>=*size) {
        album ** temp = new album * [ *size_new ] ;
        for ( size_t x = 0 ; x < *size_new ; x++ )
        {
            temp [ x ] = new album ;
        }
        int i = 0;
        for ( ; i < *size ; i++ ) {
            temp[i]=_album[i];
             }
        for ( ; i < *size_new ; i++ ) {
            init(temp[ i ]);
        }
        delete[] _album;
        _album = nullptr;
        _album = temp;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}
int add (musicDisc **& _musicDisc , size_t * size,size_t *size_new ) {
if(*size_new>=*size) {
    auto ** temp = new musicDisc * [ *size_new ] ;
    for ( size_t x = 0 ; x < *size_new ; x++ )
    {
        temp [ x ] = new musicDisc ;
    }
    int i = 0;
    for ( ; i < *size ; i++ ) {
        temp[ i ] = _musicDisc[ i ];
    }
    for ( ; i < *size_new ; i++ ) {
        init(temp[ i ]);
    }
    delete[] _musicDisc;
    _musicDisc = nullptr;
    _musicDisc = temp;
    return EXIT_SUCCESS;
}
return EXIT_FAILURE;
}