//
// Created by surow on 16/05/2023.
//
#include "../head/headHeadFile.h"

void load( Producent **& prod , size_t & size)
{
    std::ifstream input(path(obj_Producent_path_file));
    if(input){
        for (int i = 0 ; i < size ; i ++ )
        {
            input >> *prod[i];
        }
    }
    else {
        cerr << "ERROR : open file 'objProducent.txt'"<<endl;
    }
    input.close();


}

 void load( Album **& album, size_t & size)
{
    std::ifstream input(path(obj_Album_path_file));
    if(input){
        for (int i = 0 ; i < size ; i ++ )
        {

            input >> *album[i];
        }
    }
    else {
        cerr << "ERROR : open file 'objAlbum.txt'"<<endl;
    }
    input.close();


}

void load( Music **& music, size_t & size)
{
    std::ifstream  input(path(obj_Music_path_file));
    if(input){
        for (int i = 0 ; i < size ; i ++ )
        {
            input >> *music[i];
        }
    }
    else {
        cerr << "ERROR : open file 'objMusic.txt'"<<endl;
    }
    input.close();


}
void load( Musician *& musician, size_t & size)
{
    std::ifstream input(path(obj_Producent_path_file));
    if(input){
        for (int i = 0 ; i < size ; i ++ )
        {
            input >> musician[i];
        }
    }
    else {
        cerr << "ERROR : open file 'objMusician.txt'"<<endl;
    }
    input.close();


}

void load(vector<Musician>& musicians, size_t& size)
{
    std::ifstream input(path(obj_Producent_path_file));
    if (input) {
        Musician musician;
        while (input >> musician) {
            musicians.push_back(musician);
        }
        size = musicians.size();
    }
    else {
        cerr << "ERROR: cannot open file 'objMusician.txt'" << endl;
    }
    input.close();
}