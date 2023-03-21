//
// Created by surow on 21/03/2023.
//

#ifndef LAB_SORT_H
#define LAB_SORT_H

#include "headFile.h"

namespace sortName {
    const int creator = 1;
    const int album = 2;
    const int musicDisc = 3;
}



int sort (creator *_creator , size_t *size );
int sort (album **_album , size_t *size );
int sort (musicDisc **_musicDisc , size_t *size );

void sortMenu ();



#endif //LAB_SORT_H
