
//
// Created by surow on 12/03/2023.
//

#include "../head/headHeadFile.h"


//tworzenie tablic obiektow

void create ( Musician *& _creatorS , const size_t *size )
{
    _creatorS = new Musician[*size];
}

void create (std::vector<Musician>& creators, const size_t*  size)
{
    creators.resize(*size);
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
void create ( Producent **& pProducent , const size_t *size )
{
    pProducent = new Producent *  [ *size ] ;
    for ( size_t x = 0 ; x < *size ; x++ )
    {
        pProducent [ x ] = new Producent ;
    }
}

void create ( Musician *& _musician )
{
    _musician = new Musician ;
}
void create ( Producent *& _prod )
{
    _prod = new Producent ;
}




void create ( Person **& pPerson , const size_t *size )
{
    pPerson = new Person * [ *size ];
    int choice = 0;
    size_t _sizeProd=0;
    cout << "\nMENU (aby zaprezentowac Virtual Method)\n";
    howMany("Producent","Musician");
    index(&_sizeProd);
    if ( _sizeProd >= *size) { _sizeProd = *size; }
    int i = 0;
    for ( ; i < _sizeProd ; i++) { pPerson[i] = new Producent; cout << i ;}
    cout << "elo";
    for ( ; i < *size ; i++) { pPerson[i] = new Musician; }
    do {
        cout <<"\n\tMENU:\n\t0.EXIT"
             << "\n\t1.Print Special Skills.(USE VIRTUAL METHOD!!!!!)"
             << "\n\n ''Tutaj mozemy stworzyc Obiekt Abstrakcyjne 'Person' posiadajaca"
             << "\n subklasy 'Musician' i 'Producent'   '' \n" ;
        index(&choice);
        switch(choice) {
            case 1: { for( i = 0  ; i < *size ; i++) { pPerson[i]->doSomething(); }}
            case 0 : { break;}
            default: { wrongInput(); }
        }
    }while (choice!=0);

}



//tworzenie pojedynczych objektow



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

