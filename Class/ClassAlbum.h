//
// Created by surow on 20/04/2023.
//

#ifndef LAB_CLASSALBUM_H
#define LAB_CLASSALBUM_H
using namespace std;

#include "../head/headLib.h"
#include "ClassMusician.h"
#include "ClassMusic.h"
#pragma once
class Album {
private:
    string nameCre;
    string surnameCre;
    string nameAl;
    string typeAl;
    size_t yearCre;
    static Album *lastAlbum;
    static bool visible;
public:
    friend ostream& operator<<(ofstream& output, Album& album);

    friend ostream& operator<<(ostream& os ,const Album& album);

    friend istream& operator>>(ifstream& input, Album& album);


    Album(string nameCre, string surnameCre, string nameAl, string typeAl, size_t yearCre) :
            nameCre(std::move(nameCre)),
            surnameCre(std::move(surnameCre)),
            nameAl(std::move(nameAl)),
            typeAl(std::move(typeAl)),
            yearCre(yearCre)
             {}

    Album(const Album& anotherOne) = default;

    Album() {
        nameCre = "none";
        surnameCre = "none";
        nameAl = "none";
        typeAl = "none";
        yearCre = 0;
        lastAlbum = this;
    }

    ~Album() {
        lastAlbum = nullptr;
    }



    //----------set------------
    void set_nameCre(string _str);
    void set_surnameCre(string _str);
    void set_nameAl(string _str);
    void set_typeAl(string _str);
    void set_yearCre(size_t _num);


    //----------gets---------------
    string gets_nameCre() const;
    string gets_surnameCre() const;
    string gets_nameAl() const;
    string gets_typeAl() const;
    [[nodiscard]] size_t gets_yearCre() const;
    static Album* gets_lastObj();


    void set_visible(bool);
};
#endif //LAB_CLASSALBUM_H