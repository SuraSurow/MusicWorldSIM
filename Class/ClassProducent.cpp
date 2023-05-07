//
// Created by surow on 22/04/2023.
//
#include "ClassProducent.h"
#include "../Fun/funRandData.h"
#include "../head/headHeadFile.h"

void Producent::set_expertiseArea ( string _str ){ expertiseArea=std::move(_str);}
void Producent::set_hasGrammyAward ( size_t _num){hasGrammyAward=_num;}
void Producent::set_FavoriteBPM ( size_t _num){FavoriteBPM=_num;}
void Producent::set_numOfProductions ( size_t _num){numOfProductions=_num;}
void Producent::set_coWorker ( Musician & obj){coWorker= &obj ;}
//--------------------------------
string Producent::gets_expertiseArea () const { return expertiseArea;}
size_t Producent::gets_hasGrammyAward() const { return hasGrammyAward;}
size_t Producent::gets_FavoriteBPM() const { return FavoriteBPM;}
size_t Producent::gets_numOfProductions() const { return numOfProductions;}
Musician* Producent::gets_coWorker ( ) const { if(coWorker!=nullptr)return coWorker;
    return nullptr;
}

void Producent::doSomething(){
    cout << "\n Jako ze jestem Producentem to Stworze Objekt 'beat'";
    Beat beat (randStringData(Beat_txt_path_file,"Beat.txt"), randSize_t(30,200));
    cout << "\t typ bitu: " << beat.gets_type();
    cout << "\n to wartosc BPM( Beat per minute) " << beat.gets_BPM();
    cout << "\n--------------------------";
};





