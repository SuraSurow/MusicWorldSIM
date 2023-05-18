//
// Created by surow on 20/04/2023.
//

#ifndef LAB_CLASSMUSIC_H
#define LAB_CLASSMUSIC_H
using namespace std;
#include "../head/headLib.h"


class Music {
private:
    string nameCre; //
    string surnameCre; //
    string nameMusic;
    string typeMusic;
    size_t  secondMusic{} ;
    size_t yearMusic{} ;
    static Music* lastMusic;
    static bool visible;
//( const string & type , const string & surname , const string & nameMusic , const string & typeMusic , size_t secondMusic , size_t yearMusic ):
public:
    friend ostream& operator<<(ofstream& output, Music& music);

    friend ostream& operator<<(ostream& os ,const Music& music);

    friend istream& operator>>(ifstream& input, Music& music);



    Music(const string& _songName) : nameMusic(_songName) {}

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
    string gets_nameCre ()const;
    string gets_surnameCre ()const;
    string gets_nameMusic () const;
    string gets_typeMusic  () const ;
    size_t gets_yearMusic () const ;
    size_t gets_secondMusic () const ;
    static Music * gets_lastObj() ;

    void set_visible(bool);

};








#endif //LAB_CLASSMUSIC_H
