//
// Created by surow on 20/04/2023.
//

#ifndef LAB_CLASSALBUM_H
#define LAB_CLASSALBUM_H
using namespace std;

#include "../head/headLib.h"
#include "ClassMusician.h"
#pragma once
class Album {
private:
    string nameCre;
    string surnameCre;
    string nameAl;
    string typeAl;
    size_t yearCre{}  ;
    size_t countSong{} ;
    static Album * lastAlbum;
public:
    friend ostream& operator<<(ofstream& output, Album& album);

    friend ostream& operator<<(ostream& os ,const Album& album);



    Album ( string  nameCre , string  surnameCre , string  nameAl , string  typeAl , size_t yearCre , size_t countSong ) :
            nameCre(std::move(nameCre)),
            surnameCre(std::move(surnameCre)),
            nameAl(std::move(nameAl)) ,
            typeAl(std::move(typeAl)),
            yearCre(yearCre),
            countSong(countSong) {}
    Album ( const Album & anotherOne) = default;

    Album(){
        nameCre = "none";
        surnameCre = "none";
        nameAl = "none";
        typeAl = "none";
        yearCre = 0;
        countSong = 0;
        lastAlbum = this;
    }
    ~Album(){
        lastAlbum = nullptr;
    }



    //----------set------------
    void set_nameCre ( string _str );
    void set_surnameCre ( string _str ) ;
    void set_nameAl ( string _str ) ;
    void set_typeAl ( string _str ) ;
    void set_yearCre ( size_t _num ) ;
    void set_countSong ( size_t _num ) ;
    //----------gets---------------
    string gets_nameCre ()const ;
    string gets_surnameCre ()const ;
    string gets_nameAl ()const ;
    string gets_typeAl ()const ;
    [[nodiscard]] size_t gets_yearCre () const ;
    [[nodiscard]] size_t gets_countSong () const ;
    static Album * gets_lastObj() ;
};
#endif //LAB_CLASSALBUM_H
