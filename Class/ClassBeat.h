//
// Created by surow on 25/04/2023.
//

#ifndef LAB_CLASSBEAT_H
#define LAB_CLASSBEAT_H

using namespace std;
#include <iostream>
#include <string>

class Beat {
private:
    string type;
    size_t BPM;

public:

    Beat ( string type, size_t BPM )
            : type(std::move(type)),
              BPM(BPM) {}

    Beat ( const Beat &anotherOne ) = default;

    Beat ( ) {
        type = "none";
        BPM = 0;
    }

    void set_type ( string _str );

    void set_BPM ( size_t _num );

    string gets_type ( );

    size_t gets_BPM ( );
};

#endif //LAB_CLASSBEAT_H
