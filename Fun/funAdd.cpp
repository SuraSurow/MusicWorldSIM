//
// Created by surow on 17/03/2023.
//


#include "../head/headHeadFile.h"
int add ( Musician *& _creator , const size_t * size , const size_t * size_new)
{
    if ( *size_new >= *size) {
        auto *temp = new Musician[*size_new];
        int i;
        for ( i=0; i < *size ; i++)
        {
            //temp[i].age = _creator[i].age;
            temp[i] = _creator[i];
        }
        for (  ; i < *size_new ; i++)
        {
            //temp[i].type = randStringData();
            init(temp[i]);
        }
        delete[] _creator;
        _creator = nullptr;
        _creator = temp;
        return 0;
    }
    return EXIT_FAILURE;
}

int add ( Album **& _album , const size_t * size , const size_t *size_new) {
    if(*size_new>=*size) {
        auto ** temp = new Album * [ *size_new ] ;
        for ( size_t x = 0 ; x < *size_new ; x++ )
        {
            temp [ x ] = new Album ;
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
int add ( Music **& _musicDisc , const size_t * size, const size_t *size_new ) {
if(*size_new>=*size) {
    auto ** temp = new Music * [ *size_new ] ;
    for ( size_t x = 0 ; x < *size_new ; x++ )
    {
        temp [ x ] = new Music ;
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
int add ( Producent **& _producent , const size_t * size, const size_t *size_new ) {
    if(*size_new>=*size) {
        auto ** temp = new Producent * [ *size_new ] ;
        for ( size_t x = 0 ; x < *size_new ; x++ )
        {
            temp [ x ] = new Producent ;
        }
        int i = 0;
        for ( ; i < *size ; i++ ) {
            temp[ i ] = _producent[ i ];
        }
        for ( ; i < *size_new ; i++ ) {
            init(temp[ i ]);
        }
        delete[] _producent;
        _producent = nullptr;
        _producent = temp;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}