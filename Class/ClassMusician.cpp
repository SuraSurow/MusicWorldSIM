//
// Created by surow on 20/04/2023.
//
#include "ClassMusician.h"
#include "ClassMusicText.h"
void Musician::set_distCompany ( string _str ) { distributionCompany=std::move(_str);}
void Musician::set_nickName ( string _str) { nickName=std::move(_str);}
void Musician::set_workExp ( size_t _num) { workExp=_num;}

string Musician::gets_distCompany (  ) const {return distributionCompany;}
string Musician::gets_nickName (  )const  {return nickName;}
size_t Musician::gets_workExp (  ) const {return workExp;}

void Musician::doSomething ( ) {
    cout << "\n Jako ze jestem Muzykiem to Stworze Objekt 'musicText'";
    MusicText musicText ("I love so much C !!! ",432);
    cout << "\tNazwa tekstu: " << musicText.gets_name();
    cout << "\nLiczba znakow tekstu" << musicText.gets_countChar();
    cout << "\n--------------------------";

}
