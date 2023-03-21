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
    static size_t random = 0;
    random +=1;
    if(random >= 12 ){random =0;}
    return randName[random];
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
    static size_t random = 0;
    random +=1;
    if(random >= 12 ){random =0;}
    return randSurname[random];

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
    static size_t random = 0;
    random +=1;
    if(random >= 10 ){random =0;}
    return albumName[random];
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
    static size_t random = 0;
    random +=1;
    if(random >= 10 ){random =0;}
    return musicType[random];
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
    static size_t random = 0;
    random +=1;
    if(random >= 29 ){random =0;}
    return randNameMusic[random];

}



size_t randSize_t (int min, int max)
{
    static int number = 0;
    number +=min+1;
    if (number >= max ){number = min;};
    return number;

}





