//
// Created by surow on 14/03/2023.
//

#include "headFile.h"

string randName()
{
    const char randName [12][15]{
            {"Wojciech"},
            {"Andrzej"},
            {"Antek"},
            {"Gerwazy"},
            {"Bonifacy"},
            {"Wladyslaw"},
            {"Jabuk"},
            {"Lech"},
            {"Dorian"},
            {"Oskar"},
            {"Kazimierz"},
            {"Radoslaw"}
    };
    srand(time(nullptr));
    int v1 = rand() % (sizeof(randName)/sizeof(randName[0])) ;
    cout << v1;
    string ret = randName[v1];
    return ret;
}
