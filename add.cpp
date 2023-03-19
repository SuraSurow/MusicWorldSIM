//
// Created by surow on 17/03/2023.
//


#include "headFile.h"
int add (creator *& _creator , size_t * size_old ,size_t * size_new)
{
    if(*size_old>*size_new){
        cout << "\n Przeladowanie bufora, (wielkosc nowej tablicy mniejsza od starej)";
        return 1;
    }
    auto * temp = new creator [*size_new];
    for(int i = 0 ; i < *size_old ; i++)
    {
        temp[i] = _creator[i];
    }
    delete[] _creator;
    _creator = temp;
    *size_old = *size_new;
    cout << "\nwskaznim do _creator add:"<<_creator;
    cout << "\nwskaznim do _creator add:"<<sizeof(*_creator);

    delete[] temp;
    return 0;
}



void add (album **& _album , size_t * size ) {
    size_t calkowityRozmiar = sizeof(album*) * (*size);

    std::cout << "Rozmiar tablicy obiektow: " << calkowityRozmiar << " bajtow\n";
    //obiektowi wielkosci danej tablcy obiektow;
    album **temp = new album *[*size + 1] ;
    if (*size == 0) {
        temp[*size] = new album;
    } else {
        for (size_t i= 0; i < *size; i++)
            temp[i] = _album[i];
        temp[*size] = new album;
        delete[] _album;
    }
    _album = temp;
    *size = *size + 1;
    cout <<"\ndebug size"<< *size;
    size_t fcalkowityRozmiar = sizeof(album) * (*size);

    //std::cout << "Rozmiar tablicy obiektow: " << fcalkowityRozmiar << " bajtow\n";
    //obiektowi wielkosci danej tablcy obiektow;

}
void add (musicDisc **& _musicDisc , size_t * size ) {



    musicDisc ** temp = new musicDisc *[*size + 1] ;
    if (*size == 0) {
        temp[*size] = new musicDisc;
    } else {
        for (size_t i= 0; i < *size; i++)
            temp[i] = _musicDisc[i];
        temp[*size] = new musicDisc;
        delete[] _musicDisc;
    }
    _musicDisc = temp;
    *size = *size + 1;
}