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
    size_t bubble = *size ;
    for ( int i = 0 ; i < --bubble ; i++ )
    {
        for ( int j = 0 ; j < *size - 1 ; j ++  )
        {
            if(temp[ i ].ageCre > temp[ i + 1 ].ageCre ){
                size_t _temp = 0;
                _temp = temp[i].ageCre;
                temp[i + 1].ageCre = temp[i].ageCre;
                temp[i].ageCre=_temp;
            }
        }

    }
    for ( int  i = 0 ; i < *size ; i ++ )
    {
       _creator [ i ].ageCre = temp [ i ].ageCre;
    }
return 0;
}



