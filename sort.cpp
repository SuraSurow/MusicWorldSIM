//
// Created by surow on 21/03/2023.
//
#include "headFile.h"
void sort (creator * _creator ,size_t *size){
    cout << "\n WYKONAWCY\nSortuje wg wieku od najmiejszego do najwiekszego\n";
    size_t array[*size];
    creator * _array = _creator;
    bool sort;
    do {
        sort = false;
        for (int i = 0; i < (*size - 1); i++) {
            if ( _array[i].gets_ageCre() > _array[i+1].gets_ageCre() ) {
                sort = true;
                for (int j = 0; i < (*size - 1); j++) {
                    if (_array[j].gets_ageCre() > _array[j+1].gets_ageCre()) {
                        std::swap(array[j], array[j + 1]);
                    }
                }
            }
        }
    } while (sort);
}
void sort (album ** _album ,size_t *size){
    cout << "\nALBUMY\nSortuje wg roku urodzenia wykonawcy od najmiejszego do najwiekszego\n";
    size_t array[*size];
    album ** _array = _album;
    bool sort;
    do {
        sort = false;
        for (int i = 0; i < (*size - 1); i++) {
            if (_array[i]->gets_yearCre() > _array[i+1]->gets_yearCre() ) {
                sort = true;
                for (int  j= 0 ;j < (*size - 1); j++) {
                    if (_array[j]->gets_yearCre() > _array[j+1]->gets_yearCre()) {
                        std::swap(_array[j], _array[j+1]);
                    }
                }
            }
        }
    } while (sort);
}

void sort (musicDisc ** _musicDisc ,size_t *size){
    cout << "\nMUZYCZNE UTWORY\nSortuje wg roku wydania piosenka od najmiejszego do najwiekszego\n";
    size_t array[*size];
    musicDisc ** _array = _musicDisc;
    bool sort;
    do {
        sort = false;
        for (int i = 0; i < (*size - 1); i++) {
            if (_array[i]->gets_yearMusic() > _array[i+1]->gets_yearMusic()) {
                sort = true;
                for (int j = 0 ;j < (*size - 1); j++) {
                    if (_array[j]->gets_yearMusic() > _array[j+1]->gets_yearMusic()) {
                        std::swap(_array[j],_array[j+1]);
                    }
                }
            }
        }
    } while (sort);
}






