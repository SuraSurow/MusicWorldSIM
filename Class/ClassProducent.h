//
// Created by surow on 22/04/2023.
//

#ifndef LAB_CLASSPRODUCENT_H
#define LAB_CLASSPRODUCENT_H


using namespace std;
#include <iostream>
#include <ostream>
#include <string>
#include "ClassPerson.h"
#include "ClassMusician.h"

class Producent : public Person{
private:
    string expertiseArea;
    size_t hasGrammyAward;
    size_t FavoriteBPM;
    size_t numOfProductions;
    Musician * coWorker{};
    static bool visible;
public:


    friend ostream& operator<<(ostream& os , const Producent& prod);

    friend ostream& operator<<(ofstream& output, Producent& prod);

    friend ifstream& operator>>(ifstream& input, Producent& prod);

    Producent* operator->() {
        return this;
    }

    Producent( const Producent& anotherOne) = default;
    Producent( string name, string surname , size_t age , size_t year , size_t month , size_t day , string expertiseArea,
               size_t hasGrammyAward , size_t FavoriteBPM ,size_t numOfProduction)
            : expertiseArea(std::move(expertiseArea)),
            hasGrammyAward(hasGrammyAward),
            FavoriteBPM(FavoriteBPM),
            numOfProductions(numOfProduction){}

    ~Producent() {
        delete coWorker;
    }

    Producent () {
        set_name("none");
        set_surname("none");
        set_age(0);
        set_year(0);
        set_month(0);
        set_day(0);
        set_expertiseArea("none");
        set_hasGrammyAward(0);
        set_FavoriteBPM(0);
        set_numOfProductions(0);
        coWorker = new Musician;
    }

    void doSomething ()override;
    //  declatarion
    void set_expertiseArea ( string _str );
    void set_hasGrammyAward ( size_t _boolean);
    void set_FavoriteBPM ( size_t _num);
    void set_numOfProductions ( size_t _num);
    void set_coWorker ( Musician & obj);
    void set_coWorker (Musician * obj);
    //--------------------------------
    string gets_expertiseArea () const ;
    size_t gets_hasGrammyAward() const ;
    size_t gets_FavoriteBPM() const ;
    size_t gets_numOfProductions() const ;
    Musician* gets_coWorker () const;

    void set_visible(bool);
    //--------------------------------
};






#endif //LAB_CLASSPRODUCENT_H
