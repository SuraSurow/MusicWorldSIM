#include "ClassAlbum.h"
void Album::set_nameCre ( string _str ) { nameCre = std::move(_str);}
void Album::set_surnameCre ( string _str ) { surnameCre = std::move(_str);}
void Album::set_nameAl ( string _str ) { nameAl = std::move(_str);}
void Album::set_typeAl ( string _str ) { typeAl = std::move(_str);}
void Album::set_yearCre ( size_t _num ) { yearCre = _num;}
void Album::set_countSong ( size_t _num ) { countSong = _num;}
//----------gets---------------
string Album::gets_nameCre () { return nameCre ;}
string Album::gets_surnameCre () { return surnameCre ;}
string Album::gets_nameAl () { return nameAl ;}
string Album::gets_typeAl () { return typeAl ;}
[[nodiscard]] size_t Album::gets_yearCre () const { return yearCre ;}
[[nodiscard]] size_t Album::gets_countSong () const { return countSong ;}

Album* Album::gets_lastObj(){return lastAlbum;}
Album* Album::lastAlbum = nullptr;