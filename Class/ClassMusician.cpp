//
// Created by surow on 20/04/2023.
//
#include "ClassMusician.h"
void Musician::set_distCompany ( string _str ) { distributionCompany=std::move(_str);}
void Musician::set_nickName ( string _str) { nickName=std::move(_str);}
void Musician::set_workExp ( size_t _num) { workExp=_num;}

string Musician::gets_distCompany (  ) const {return distributionCompany;}
string Musician::gets_nickName (  )const  {return nickName;}
size_t Musician::gets_workExp (  ) const {return workExp;}