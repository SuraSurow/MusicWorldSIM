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
    std::default_random_engine randomGenerator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<size_t> _rand_(0, 11);
    size_t temp = _rand_(randomGenerator);
    return randName[temp];
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
    std::default_random_engine randomGenerator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<size_t> _rand_(0, 11);
    size_t temp = _rand_(randomGenerator);
    return randSurname[temp];

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
    std::default_random_engine randomGenerator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<size_t> _rand_(0, 9);
    size_t temp = _rand_(randomGenerator);
    return albumName[temp];
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
    std::default_random_engine randomGenerator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<size_t> _rand_(0, 9);
    size_t temp = _rand_(randomGenerator);
    return musicType[temp];
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
    std::default_random_engine randomGenerator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<size_t> _rand_(0, 29);
    size_t temp = _rand_(randomGenerator);
    return randNameMusic[temp];


}



void randSize_t(size_t * temp, int min, int max)
{
    std::default_random_engine randomGenerator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<size_t> _rand_(min, max);
    *temp = _rand_(randomGenerator);
}





