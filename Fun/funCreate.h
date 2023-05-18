//
// Created by surow on 20/03/2023.
//
#ifndef LAB_FUNCREATE_H
#define LAB_FUNCREATE_H

#include "../base/baseStruct.h"

void create( Musician *& _creator, const size_t *size);
void create( Album **& _album, const size_t *size);
void create( Music **& _musicDisc, const size_t *size);
void create ( Producent **& pProducent, const size_t *size);
void create( Person **& pPerson, const size_t *size);
void create ( Producent *& _producent );
void create ( Musician *& _musician );

void create ( Musician *& _creator );
void create ( Album *& _album );
void create ( Music *& _musicDisc );
void create ( Album *& _albumS , const size_t size );
void create ( Music *& _musicDiscES , const size_t size );
void create ( Musician **& _creatorS , const size_t size );


#endif //LAB_FUNCREATE_H
