//
// Created by surow on 20/04/2023.
//

#ifndef LAB_CLASSMUSICIAN_H
#define LAB_CLASSMUSICIAN_H


using namespace std;
#include <iostream>
#include <string>
#include "ClassPerson.h"
#include "ClassBeat.h"
#include "../head/headLib.h"


class Musician : public Person{
private:
    string distributionCompany;
    string nickName;
    size_t workExp;
    static bool visible;
public:

    friend ostream& operator<<(ostream& os ,const Musician& musician);

    friend ostream& operator<<(ofstream& output, Musician& musician);

    friend istream& operator>>(ifstream& input, Musician& musician);

    Musician* operator->() {
        return this;
    }

    Musician( const Musician& anotherOne) = default;
    Musician( const string& name, string surname , size_t age , size_t year , size_t month , size_t day,
              string distributionCompany, string nickName , size_t workExp)
            : distributionCompany(std::move(distributionCompany)),
              nickName(std::move(nickName)),
              workExp(workExp){}
    Musician ()
    {
        set_name("none");
        set_surname("none");
        set_age(0);
        set_year(0);
        set_month(0);
        set_day(0);
        set_distCompany("none");
        set_nickName("none");
        set_workExp(0);

    }

    void doSomething() override;



    //  declatarion
    void set_distCompany(string _str);
    void set_nickName(string _str);
    void set_workExp(size_t _num);
    //--------------------------------
    string gets_distCompany( ) const;
    string gets_nickName ( )const;
    size_t gets_workExp ( )const;

    void set_visible(bool);
    //--------------------------------
};






#endif //LAB_CLASSMUSICIAN_H
