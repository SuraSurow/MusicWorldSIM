//
// Created by surow on 25/04/2023.
//
#include "ClassBeat.h"
void Beat::set_type ( string _str ) {type=std::move(_str);};

void Beat::set_BPM ( size_t _num ){BPM=_num;};

string Beat::gets_type ( ){return type;};

size_t Beat::gets_BPM ( ){return BPM;};