//
// Created by surow on 24/03/2023.
//

#ifndef LAB_FUNEDIT_H
#define LAB_FUNEDIT_H



void edit( Musician* _musician , Album ** _album , Music ** _musicDisc , Producent ** _prod, const  size_t &size);

void edit( std::vector<Musician>& musicians , Album ** _album , Music ** _musicDisc , Producent ** _prod, const  size_t &size);

void edit ( Musician * musician, const size_t &choiceObj);
void edit ( Album ** _album, const size_t &choiceObj);
void edit ( Music ** _musicDisc, const size_t &choiceObj);
void edit ( Producent ** _prod, const size_t &choiceObj);
void edit(vector<Musician>& musicians, const size_t& choiceObj);
//--------------------------------------------------
void editPressing(std::vector<Musician>& musicians, const size_t& choiceObj);
//--------------------------------------------------



void editPressing (Producent ** _prod ,const size_t &choiceObj);
void editPressing ( Musician * _musician, const size_t &choiceObj);
void editPressing ( Album ** _album, const size_t &choiceObj);
void editPressing ( Music ** _musicDisc, const size_t &choiceObj);


#endif //LAB_FUNEDIT_H
