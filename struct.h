#include <utility>

//
// Created by surow on 20/03/2023.
//

#ifndef LAB_STRUCT_H
#define LAB_STRUCT_H

#define EXIT 0
#define CREATE 1
#define INITIALIZE 2
#define PRINT 3
#define ADD 4
#define DELETE 5
#define SORT 6
#define EDIT 7
#define MIN 1
#define MAX 100


using
        std::string,
        std::cout,
        std:: cin;





class musicDisc {
private:
    string nameCre; //
    string surnameCre; //
    string nameMusic;
    string typeMusic;
    size_t  secondMusic{} ;
    size_t yearMusic{} ;
//( const string & nameCre , const string & surnameCre , const string & nameMusic , const string & typeMusic , size_t secondMusic , size_t yearMusic ):
public:
    musicDisc ( string  nameCre , string  surnameCre , string  nameMusic , string  typeMusic , size_t secondMusic , size_t yearMusic ):
            nameCre(std::move(nameCre)),
            surnameCre(std::move(surnameCre)),//surnameCre
            nameMusic(std::move(nameMusic)) ,
            typeMusic(std::move(typeMusic)),
            secondMusic(secondMusic),
            yearMusic(yearMusic) {}

    musicDisc ( const musicDisc & anotherOne) = default;

    musicDisc ()
    {
        nameCre = "none";
        surnameCre = "none";
        nameMusic = "none";
        typeMusic = "none";
        secondMusic = 0;
        yearMusic = 0;
    }



    //----------set------------
    void set_nameCre ( string _str ) { nameCre = std::move(_str);}
    void set_surnameCre ( string _str ) { surnameCre = std::move(_str);}
    void set_nameMusic ( string _str ) { nameMusic = std::move(_str);}
    void set_typeMusic ( string _str ) { typeMusic = std::move(_str);}
    void set_yearMusic ( size_t _num ) { yearMusic = _num;}
    void set_secondMusic ( size_t _num ) { secondMusic = _num;}
    //----------gets---------------
    auto gets_nameCre () { return nameCre ;}
    auto gets_surnameCre () { return surnameCre ;}
    auto gets_nameMusic () { return nameMusic ;}
    auto gets_typeMusic () { return typeMusic ;}
    [[nodiscard]] auto gets_yearMusic () const { return yearMusic ;}
    [[nodiscard]] auto gets_secondMusic () const { return secondMusic ;}
};
//

class album {
private:
    string nameCre;
    string surnameCre;
    string nameAl;
    string typeAl;
    size_t yearCre{}  ;
    size_t countSong{} ;
    musicDisc ** musicDisc_obj{};
public:
    album ( string  nameCre , string  surnameCre , string  nameAl , string  typeAl , size_t yearCre , size_t countSong ) :
            nameCre(std::move(nameCre)),
            surnameCre(std::move(surnameCre)),
            nameAl(std::move(nameAl)) ,
            typeAl(std::move(typeAl)),
            yearCre(yearCre),
            countSong(countSong) {}
    album ( const album & anotherOne) = default;
    album (string & nameCre , const string & surnameCre , const string & nameMusic , const string & typeMusic , size_t secondMusic , size_t yearMusic,size_t sizeMusicList ){
        for (int i = 0 ; i < sizeMusicList ; i++)
        {
            musicDisc_obj[i] = new  musicDisc(nameCre ,surnameCre , nameMusic , typeMusic ,  secondMusic ,yearMusic );
        }
    }
    album(){
        nameCre = "none";
        surnameCre = "none";
        nameAl = "none";
        typeAl = "none";
        yearCre = 0;
        countSong = 0;
    }
    ~album() {
        for (int i = 0 ; i < 10 ; i++)
        {
           delete musicDisc_obj[i];
        }
    }
    /*
    void resetArray() {
        for (int i = 0; i < 10; i++) {
            delete musicDisc_obj[i];
            musicDisc_obj[i] = nullptr;
        }
    }
    void resizeArray(int newSize) {
        if (newSize < 0 || newSize > 10) {
            std::cout << "Invalid size!\n";
            return;
        }

        for (int i = newSize; i < 10; i++) {
            delete musicDisc_obj[i];
            musicDisc_obj[i] = nullptr;
        }
    }
     */


    //----------set------------
    void set_nameCre ( string _str ) { nameCre = std::move(_str);}
    void set_surnameCre ( string _str ) { surnameCre = std::move(_str);}
    void set_nameAl ( string _str ) { nameAl = std::move(_str);}
    void set_typeAl ( string _str ) { typeAl = std::move(_str);}
    void set_yearCre ( size_t _num ) { yearCre = _num;}
    void set_countSong ( size_t _num ) { countSong = _num;}
    //----------gets---------------
    auto gets_nameCre () { return nameCre ;}
    auto gets_surnameCre () { return surnameCre ;}
    auto gets_nameAl () { return nameAl ;}
    auto gets_typeAl () { return typeAl ;}
    [[nodiscard]] auto gets_yearCre () const { return yearCre ;}
    [[nodiscard]] auto gets_countSong () const { return countSong ;}

};

class creator {
private:
    string nameCre ;
    string surnameCre;
    size_t ageCre{} ;
    size_t yearCre{} ;
    size_t monthCre{} ;
    size_t dayCre{} ;
public:
    //kostruktor init
    creator( string  nameCre ,string  surnameCre,size_t  ageCre , size_t  yearCre, size_t  monthCre , size_t  dayCre)
             : nameCre(std::move(nameCre)) ,
             surnameCre(std::move(surnameCre)),
             ageCre(ageCre) ,
             yearCre(yearCre),
             monthCre(monthCre) ,
             dayCre(dayCre) {}
    creator(const creator& anotherOne) = default;

    creator ()
    {
        nameCre = "none";
        surnameCre = "none";
        ageCre = 0;
        yearCre = 0;
        monthCre = 0 ;
        dayCre = 0 ;
    }

    //----------set------------
    void set_nameCre ( string _str ) { nameCre = std::move(_str);}
    void set_surnameCre ( string _str ) { surnameCre = std::move(_str);}
    void set_ageCre ( size_t _num ) { ageCre = _num;}
    void set_yearCre ( size_t _num ) { yearCre = _num;}
    void set_monthCre ( size_t _num ) { monthCre = _num;}
    void set_dayCre ( size_t _num ) { dayCre = _num;}
    //----------gets---------------
    auto gets_nameCre () { return nameCre ;}
    auto gets_surnameCre () { return surnameCre ;}
    [[nodiscard]] auto gets_ageCre () const { return ageCre ;}
    [[nodiscard]] auto gets_yearCre () const { return yearCre ;}
    [[nodiscard]] auto gets_monthCre () const { return monthCre ;}
    [[nodiscard]] auto gets_dayCre () const { return dayCre ;}
    //create

};
//







#endif //LAB_STRUCT_H
