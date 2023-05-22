#include "ClassAlbum.h"
#include "ClassMusic.h"
#include "../Fun/funCreate.h"
void Album::set_nameCre ( string _str ) { nameCre = std::move(_str);}
void Album::set_surnameCre ( string _str ) { surnameCre = std::move(_str);}
void Album::set_nameAl ( string _str ) { nameAl = std::move(_str);}
void Album::set_typeAl ( string _str ) { typeAl = std::move(_str);}
void Album::set_yearCre ( size_t _num ) { yearCre = _num;}

//----------gets---------------
string Album::gets_nameCre () const { return nameCre ;}
string Album::gets_surnameCre () const{ return surnameCre ;}
string Album::gets_nameAl ()const { return nameAl ;}
string Album::gets_typeAl () const{ return typeAl ;}
size_t Album::gets_yearCre () const { return yearCre ;}


Album * Album::gets_lastObj(){return lastAlbum;}
Album * Album::lastAlbum = nullptr;



ostream& operator<<(ofstream& output, Album& album) {
    output << album.gets_nameCre() << ";"
           << album.gets_surnameCre() << ";"
           << album.gets_nameAl() << ";"
           << album.gets_typeAl() << ";"
           << album.gets_yearCre()<< endl;
    return output;
}
ostream& operator<<(ostream& os ,const Album& album)
{
    os <<"Name Creator: " << album.gets_nameCre() << "\n"
    <<"Surname Creator: " << album.gets_surnameCre() << "\n"
    <<"Name Album: " << album.gets_nameAl()<< "\n"
    <<"Type Music: " << album.gets_typeAl() << "\n"
    <<"Year create: " << album.gets_yearCre() << "\n";
    return os;
}







istream& operator>>(ifstream& input, Album& album) {
    string line;
    getline(input, line);
    stringstream ss(line);
    string nameCre , surnameCre , nameAL , typeAl;
    size_t yearCre ;
    // Odczytaj poszczególne części linii i przypisz do odpowiednich zmiennych
    getline(ss, nameCre, ';');
    getline(ss, surnameCre, ';');
    getline(ss, nameAL, ';');
    getline(ss , typeAl, ';');
    ss >> yearCre;ss.ignore();


        album.set_nameCre(nameCre);
        album.set_surnameCre(surnameCre);
        album.set_nameAl(nameAL);
        album.set_typeAl(typeAl);
        album.set_yearCre(yearCre);

  return input;
}










ArrayAlbum::ArrayAlbum ( Album ** _ptr , size_t _size = 0 ) {
    size = _size;
    ptr = nullptr;
    if (_size != 0 || _size > 0) {
        ptr = new Album*[_size];
        for (int i = 0; i < _size; i++)
            ptr[i] = _ptr[i];
    }
}
Album *& ArrayAlbum::operator[](size_t index)
{
    if (index < 0 || index >= size) {
        cout << "ERROR , OUT OF MEMORY 'index out of tab!!!' ";
        exit(0);
    }
    return ptr[index];
}

void ArrayAlbum::print() const
{
    for (int i = 0; i < size; i++) {
        cout <<"Name Creator: " << ptr[i]->gets_nameCre() << "\n"
        << "Surname Creator: " << ptr[i]->gets_surnameCre() << "\n"
        << "Name Album: " << ptr[i]->gets_nameAl() << "\n"
        << "Type Music: " << ptr[i]->gets_typeAl() << "\n"
        << "Year create: " << ptr[i]->gets_yearCre() << "\n"
        << "--------------------------------\n";
    }
}
