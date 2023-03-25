//
// Created by surow on 16/03/2023.
//
#include "headFile.h"

void print (creator * _creator , size_t *size)
{
    for (int i = 0 ; i < *size ; i++)
    {
        cout
        <<"Name -> " << _creator[i].gets_nameCre() << "\n"
        <<"Surname -> " << _creator[i].gets_surnameCre() << "\n"
        <<"Age -> " << _creator[i].gets_ageCre() << "\n"
        <<"Year -> " << _creator[i].gets_yearCre() << "\n"
        <<"Month -> " << _creator[i].gets_monthCre() << "\n"
        <<"Day-> " << _creator[i].gets_dayCre() << "\n\n";
    }


}

void print (album ** _album ,size_t * size )

{
    for (int i = 0 ; i < *size ; i++)
    {
        cout
        <<"Name Creator -> " << _album[i]->gets_nameCre() << "\n"
        <<"Surname Creator -> " << _album[i]->gets_surnameCre() << "\n"
        <<"Name album -> " << _album[i]->gets_nameAl()<< "\n"
        <<"Type Music -> " << _album[i]->gets_typeAl() << "\n"
        <<"Year create -> " << _album[i]->gets_yearCre() << "\n"
        <<"Count of song-> " << _album[i]->gets_countSong() << "\n\n";

    }

}

void print (musicDisc  ** _musicDisc , size_t * size )
{
    for (int i = 0 ; i < *size ; i++)
    {
        cout
                <<"Name Creator -> " << _musicDisc[i]->gets_nameCre() << "\n"
                <<"Surname Creator -> " << _musicDisc[i]->gets_surnameCre() << "\n"
                <<"Name album -> " << _musicDisc[i]->gets_nameMusic()<< "\n"
                <<"Type Music -> " << _musicDisc[i]->gets_typeMusic() << "\n"
                <<"Year create -> " << _musicDisc[i]->gets_secondMusic() << "\n"
                <<"Count of song-> " << _musicDisc[i]->gets_yearMusic()<< "\n\n";

    }

}


void start ()
{
    cout
            << "\n\tWitaj w Kreatorze Swiata Muzycznego\n"
            << "\n\t( welcome to the app that creates the music world ) "
            << "\n\n\tW naszym sumulatorze mozna:"
            << "\n\t( In our simulation can: )"
            << "\n\n\t-Tworzyc ( Create ) (please use first!!!)"
            << "\n\t-Inicjowac ( Initialize ) (please use second!!!)"
            << "\n\t-Wyswietlic ( Print )"
            << "\n\t-Dodac ( add )"
            << "\n\t-Usunac ( delete )"
            << "\n\t-Sortowac ( sort )"
            << "\n\t-Zestawiac Dane ( data sheet )"
            << "\n\n\t!!! Tworcow Muzycznych ( music artist's )\t!!!"
            << "\n\t!!! Albumy Muzyczne ( music album's )\t\t!!!"
            << "\n\t!!! Utwory Muzyczne ( music song's )\t\t!!!";
    pressEnter();
}


void menu_show_content()
{
    cout
            << "\n\n\t0. EXIT"
            << "\n\t1. Tworzyc ( create ) (please use first!!!)"
            << "\n\t2. Inicjowac ( Initialize ) (please use second!!!)"
            << "\n\t3. Wyswietlic ( Print )"
            << "\n\t4. Dodac ( add )"
            << "\n\t5. Usunac ( delete )"
            << "\n\t6. Sortowac ( sort )"
            << "\n\t7. Edytowac ( edit )"
            ;
}

void preestart()
{
    cout
            << "\nPrzed uzytkowaniem oprogramowania nalezy stworzyc obiekty"
            << "( Objects must be created before using the software ) "
            << "\n\n-Creator"
            << "\n-Album"
            << "\n-Disc"
            << "\nWprowadz Liczbe obiektow"
            << "\n(Enter count of object)\n"
            ;
}

