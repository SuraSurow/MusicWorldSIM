//
// Created by surow on 21/03/2023.
//
#include "headFile.h"
int sort (creator * _creator ,size_t *size)
{
    cout << "\n\nThis function sort age From the smallest to the largest ";
    auto *temp = new creator[*size];
    for (int i=0; i < *size ; i++) {
        temp[ i ].ageCre = _creator[ i ].ageCre;
    }
    size_t bubble = *size;

    while ( bubble != 0)
    {

        for (int i = 0 ; i < bubble ; i++ )
        {
            if(temp[i].ageCre > temp[i+1].ageCre)
            {
                cout << "\n przedtemp[i] = " << temp[i].ageCre;
                cout << "\n przedtemp[i+1] = " << temp[i+1].ageCre;
                size_t _temp;
                _temp = temp[i].ageCre;
                temp[i].ageCre=temp[i+1].ageCre;
                temp[i+1].ageCre=_temp;
                cout << "\n potemp[i] = " << temp[i].ageCre;
                cout << "\n potemp[i+1] = " << temp[i+1].ageCre;
            }
        }
        bubble--;
    }


return 0;
}
int sort (album ** _album ,size_t *size)
{
    return 0;
}

int sort (musicDisc ** _musicDisc ,size_t *size)
{
    return 0;
}


void sortMenu ()
{
    cout << "\nChoice what's do you want sort?"
    <<"\n1.Creator"
    <<"\n2.Album"
    <<"\n3.MusicDisc";

}
