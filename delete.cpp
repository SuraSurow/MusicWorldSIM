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
            temp[ i ].ageCre = _creator[ i ].ageCre;
            temp[ i ].yearCre = _creator[ i ].yearCre;
            temp[ i ].dayCre = _creator[ i ].dayCre;
            temp[ i ].monthCre = _creator[ i ].monthCre;
            temp[ i ].surnameCre = _creator[ i ].surnameCre;
            temp[ i ].nameCre = _creator[ i ].nameCre;
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
        for ( ; i < *size ; i++ ) {
            temp[ i ] = new album;
            temp[ i ]->surnameCre = _album[ i ]->surnameCre;
            temp[ i ]->nameCre = _album[ i ]->nameCre;
            temp[ i ]->yearCre = _album[ i ]->yearCre;
            temp[ i ]->typeAl = _album[ i ]->typeAl;
            temp[ i ]->countSong = _album[ i ]->countSong;
            temp[ i ]->nameAl = _album[ i ]->nameAl;
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
