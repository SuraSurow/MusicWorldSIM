//
// Created by surow on 20/03/2023.
//
#ifndef LAB_FUNINIT_H
#define LAB_FUNINIT_H

void init( Musician * _musician , const size_t * size );
void init( Album ** _albumS , const size_t * size );
void init ( Music ** _musicDiscES , const size_t * size );
void init (Producent ** _prod ,const size_t * size);
void init( Album *&  _prod );
void init ( Music *&  _musicDiscES );
void init( Musician & _musician);
void init (Producent *& _prod);

#endif //LAB_FUNINIT_H
