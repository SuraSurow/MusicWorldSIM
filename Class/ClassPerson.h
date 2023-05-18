//
// Created by surow on 21/04/2023.
//

#ifndef LAB_CLASSPERSON_H
#define LAB_CLASSPERSON_H
using namespace std;
#include <iostream>
#include <string>
#include "../head/headLib.h"

class Person{
private:
    basic_string<char> name ;
    string surname;
    size_t age{} ;
    size_t year{} ;
    size_t month{} ;
    size_t day{} ;
public:



    virtual void doSomething() = 0;



    Person( string  name , string  surname, size_t  age , size_t  year, size_t  month , size_t  day)
            : name(std::move(name)) ,
              surname(std::move(surname)),
              age(age) ,
              year(year),
              month(month) ,
              day(day) {}
    Person( const Person& anotherOne) = default;

    Person ()
    {
        name = "none";
        surname = "none";
        age = 0;
        year = 0;
        month = 0 ;
        day = 0 ;
    }

    //----------set------------
    void set_name ( string _str ) ;
    void set_surname ( string _str ) ;
    void set_age ( size_t _num ) ;
    void set_year ( size_t _num );
    void set_month ( size_t _num ) ;
    void set_day ( size_t _num ) ;

    const string gets_name () const ;
    const string  gets_surname () const ;
    const  size_t gets_age () const ;
    const  size_t gets_year () const ;
    const  size_t gets_month () const ;
    const  size_t gets_day () const ;

};


#endif //LAB_CLASSPERSON_H
