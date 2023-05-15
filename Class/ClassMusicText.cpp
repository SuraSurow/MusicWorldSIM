//
// Created by surow on 25/04/2023.
//
#include "ClassMusicText.h"

void MusicText::set_name ( string _str ) {name=std::move(_str);};

void MusicText::set_countChar ( size_t _num ){countChar=_num;};

string MusicText::gets_name ( ){return name;};

size_t MusicText::gets_countChar ( ){return countChar;};

ostream& operator<< (ostream& os , MusicText text)
{
    os <<"Name Text: "<< text.gets_name() <<endl;
    os << "Count of Char" << text.gets_countChar() <<endl;
    return os;
}