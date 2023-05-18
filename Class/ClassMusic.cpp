#include "ClassMusic.h"
#include "../head/headLib.h"


void Music::set_nameCre ( string _str ) { nameCre = std::move(_str);}
void Music::set_surnameCre ( string _str ) { surnameCre = std::move(_str);}
void Music::set_nameMusic ( string _str ) { nameMusic = std::move(_str);}
void Music::set_typeMusic ( string _str ) { typeMusic = std::move(_str);}
void Music::set_yearMusic ( size_t _num ) { yearMusic = _num;}
void Music::set_secondMusic ( size_t _num ) { secondMusic = _num;}

//----------gets---------------
string Music::gets_nameCre () const { return nameCre ;}
string Music::gets_surnameCre () const { return surnameCre ;}
string Music::gets_nameMusic () const { return nameMusic ;}
string Music::gets_typeMusic () const { return typeMusic ;}
[[nodiscard]] size_t Music::gets_yearMusic () const { return yearMusic ;}
[[nodiscard]] size_t Music::gets_secondMusic () const { return secondMusic ;}

Music * Music::gets_lastObj(){return lastMusic;}
Music * Music::lastMusic = nullptr;

ostream& operator<<(ofstream& output, Music & music){
    output <<music.gets_nameCre() << ";"
           << music.gets_surnameCre() << ";"
           << music.gets_nameMusic()<<  ";"
           << music.gets_typeMusic() <<  ";"
           << music.gets_yearMusic() <<  ";"
           <<music.gets_secondMusic() << endl;
    return output;
}

ostream& operator<<(ostream& os,const  Music& music) {
    os <<"Name Musician -> " << music.gets_nameCre() << "\n"
            <<"Surname Musician -> " << music.gets_surnameCre() << "\n"
            <<"Name song -> " << music.gets_nameMusic()<< "\n"
            <<"Type Music -> " << music.gets_typeMusic() << "\n"
            <<"Year create -> " <<  music.gets_yearMusic() << "\n"
            <<"Time (second)-> " <<music.gets_secondMusic() << "\n"
            <<"----------------------------------";
    return os;
}

istream& operator>>(ifstream& input, Music& music) {
    string line;
    getline(input, line);
    stringstream ss(line);
    string nameCre , surnameCre , nameMusic , typeMusic;
    size_t secondMusic , yearMusic;
    // Odczytaj poszczególne części linii i przypisz do odpowiednich zmiennych
    getline(ss,nameCre,';');
    getline(ss,surnameCre,';');
    getline(ss,nameMusic,';');
    getline(ss,typeMusic,';');
    ss >> secondMusic ;ss.ignore();
    ss >> yearMusic;
    music.set_nameCre(nameCre);
    music.set_surnameCre(surnameCre);
    music.set_nameMusic(nameMusic);
    music.set_typeMusic(typeMusic);
    music.set_secondMusic(secondMusic);
    music.set_yearMusic(yearMusic);
    return input;
}

void Music::set_visible ( bool ) {

}






