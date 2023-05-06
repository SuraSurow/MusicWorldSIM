//
// Created by surow on 25/04/2023.
//
#include "ClassMusicText.h"

void MusicText::set_name ( string _str ) {name=std::move(_str);};

void MusicText::set_countChar ( size_t _num ){countChar=_num;};

string MusicText::gets_name ( ){return name;};

size_t MusicText::gets_countChar ( ){return countChar;};
