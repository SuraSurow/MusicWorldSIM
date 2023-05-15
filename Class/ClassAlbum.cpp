#include "ClassAlbum.h"
void Album::set_nameCre ( string _str ) { nameCre = std::move(_str);}
void Album::set_surnameCre ( string _str ) { surnameCre = std::move(_str);}
void Album::set_nameAl ( string _str ) { nameAl = std::move(_str);}
void Album::set_typeAl ( string _str ) { typeAl = std::move(_str);}
void Album::set_yearCre ( size_t _num ) { yearCre = _num;}
void Album::set_countSong ( size_t _num ) { countSong = _num;}
//----------gets---------------
string Album::gets_nameCre () const { return nameCre ;}
string Album::gets_surnameCre () const{ return surnameCre ;}
string Album::gets_nameAl ()const { return nameAl ;}
string Album::gets_typeAl () const{ return typeAl ;}
[[nodiscard]] size_t Album::gets_yearCre () const { return yearCre ;}
[[nodiscard]] size_t Album::gets_countSong () const { return countSong ;}

Album * Album::gets_lastObj(){return lastAlbum;}
Album * Album::lastAlbum = nullptr;

ostream& operator<<(ofstream& output, Album& album) {
    output << album.gets_nameCre() << ";"
           << album.gets_surnameCre() << ";"
           << album.gets_nameAl() << ";"
           << album.gets_typeAl() << ";"
           << album.gets_yearCre() << ";"
           << album.gets_countSong() << endl;
    return output;
}
ostream& operator<<(ostream& os ,const Album& album)
{
    os <<"Name Creator: " << album.gets_nameCre() << "\n"
    <<"Surname Creator: " << album.gets_surnameCre() << "\n"
    <<"Name Album: " << album.gets_nameAl()<< "\n"
    <<"Type Music: " << album.gets_typeAl() << "\n"
    <<"Year create: " << album.gets_yearCre() << "\n"
    <<"Count of song: " << album.gets_countSong() << "\n";
    return os;
}

