//
// Created by surow on 14/03/2023.
//

#include "../head/headHeadFile.h"
//                                     20              10
int del ( Musician *& _musician , const size_t *size , const size_t *size_new ) {
    if ( *size_new <= *size ) {
        auto *temp = new Musician[*size_new];
        int i;
        for ( i = 0 ; i < *size_new ; i++ ) {
            temp[ i ].set_age(_musician[ i ].gets_age());
            temp[ i ].set_year(_musician[ i ].gets_year());
            temp[ i ].set_day(_musician[ i ].gets_day());
            temp[ i ].set_month(_musician[ i ].gets_month());
            temp[ i ].set_surname(_musician[ i ].gets_surname());
            temp[ i ].set_name(_musician[ i ].gets_name()) ;
            temp[ i ].set_distCompany(_musician[ i ].gets_distCompany()) ;
            temp[ i ].set_workExp(_musician[ i ].gets_workExp()) ;
            temp[ i ].set_nickName(_musician[ i ].gets_nickName()) ;

        }
        delete[] _musician;
        _musician = nullptr;
        _musician = temp;
        return 0;
    }
    return EXIT_FAILURE;
}

int del( Album **& _album, const size_t * size , const size_t * size_new) {
    if(*size_new<=*size) {
        auto **temp = new Album *[*size_new];
        int i = 0;
        for ( ; i < *size_new ; i++ ) {
            temp[ i ] = new Album;
            temp[ i ]->set_surnameCre(_album[ i ]->gets_surnameCre());
            temp[ i ]->set_nameCre( _album[ i ]->gets_nameCre());
            temp[ i ]->set_yearCre(_album[ i ]->gets_yearCre());
            temp[ i ]->set_typeAl(_album[ i ]->gets_typeAl());
            temp[ i ]->set_countSong(_album[ i ]->gets_countSong());
            temp[ i ]->set_nameAl(_album[ i ]->gets_nameAl());
        }
        delete[] _album;
        _album = nullptr;
        _album = temp;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}

int del( Music **& _musicDisc, const size_t * size , const size_t * size_new) {
    if(*size_new<=*size) {
        auto **temp = new Music *[*size_new];
        int i = 0;
        for ( ; i < *size_new ; i++ ) {
            temp[ i ] = new Music;
            temp[ i ]->set_surnameCre(_musicDisc[ i ]->gets_surnameCre());
            temp[ i ]->set_nameCre(_musicDisc[ i ]->gets_nameCre());
            temp[ i ]->set_nameMusic( _musicDisc[ i ]->gets_nameMusic());
            temp[ i ]->set_typeMusic(_musicDisc[ i ]->gets_typeMusic());
            temp[ i ]->set_secondMusic(_musicDisc[ i ]->gets_secondMusic());
            temp[ i ]->set_yearMusic( _musicDisc[ i ]->gets_yearMusic());
        }
        delete[] _musicDisc;
        _musicDisc = nullptr;
        _musicDisc = temp;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}

int del( Producent **& _prod, const size_t * size , const size_t * size_new) {
    if(*size_new<=*size) {
        auto **temp = new Producent *[*size_new];
        int i = 0;
        for ( ; i < *size_new ; i++ ) {
            temp[ i ] = new Producent;
            temp[ i ]->set_name(_prod[ i ]->gets_name());
            temp[ i ]->set_surname(_prod[ i ]->gets_surname());
            temp[ i ]->set_age(_prod[ i ]->gets_age());
            temp[ i ]->set_year(_prod[ i ]->gets_year());
            temp[ i ]->set_month(_prod[ i ]->gets_month());
            temp[ i ]->set_day(_prod[ i ]->gets_day());
            temp[ i ]->set_expertiseArea(_prod[ i ]->gets_expertiseArea());
            temp[ i ]->set_hasGrammyAward(_prod[ i ]->gets_hasGrammyAward());
            temp[ i ]->set_FavoriteBPM(_prod[ i ]->gets_FavoriteBPM());
            temp[ i ]->set_numOfProductions(_prod[ i ]->gets_numOfProductions());

        }
        delete[] _prod;
        _prod = nullptr;
        _prod = temp;
        return EXIT_SUCCESS;
    }
    return EXIT_FAILURE;
}