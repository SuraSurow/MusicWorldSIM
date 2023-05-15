//
// Created by surow on 14/05/2023.
//

#ifndef LAB_FUNSAVE_H
#define LAB_FUNSAVE_H
void save(ofstream& file , Producent **& prod , size_t & size);
void save(ofstream& file , Musician *& prod , size_t & size);
void save(ofstream& file , Album **& prod , size_t & size);
void save(ofstream& file , Music **& prod , size_t & size);

#endif //LAB_FUNSAVE_H
