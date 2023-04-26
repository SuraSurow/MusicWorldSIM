
//
// Created by surow on 12/03/2023.
//

#include "../head/headHeadFile.h"


//tworzenie tablic obiektow

void create ( Musician *& _creatorS , const size_t *size )
{
    _creatorS = new Musician[*size];
}

void create ( Album **& _albumS , const size_t *size )
{
    _albumS = new Album * [ *size ] ;
    for ( size_t x = 0 ; x < *size ; x++ )
    {
        _albumS [ x ] = new Album ;
    }


}

void create ( Music **& _musicDiscES , const size_t *size )
{
    _musicDiscES = new Music * [ *size ] ;
    for ( size_t x = 0 ; x < *size ; x++ )
    {
        _musicDiscES [ x ] = new Music ;
    }
}
void create ( Producent **& _producent , const size_t *size )
{
    _producent = new Producent *  [ *size ] ;
    for ( size_t x = 0 ; x < *size ; x++ )
    {
        _producent [ x ] = new Producent ;
    }
}















//tworzenie pojedynczych objektow
/*
void create ( Musician *& _creator )
{
    _creator = new Musician ;
}

void create ( Album *& _album )
{
    _album = new Album ;
}

void create ( Music *& _musicDisc )
{
    _musicDisc = new Music ;
}

void create ( Album *& _albumS , const size_t size )
{
    _albumS = new Album [ size ] ;
}

void create ( Music *& _musicDiscES , const size_t size )
{
    _musicDiscES = new Music [ size ] ;
}
// tworzenie tablicy wskaznikow to obiektow

void create ( Musician **& _creatorS , const size_t size )
{
    _creatorS = new Musician * [ size ] ;
    for ( size_t x = 0 ; x < size ; x++ )
    {
        _creatorS [ x ] = new Musician ;
    }
}
 */
