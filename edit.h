//
// Created by surow on 24/03/2023.
//

#ifndef LAB_EDIT_H
#define LAB_EDIT_H



void edit(creator* _creator , album ** _album , musicDisc ** _musicDisc ,const  size_t &size);
void edit (creator * _creator,const size_t &choiceObj);
void edit (album ** _album,const size_t &choiceObj);
void edit (musicDisc ** _musicDisc,const size_t &choiceObj);
void editPressing (creator * _creator,const size_t &choiceObj);
void editPressing (album ** _album,const size_t &choiceObj);
void editPressing (musicDisc ** _musicDisc,const size_t &choiceObj);


#endif //LAB_EDIT_H
