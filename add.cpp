//
// Created by surow on 17/03/2023.
//


#include "headFile.h"
void add (album **& _album , size_t & size ) {
    album **temp = new album *[size + 1] ;
    if (size == 0) {
        temp[size] = new album;
    } else {
        for (size_t i= 0; i < size; i++)
            temp[i] = _album[i];
        temp[size] = new album;
        delete[] _album;
    }
    _album = temp;
    ++size;
}
void add (musicDisc **& _musicDisc , size_t & size ) {
    musicDisc ** temp = new musicDisc *[size + 1] ;
    if (size == 0) {
        temp[size] = new musicDisc;
    } else {
        for (size_t i= 0; i < size; i++)
            temp[i] = _musicDisc[i];
        temp[size] = new musicDisc;
        delete[] _musicDisc;
    }
    _musicDisc = temp;
    ++size;
}