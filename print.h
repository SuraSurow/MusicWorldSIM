//
// Created by surow on 20/03/2023.
//
#ifndef LAB_PRINT_H
#define LAB_PRINT_H

void print (creator *_creator , size_t *size);
void print (album **_album , size_t *size);
void print (musicDisc **_musicDisc , size_t *size);
void preestart();
void menu_show_content();
void start();
void printEditMenu();
void printChoiceObj();
void printClass(creator * _creator);
void printClass(album ** _album);
void printClass(musicDisc ** _musicDisc);
void printHowEdit(creator * _creator);
void printHowEdit (album ** _album);
void printHowEdit(musicDisc ** _musicDisc);
void printHowEdit();

#endif //LAB_PRINT_H
