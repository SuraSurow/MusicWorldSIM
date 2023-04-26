//
// Created by surow on 20/04/2023.
//

#ifndef LAB_CLASSMUSIC_H
#define LAB_CLASSMUSIC_H
using namespace std;
#include <iostream>
#include <string>


class Music {
private:
    string nameCre; //
    string surnameCre; //
    string nameMusic;
    string typeMusic;
    size_t  secondMusic{} ;
    size_t yearMusic{} ;
    static Music* lastMusic;
//( const string & name , const string & surname , const string & nameMusic , const string & typeMusic , size_t secondMusic , size_t yearMusic ):
public:
    Music ( string  nameCre , string  surnameCre , string  nameMusic , string  typeMusic , size_t secondMusic , size_t yearMusic ):
            nameCre(std::move(nameCre)),
            surnameCre(std::move(surnameCre)),
            nameMusic(std::move(nameMusic)) ,
            typeMusic(std::move(typeMusic)),
            secondMusic(secondMusic),
            yearMusic(yearMusic){}


    Music ( const Music & anotherOne) = default;
    Music ()
    {
        nameCre = "none";
        surnameCre = "none";
        nameMusic = "none";
        typeMusic = "none";
        secondMusic = 0;
        yearMusic = 0;
        lastMusic = this;
    }
    ~Music(){
        delete lastMusic;
        lastMusic = nullptr;
    }

    //----------set------------
    void set_nameCre ( string _str );
    void set_surnameCre ( string _str );
    void set_nameMusic ( string _str ) ;
    void set_typeMusic ( string _str ) ;
    void set_yearMusic ( size_t _num ) ;
    void set_secondMusic ( size_t _num ) ;

    //----------gets---------------
    string gets_nameCre ();
    string gets_surnameCre ();
    string gets_nameMusic () ;
    string gets_typeMusic () ;
    [[nodiscard]] size_t gets_yearMusic () const ;
    [[nodiscard]] size_t gets_secondMusic () const ;
    static Music * gets_lastObj() ;

};








#endif //LAB_CLASSMUSIC_H
