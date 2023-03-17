//
// Created by surow on 14/03/2023.
//

#include "headFile.h"

void del ( creator *& _creatorS , size_t size )
{
    delete[] _creatorS;
    _creatorS = nullptr;
}

void del( album **& _albumS, size_t& size) {
    for (size_t x = 0; x < size; x++)
        delete _albumS[x];
    delete[] _albumS;
    _albumS = nullptr;
    size = 0;
}
void del( musicDisc **& _musicDiscES, size_t& size) {
    for (size_t x = 0; x < size; x++)
        delete _musicDiscES[x];
    delete[] _musicDiscES;
    _musicDiscES = nullptr;
    size = 0;
}