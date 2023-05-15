//
// Created by surow on 14/03/2023.
//

#include "../head/headHeadFile.h"



//             ../dataFile/examplesData/

string randStringData(string _path,string nameFile) {
    ifstream file(path(_path));
    cout << path(_path) << "\n";
    if ( !file ) {
        cerr << "Bład Otwarcia Pliku  ' " << nameFile << "'" << endl;
        return "";//aby funckja NIC nie zwracała w razie błędu
    }
    size_t num = 0;
    string strrrr;
    while ( getline(file, strrrr)) { ++num; }
    file.clear();
    file.seekg(0);
    random_device seed;     // ziarno poczatkowe
    mt19937 engine(seed()); // generator
    uniform_int_distribution<size_t> uniformDist(0, num);
    for ( size_t i = 0 ; i < uniformDist(engine) ; ++i ) {
        std::getline(file, strrrr);
    }
    return strrrr;
}


/*
string randSurname () {

    ifstream  file(path("\\dataFile\\examplesData\\surname.txt"));
    if(!file){
        cerr << "Bład Otwarcia Pliku  ' " <<"surname.txt"<<"'"<<endl;
        return "";//aby funckja NIC nie zwracała w razie błędu
    }
    size_t num_names = 0;
    string name;
    while (getline(file,name)){++num_names;}
    file.clear();
    file.seekg(0);
    random_device seed;     // ziarno poczatkowe
    mt19937 engine(seed()); // generator
    uniform_int_distribution<size_t> uniformDist(0, num_names);
    for (size_t i = 0; i < uniformDist(engine); ++i)
    {
        std::getline(file, name);
    }
    return name;

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
    random_device seed;     // ziarno poczatkowe
    mt19937 engine(seed()); // generator
    uniform_int_distribution<size_t> uniformDist(0, 29);
    return randNameMusic[uniformDist(engine)];


}
string randDistCompany()
{
    return "test";
}

string randNickName()
{
    return "test";
}

string randExertiseArea()
{
    return "test";
}


/*
size_t randSize_t(int min, int max)
{
    std::default_random_engine randomGenerator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<size_t> _rand_(min, max);
    size_t temp;
    temp = _rand_(randomGenerator);
    return temp;
}
*/


size_t randSize_t( int min, int max) {
    std::random_device seed;     // ziarno poczatkowe
    std::mt19937 engine(seed()); // generator
    std::uniform_int_distribution<size_t> uniformDist(min, max);
    return uniformDist(engine);
}


