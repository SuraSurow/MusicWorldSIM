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
void Producent::set_coWorker ( Musician & _musician)
{
    editPressing(&_musician,0); //potem dopisze to fun EDIT !!!!!!
}
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
    Beat beat (randStringData(beat_txt_path_file, "Beat.txt"), randSize_t(30, 200));
    cout << "\t typ bitu: " << beat.gets_type();
    cout << "\n to wartosc BPM( Beat per minute) " << beat.gets_BPM();
    cout << "\n--------------------------";
}
ostream& operator<<(ofstream& output, Producent& prod) {
    output << prod.gets_name() << ";"
    << prod.gets_surname()<< ";"
    << prod.gets_age()<< ";"
    << prod.gets_year()<< ";"
    << prod.gets_month()<< ";"
    << prod.gets_day()<< ";"
    << prod.gets_expertiseArea()<< ";"
    << prod.gets_hasGrammyAward()<< ";"
    << prod.gets_FavoriteBPM()<< ";"
    << prod.gets_numOfProductions()<<endl;
    return output;
}

ostream& operator<<(ostream& os,const Producent& prod) {
    os << "Name:\t" << prod.gets_name() << "  Surname:" << prod.gets_surname() << endl;
    os << "Age:\t" << prod.gets_age() << "\tYear:"<<prod.gets_year() <<"\tMonth:"<<prod.gets_month()<<" \tDay:"<<prod.gets_day() << endl;
    os << "Expertise area:\t" << prod.gets_expertiseArea() << endl;
    os << "Has Grammy Award:\t" << prod.gets_hasGrammyAward() << endl;
    os << "Favorite BPM:\t" << prod.gets_FavoriteBPM() << endl;
    os << "Number of productions:\t" << prod.gets_numOfProductions() << endl;
    if (prod.gets_coWorker() != nullptr) {
        os << "-----------------\n| Co-worker: "
        << prod.gets_coWorker()->gets_name() << " "
        << prod.gets_coWorker()->gets_surname() << endl;
        os << "| Also Knows Us : " << prod.gets_coWorker()->gets_nickName() << endl;
        os << "-----------------";
    } else {
        os << "Co-worker: None" << endl;
    }
    return os;
}







