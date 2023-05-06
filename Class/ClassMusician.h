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


class Musician : public Person{
private:
    string distributionCompany;
    string nickName;
    size_t workExp;
public:
    Musician( const Musician& anotherOne) = default;
    Musician( string name, string surname , size_t age , size_t year , size_t month , size_t day,
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
    //--------------------------------
};






#endif //LAB_CLASSMUSICIAN_H
