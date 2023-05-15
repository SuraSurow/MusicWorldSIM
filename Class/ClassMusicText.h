//
// Created by surow on 25/04/2023.
//
using namespace std;
#include <iostream>
#include <string>

class MusicText {
private:
    string name;
    size_t countChar;

public:
    friend ostream& operator<< (ostream& os , MusicText text);

    MusicText ( string name, size_t countChar )
            : name(std::move(name)),
              countChar(countChar) {}

    MusicText ( const MusicText &anotherOne ) = default;

    MusicText ( ) {
        name = "none";
        countChar = 0;
    }

    void set_name ( string _str );

    void set_countChar ( size_t _num );

    string gets_name ( );

    size_t gets_countChar ( );
};