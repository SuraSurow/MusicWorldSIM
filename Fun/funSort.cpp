//
// Created by surow on 21/03/2023.
//
#include "../head/headHeadFile.h"
void sort ( Musician * _creator , const size_t *size){
    cout << "\n WYKONAWCY\nSortuje wg wieku od najmiejszego do najwiekszego\n";
    for(int i = 0 ; i < *size - 1 ; i++)
    {
        for(int j = 0 ; j < *size - 1 ; j ++ )
        {
            if(_creator[j].gets_age() > _creator[j+1].gets_age())
            {
                std::swap(_creator[j+1],_creator[j]);
            }
        }
    }
}
void sort ( Album ** _album , const size_t *size){
    cout << "\nALBUMY\nSortuje wg roku urodzenia wykonawcy od najmiejszego do najwiekszego\n";
    for(int i = 0 ; i < *size-1 ; i ++ )
    {
        for (int j = 0 ; j < *size-1 ; j++)
        {
            if(_album[j]->gets_yearCre() > _album[j+1]->gets_yearCre())
            {
                std::swap(_album[j],_album[j+1]);
            }
        }
    }
}
void sort ( Producent ** _prod , const size_t *size){
    cout << "\nPRODUCENCI\nSortuje wg ulubionego zakresu BPM (beat per minute) od najmiejszego do najwiekszego\n";
    for(int i = 0 ; i < *size-1 ; i ++ )
    {
        for (int j = 0 ; j < *size-1 ; j++)
        {
            if( _prod[j]->gets_FavoriteBPM() > _prod[ j + 1]->gets_FavoriteBPM())
            {
                std::swap(_prod[j], _prod[ j + 1]);
            }
        }
    }
}

void sort ( Music ** _musicDisc , const size_t *size){
    cout << "\nMUZYCZNE UTWORY\nSortuje wg roku wydania piosenka od najmiejszego do najwiekszego\n";
    for(int i = 0 ; i < *size-1 ; i ++ )
    {
        for (int j = 0 ; j < *size-1 ; j++)
        {
            if(_musicDisc[j]->gets_yearMusic() > _musicDisc[j+1]->gets_yearMusic())
            {
                std::swap(_musicDisc[j],_musicDisc[j+1]);
            }
        }
    }
}






