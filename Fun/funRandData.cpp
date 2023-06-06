//
// Created by surow on 14/03/2023.
//

#include "../head/headHeadFile.h"



//             ../dataFile/examplesData/

string randStringData(string _path,string nameFile) {
    ifstream file(path(_path));
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





size_t randSize_t( int min, int max) {
    std::random_device seed;     // ziarno poczatkowe
    std::mt19937 engine(seed()); // generator
    std::uniform_int_distribution<size_t> uniformDist(min, max);
    return uniformDist(engine);
}


