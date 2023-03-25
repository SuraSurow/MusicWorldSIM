//
// Created by surow on 21/03/2023.
//
#include "headFile.h"
void sort (creator * _creator ,size_t *size){
    cout << "\n WYKONAWCY\nSortuje wg wieku od najmiejszego do najwiekszego\n";
    size_t array[*size];
    for (int i = 0 ; i < *size ; i++ ) {
         array[i] = _creator[i].gets_ageCre();
    }
    bool sort;
    do {
        sort = false;
        for (int i = 0; i < (*size - 1); i++) {
            if (array[i] > array[i + 1]) {
                sort = true;
                for (; i < (*size - 1); i++) {
                    if (array[i] > array[i + 1]) {
                        std::swap(array[i], array[i + 1]);
                    }
                }
            }
        }
    } while (sort);
        for ( int i = 0 ; i < *size ; i++ ) {
            _creator[i].set_ageCre(array[i]);
            //_creator[i].ageCre=array[i];
        }

}
void sort (album ** _album ,size_t *size){
    cout << "\nALBUMY\nSortuje wg roku urodzenia wykonawcy od najmiejszego do najwiekszego\n";
    size_t array[*size];
    for (int i = 0 ; i < *size ; i++ ) {
        array[i] = _album[i]->gets_yearCre();
        //array[i] = _album[i]->yearCre;
    }
    bool sort;
    do {
        sort = false;
        for (int i = 0; i < (*size - 1); i++) {
            if (array[i] > array[i + 1]) {
                sort = true;
                for (; i < (*size - 1); i++) {
                    if (array[i] > array[i + 1]) {
                        std::swap(array[i], array[i + 1]);
                    }
                }
            }
        }
    } while (sort);
    for ( int i = 0 ; i < *size ; i++ ) {
        _album[i]->set_yearCre(array[i]);
        //_album[i]->yearCre=array[i];
    }

}

void sort (musicDisc ** _musicDisc ,size_t *size){
    cout << "\nMUZYCZNE UTWORY\nSortuje wg roku wydania piosenka od najmiejszego do najwiekszego\n";
    size_t array[*size];
    for (int i = 0 ; i < *size ; i++ ) {
        array[i] = _musicDisc[i]->gets_yearMusic();
        //array[i] = _musicDisc[i]->yearMusic;
    }
    bool sort;
    do {
        sort = false;
        for (int i = 0; i < (*size - 1); i++) {
            if (array[i] > array[i + 1]) {
                sort = true;
                for (; i < (*size - 1); i++) {
                    if (array[i] > array[i + 1]) {
                        std::swap(array[i], array[i + 1]);
                    }
                }
            }
        }
    } while (sort);
    for ( int i = 0 ; i < *size ; i++ ) {
        _musicDisc[i]->set_yearMusic(array[i]);
        //_musicDisc[i]->yearMusic=array[i];
    }

}






