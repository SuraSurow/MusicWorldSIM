//
// Created by surow on 25/04/2023.
//
#include "ClassBeat.h"
void Beat::set_type ( string _str ) {type=std::move(_str);};

void Beat::set_BPM ( size_t _num ){BPM=_num;};

string Beat::gets_type ( ){return type;};

size_t Beat::gets_BPM ( ){return BPM;};

ostream& operator<<(ostream& os , Beat beat)
{
    os << "type of Beat: " << beat.gets_type() << endl;
    os << "Beat Per Minute: " << beat.gets_BPM() << endl;
    return os;
}