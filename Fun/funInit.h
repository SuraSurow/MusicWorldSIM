//
// Created by surow on 20/03/2023.
//
#ifndef LAB_FUNINIT_H
#define LAB_FUNINIT_H

void init( Musician * _musician , const size_t * size );
void init(vector<Musician>& musicians, const size_t* pSize);

void init( Album ** _albumS , const size_t * size );
void init ( Music ** _musicDiscES , const size_t * size );
void init (Producent ** _prod ,const size_t * size);
void init( Album *&  _album );
void init ( Music *&  _musicDisc );
void init( Musician & _musician);
void init (Producent *& _prod);

#endif //LAB_FUNINIT_H
