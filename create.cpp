
//
// Created by surow on 12/03/2023.
//

#include "headFile.h"


//tworzenie tablic obiektow

void create ( creator *& _creatorS ,const size_t *size )
{
    _creatorS = new creator[*size];

}

void create ( album **& _albumS , const size_t *size )
{
    _albumS = new album * [ *size ] ;
    for ( size_t x = 0 ; x < *size ; x++ )
    {
        _albumS [ x ] = new album ;
    }
    size_t calkowityRozmiar = sizeof(album*) * (*size);

    std::cout << "Rozmiar tablicy obiektow: " << calkowityRozmiar << " bajtow\n";
    //obiektowi wielkosci danej tablcy obiektow;
}

void create ( musicDisc **& _musicDiscES , const size_t *size )
{
    _musicDiscES = new musicDisc * [ *size ] ;
    for ( size_t x = 0 ; x < *size ; x++ )
    {
        _musicDiscES [ x ] = new musicDisc ;
    }
    //obiektowi wielkosci danej tablcy obiektow;
}


/*s

//tworzenie pojedynczych objektow
/*
void create ( creator *& _creator )
{
    _creator = new creator ;
}

void create ( album *& _album )
{
    _album = new album ;
}

void create ( musicDisc *& _musicDisc )
{
    _musicDisc = new musicDisc ;
}

void create ( album *& _albumS , const size_t size )
{
    _albumS = new album [ size ] ;
}

void create ( musicDisc *& _musicDiscES , const size_t size )
{
    _musicDiscES = new musicDisc [ size ] ;
}
// tworzenie tablicy wskaznikow to obiektow

void create ( creator **& _creatorS , const size_t size )
{
    _creatorS = new creator * [ size ] ;
    for ( size_t x = 0 ; x < size ; x++ )
    {
        _creatorS [ x ] = new creator ;
    }
}
 */
