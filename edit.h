//
// Created by surow on 24/03/2023.
//

#ifndef LAB_EDIT_H
#define LAB_EDIT_H

void edit(creator* _creator , album ** _album , musicDisc ** _musicDisc , size_t &size);
void edit (creator * _creator,size_t &size,size_t &choiceObj);
void edit (album ** _album,size_t &size,size_t &choiceObj);
void edit (musicDisc ** _musicDisc,size_t &size,size_t &choiceObj);
void edit (creator * _creator,size_t &size,size_t &choiceObj,int &choiceProperties);
void edit (album ** _album,size_t &size,size_t &choiceObj,int &choiceProperties);
void edit (musicDisc ** _musicDisc,size_t &size,size_t &choiceObj,int &choiceProperties);


#endif //LAB_EDIT_H
