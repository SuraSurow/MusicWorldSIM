//
// Created by surow on 14/05/2023.
//
#include "../head/headHeadFile.h"

void save(ofstream& file , Producent **& prod , size_t & size)
{
    for(int i = 0 ; i < size ; i++)
    {
        file << *prod[i];
    }
    file.close();
}
void save( ofstream& file , Musician *& musician , size_t & size)
{
    for(int i = 0 ; i < size ; i++)
    {
        file << musician[i];
    }
    file.close();
}

void save(ofstream& file, vector<Musician>& musicians)
{
    for (const auto& musician : musicians) {
        file << musician;
    }
    file.close();
}

void save( ofstream& file , Album **& album , size_t & size)
{
    for(int i = 0 ; i < size ; i++)
    {
        file << *album[i];
    }
    file.close();
}
void save( ofstream& file , Music **& musci , size_t & size)
{
    for(int i = 0 ; i < size ; i++)
    {
        file << *musci[i];
    }
    file.close();
}
