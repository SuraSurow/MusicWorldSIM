//
// Created by surow on 12/03/2023.
//
#include "headFile.h"


void init( creator * _creatorS , size_t size)
{
    _creatorS->nameCre=randName();
    cout <<_creatorS->nameCre;

}
//zrob loopa dla wszystkich obiejktow
//WYWALA PAMIEC !!!!!!!!!!!!!!!!!!!!!!!!!!


/*
void ini(Osoba* const osoby, const size_t rozmiar) {
    int max = 1000;
    int rocznik = 30;
    char string_buf[100];
    for (size_t ind = 0; ind < rozmiar; ind++) {
        char nazwisko[100];
        osoby[ind].pesel = rand() % max + 10000;
        osoby[ind].rocznik = rand() % rocznik + 20;
        sprintf_s(string_buf, "%zd", ind);
        strcpy_s(nazwisko, "Kowalski_");
        strcat_s(nazwisko, string_buf);
        strcpy_s(osoby[ind].godnosc, nazwisko);
    }
}
 */