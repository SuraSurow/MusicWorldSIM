//
// Created by surow on 20/03/2023.
//
#ifndef LAB_FUNDELETE_H
#define LAB_FUNDELETE_H

int del ( Musician *& _musician , const size_t &size , const size_t &size_new );
int del( Album **& _albumS , const size_t& size, const size_t & size_new );
int del( Music **& _musicDiscES , const size_t & size , const size_t &size_new);
int del (Producent **& _prod , const size_t & size , const size_t & size_new_new);

int del(std::vector<Musician>& musicians, const size_t& size, const size_t& size_new);
#endif //LAB_FUNDELETE_H
