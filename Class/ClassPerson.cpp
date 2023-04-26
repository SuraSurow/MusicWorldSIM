#include "ClassPerson.h"

void Person::set_name ( string _str ){ name=std::move(_str);}
void Person::set_surname ( string _str ){ surname=std::move(_str);}
void Person::set_age ( size_t _num ){ age=_num;}
void Person::set_year ( size_t _num ){ year=_num;}
void Person::set_month ( size_t _num ) { month=_num;}
void Person::set_day ( size_t _num ) { day=_num;}

string Person::gets_name () {return name;}
string Person::gets_surname () {return surname;}
size_t Person::gets_age ()const{return age;}
size_t Person::gets_year () const{return year;}
size_t Person::gets_month () const{return month;}
size_t Person::gets_day () const{return day;}
