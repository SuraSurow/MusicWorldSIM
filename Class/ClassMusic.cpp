#include "ClassMusic.h"

void Music::set_nameCre ( string _str ) { nameCre = std::move(_str);}
void Music::set_surnameCre ( string _str ) { surnameCre = std::move(_str);}
void Music::set_nameMusic ( string _str ) { nameMusic = std::move(_str);}
void Music::set_typeMusic ( string _str ) { typeMusic = std::move(_str);}
void Music::set_yearMusic ( size_t _num ) { yearMusic = _num;}
void Music::set_secondMusic ( size_t _num ) { secondMusic = _num;}

//----------gets---------------
string Music::gets_nameCre () { return nameCre ;}
string Music::gets_surnameCre () { return surnameCre ;}
string Music::gets_nameMusic () { return nameMusic ;}
string Music::gets_typeMusic () { return typeMusic ;}
[[nodiscard]] size_t Music::gets_yearMusic () const { return yearMusic ;}
[[nodiscard]] size_t Music::gets_secondMusic () const { return secondMusic ;}



Music* Music::gets_lastObj(){return lastMusic;}
Music* Music::lastMusic = nullptr;