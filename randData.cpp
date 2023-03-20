//
// Created by surow on 14/03/2023.
//

#include "headFile.h"

string randName()
{
   const string  randName [12]{
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
    int _return = rand() % (sizeof(randName)/sizeof(randName[0])) ;
    string ret = randName[_return];
    return ret;
}
string randSurname () {

    const string randSurname[12]{
            {"Surowiecki"},
            {"Nowak"},
            {"Kaczor"},
            {"Bocian"},
            {"Kowalski"},
            {"Slusarski"},
            {"Karaluch"},
            {"Brzeczyszczykiewicz"},
            {"Konstantyniewicz"},
            {"Mickiewicz"},
            {"Kopernik"},
            {"Piast"}
    };
    srand(time(nullptr));
    int _return = rand() % (sizeof(randSurname)/sizeof(randSurname[0])) ;
        string ret = randSurname[_return];
    return ret;

}
string randAlbumName ()
{
    string albumName [10]{
            {"Milosc"},
            {"Szczescie"},
            {"Radosc"},
            {"Silownia"},
            {"Zycie"},
            {"Lato"},
            {"Szczerosc"},
            {"Abecadlo"},
            {"Warszawa"},
            {"Park_Nicosci"},
            };
    srand(time(nullptr));
    int _return = rand() % (sizeof(albumName)/sizeof(albumName[0])) ;
    string ret = albumName[_return];
    return ret;
}

string randTypeMusic()
{
    string musicType [10]{
            {"Classic"},
            {"Jazz"},
            {"Rock_and_Roll"},
            {"Pop"},
             {"Metal"},
            {"Electronic"},
            {"Hip-Hop"},
            {"Punk"},
            {"Reggae"},
            {"Disco"},
            };
    srand(time(nullptr));
    int _return = rand() % (sizeof(musicType)/sizeof(musicType[0])) ;
    string ret = musicType[_return];
    return ret;
}

string randNameMusic ()
{
    string randNameMusic [30]{
            {"reception"},{"classroom"},{"literature"},{"requirement"},{"dinner"},
            {"surgery"},{"bedroom"},{"potato"},{"insect"},{"region"},
            {"failure"},{"chest"},{"imagination"},{"salad"},{"chest"},
            {"inspector"},{"bath"},{"science"},{"setting"},{"internet"},
            {"map"},{"energy"},{"accident"},{"member"},{"distribution"},
            {"shirt"},{"grocery"},{"church"},{"appointment"},{"association"},

    };
    srand(time(nullptr));
    int _return = rand() % (sizeof(randNameMusic)/sizeof(randNameMusic[0])) ;
    string ret = randNameMusic[_return];
    return ret;

}



size_t randSize_t (int min, int max)
{
    srand(time(nullptr));
    size_t _return;
    int a;
    a=(max-min);
    _return = rand() % a + min;
    return _return;
}





