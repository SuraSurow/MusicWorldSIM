//
// Created by surow on 20/03/2023.
//
#ifndef LAB_INIT_H
#define LAB_INIT_H

void init( creator * _creatorS , size_t * size );
void init( album ** _albumS , size_t * size );
void init ( musicDisc ** _musicDiscES , size_t * size );
void init( album *&  _albumS );
void init ( musicDisc *&  _musicDiscES );
void init(creator & _creator);


#endif //LAB_INIT_H
