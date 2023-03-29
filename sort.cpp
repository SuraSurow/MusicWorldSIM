//
// Created by surow on 21/03/2023.
//
#include "headFile.h"
void sort (creator * _creator ,size_t *size){
    cout << "\n WYKONAWCY\nSortuje wg wieku od najmiejszego do najwiekszego\n";
        bool sort;
    for(int i = 0 ; i < *size - 1 ; i++)
    {
        sort = false;
        for(int j = 0 ; j < *size - 1 ; j ++ )
        {
            if(_creator[j].gets_ageCre() > _creator[j+1].gets_ageCre())
            {
                std::swap(_creator[j+1],_creator[j]);
                sort = true;
            }
        }
    }
}
void sort (album ** _album ,size_t *size){
    cout << "\nALBUMY\nSortuje wg roku urodzenia wykonawcy od najmiejszego do najwiekszego\n";

    bool sort;
    for(int i = 0 ; i < *size-1 ; i ++ )
    {
        sort = false ;
        for (int j = 0 ; j < *size-1 ; j++)
        {
            if(_album[j]->gets_yearCre() > _album[j+1]->gets_yearCre())
            {
                std::swap(_album[j],_album[j+1]);
                sort = true;
            }
        }
    }
}

void sort (musicDisc ** _musicDisc ,size_t *size){
    cout << "\nMUZYCZNE UTWORY\nSortuje wg roku wydania piosenka od najmiejszego do najwiekszego\n";


    bool sort;
    for(int i = 0 ; i < *size-1 ; i ++ )
    {
        sort = false ;
        for (int j = 0 ; j < *size-1 ; j++)
        {
            if(_musicDisc[j]->gets_yearMusic() > _musicDisc[j+1]->gets_yearMusic())
            {
                std::swap(_musicDisc[j],_musicDisc[j+1]);
                sort = true;
            }
        }
    }
}






