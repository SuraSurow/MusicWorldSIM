//
// Created by surow on 20/03/2023.
//
#ifndef LAB_FUNPRINT_H
#define LAB_FUNPRINT_H

void print ( Musician *_musician , const  size_t *size);

void print(const vector<Musician>& musicians);

void print ( Album **_album , const  size_t *size);
void print ( Music **_musicDisc , const  size_t *size);
void print ( Producent ** _prod , const size_t * size );
void print ( Music  & _musicDisc );
void print ( Album  *& _album) ;
void print (Producent *& _prod);



void preestart();
void menu_show_content();
void start();
void printEditMenu();
void printChoiceObj();

void printClass( const std::vector<Musician>& musicians);
void printClass( Musician * musician);
void printClass( Album ** _album);
void printClass( Music ** _musicDisc);
void printClass( Producent ** _prod);

void printHowEdit( Musician * _creator);
void printHowEdit ( Album ** _album);
void printHowEdit( Music ** _musicDisc);
void printHowEdit( Producent ** _prod);
void printHowEdit(const vector<Musician>& musicians);
void printHowEdit();

void PolimorfisMenu();
void printProcess(string _str);
void wrongInput();
void howMany(string);
void howMany(string ,string);


#endif //LAB_FUNPRINT_H
