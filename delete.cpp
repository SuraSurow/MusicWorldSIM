//
// Created by surow on 14/03/2023.
//

#include "headFile.h"
//                                     20              10
int del ( creator *& _creator , size_t *size ,size_t *size_new ) {
    if ( *size_new <= *size ) {
        auto *temp = new creator[*size_new];
        int i;
        for ( i = 0 ; i < *size_new ; i++ ) {
            temp[ i ].set_ageCre(_creator[ i ].gets_ageCre());
            temp[ i ].set_yearCre(_creator[ i ].gets_yearCre());
            temp[ i ].set_dayCre(_creator[ i ].gets_dayCre());
            temp[ i ].set_monthCre(_creator[ i ].gets_monthCre());
            temp[ i ].set_surnameCre(_creator[ i ].gets_surnameCre());
            temp[ i ].set_nameCre(_creator[ i ].gets_nameCre()) ;
        }
        delete[] _creator;
        _creator = nullptr;
        _creator = temp;
        *size = *size_new;
        return 0;
    }
    return EXIT_FAILURE;
}

int del( album **& _album, size_t * size ,size_t * size_new) {
    if(*size_new<=*size) {
        auto **temp = new album *[*size_new];
        int i = 0;
        for ( ; i < *size_new ; i++ ) {
            temp[ i ] = new album;
            temp[ i ]->set_surnameCre(_album[ i ]->gets_surnameCre());
            temp[ i ]->set_nameCre( _album[ i ]->gets_nameCre());
            temp[ i ]->set_yearCre(_album[ i ]->gets_yearCre());
            temp[ i ]->set_typeAl(_album[ i ]->gets_typeAl());
            temp[ i ]->set_countSong(_album[ i ]->gets_countSong());
            temp[ i ]->set_nameAl(_album[ i ]->gets_nameAl());
        }
        delete[] _album;
        _album = nullptr;
        _album = temp;
        *size = *size_new;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}

int del( musicDisc **& _musicDisc, size_t * size ,size_t * size_new) {
    if(*size_new<=*size) {
        auto **temp = new musicDisc *[*size_new];
        int i = 0;
        for ( ; i < *size_new ; i++ ) {
            temp[ i ] = new musicDisc;
            temp[ i ]->set_surnameCre(_musicDisc[ i ]->gets_surnameCre());
            temp[ i ]->set_nameCre(_musicDisc[ i ]->gets_nameCre());
            temp[ i ]->set_nameMusic( _musicDisc[ i ]->gets_nameMusic());
            temp[ i ]->set_typeMusic(_musicDisc[ i ]->gets_typeMusic());
            temp[ i ]->set_secondMusic(_musicDisc[ i ]->gets_secondMusic());
            temp[ i ]->set_yearMusic( _musicDisc[ i ]->gets_yearMusic());
        }
        delete[] _musicDisc;
        _musicDisc = nullptr;
        _musicDisc = temp;
        *size = *size_new;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}
