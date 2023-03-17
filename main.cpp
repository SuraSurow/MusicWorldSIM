
/*
 *
 * instrukje do zadania
 *
Napisać program w ramach wybranego tematu, który demonstruje  zarządzanie pamięcią pod czas wykonania,
 tworząc tablice obiektów struktur oraz tablice wskaźników do obiektów struktur.
Tablice mogą być zarówno  jednowymiarowe, jak i dwuwymiarowe.
Program ma składać się z plików nagłówkowych z definicjami struktur i prototypami (*.h)  oraz plików (*.cpp) z implementacjami funkcji.
 Wartości atrybutów struktur generować losowo, w tym rozmiary tablic.

menu robimy
///////////////////////////
1.tworz samolot
 minimalnie 2 structy

 Tworz tablice obiektow;
 samolot* sam;
 rand() size;


 struct samolot {
 int predkosc;
 char typ;
 };
 struct Przeszkody{
 int pozx;
 int pozy;
 };
 ////////////////////////
 2.inicjalizacja samolotow

 /////////////////////
 3. pokaz samoloty

 ////////////////
 4. dodaj samolot

 ///////////////
 5. usun losowo wybrany samolot z tablicy

 //////////////////dotad sa do samolotow

 potem te same 5 funcje tylko ze do zurawia

 roznica jest taka:
 zuraw zadeklarowany jako tablica wskaznikow

 /////////////////////
 11. jakas funckja z przetwarzaniem informacji
 12. jedno dla samolotu drugi dla zurawia

 przyklad przetwarzania:
 --sortowanie
 --filtrowanie
 --zestawienia danych
 --zmiana stanu obiektow
 -------------------------

 !!!!!!przeladowanie, referencja, przydzielanie pamieci i zarzadanie pamieci



 ////////////////
 13 wyjscie z programu

 skasowac cala pamiec ktora zostala przydzielona do programu


 */

#include "headFile.h"



int main()
{
    pressEnter();
    start();
    prestart();
    size_t size;
    size_t* pSize = &size;
    get_size(pSize);
    creator * _creator;
    album ** _album;
    musicDisc ** _musicDisc;
    create(_creator,pSize);
    create( _album , pSize);
    create( _musicDisc , pSize );
    loop(_creator,_album,_musicDisc ,pSize);
    return EXIT_SUCCESS;
}




void start ()
{
    cout
    << "\n\tWitaj w Kreatorze Swiata Muzycznego\n"
    << "\n\t( welcome to the app that creates the music world ) "
    << "\n\n\tW naszym sumulatorze mozna:"
    << "\n\t( In our simulation can: )"
    << "\n\n\t-Tworzyc ( Create ) "
    << "\n\t-Inicjowac ( Initialize )"
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
    << "\n\n\t1. EXIT"
    << "\n\t2. Inicjowac ( Initialize )"
    << "\n\t3. Wyswietlic ( Print )"
    << "\n\t4. Dodac ( add )"
    << "\n\t5. Usunac ( delete )"
    << "\n\t6. Sortowac ( sort )"
    << "\n\t7. Zestawiac Dane ( data sheet )"
    ;
}

void prestart()
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



