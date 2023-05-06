//
// Created by surow on 16/03/2023.
//
#include "../head/headHeadFile.h"

void print ( Musician * _musician , const  size_t *size)
{
    for (int i = 0 ; i < *size ; i++)
    {
        cout
                << "\nNo. " << i << "\n"
                << "Name -> " << _musician[i].gets_name() << "\n"
                << "Surname -> " << _musician[i].gets_surname() << "\n"
                << "Age -> " << _musician[i].gets_age() << "\n"
                << "Year -> " << _musician[i].gets_year() << "\n"
                << "Month -> " << _musician[i].gets_month() << "\n"
                << "Day-> " << _musician[i].gets_day() << "\n"
                << "Distribution Company-> " << _musician[i].gets_distCompany() << "\n"
                << "NickNake (AKA) " << _musician[i].gets_nickName() << "\n"
                << "Work Experience " << _musician[i].gets_workExp() << "\n"
        <<"----------------------------------";
    }
}

void print ( Album ** _album , const size_t * size )


{
    for (int i = 0 ; i < *size ; i++)
    {
        cout
        <<"\nNo. "<<i<<"\n"
        <<"Name Creator -> " << _album[i]->gets_nameCre() << "\n"
        <<"Surname Creator -> " << _album[i]->gets_surnameCre() << "\n"
        <<"Name Album -> " << _album[i]->gets_nameAl()<< "\n"
        <<"Type Music -> " << _album[i]->gets_typeAl() << "\n"
        <<"Year create -> " << _album[i]->gets_yearCre() << "\n"
        <<"Count of song-> " << _album[i]->gets_countSong() << "\n"
        <<"----------------------------------";

    }

}

void print ( Music  ** _musicDisc , const  size_t * size )
{
    for (int i = 0 ; i < *size ; i++)
    {

        cout
        <<"\nNo. "<<i<<"\n"
        <<"Name Musician -> " << _musicDisc[i]->gets_nameCre() << "\n"
        <<"Surname Musician -> " << _musicDisc[i]->gets_surnameCre() << "\n"
        <<"Name song -> " << _musicDisc[i]->gets_nameMusic()<< "\n"
        <<"Type Music -> " << _musicDisc[i]->gets_typeMusic() << "\n"
        <<"Year create -> " <<  _musicDisc[i]->gets_yearMusic() << "\n"
        <<"Time (second)-> " <<_musicDisc[i]->gets_secondMusic() << "\n"
        <<"----------------------------------";
    }


}

void print ( Producent ** _prod , const size_t * size )


{
    for (int i = 0 ; i < *size ; i++)
    {
        cout
                << "\nNo. " << i << "\n"
                << "Name Producent -> " << _prod[i]->gets_name() << "\n"
                << "Surname Producent -> " << _prod[i]->gets_surname() << "\n"
                << "Age -> " << _prod[i]->gets_age() << "\n"
                << "Year -> " << _prod[i]->gets_year() << "\n"
                << "Month -> -> " << _prod[i]->gets_month() << "\n"
                << "Day -> " << _prod[i]->gets_day() << "\n"
                << "ExpertiseArea ->" << _prod[i]->gets_expertiseArea() << "\n"
                << "Grammy Award ->" << _prod[i]->gets_FavoriteBPM() << "\n"
                << "Number of Production ->" << _prod[i]->gets_numOfProductions() << "\n"
                <<"----------------------------------";
    }

}


void print ( Music  * _musicDisc )
{
    cout

                <<"Name Musician -> " << _musicDisc->gets_nameCre() << "\n"
                <<"Surname Musician -> " << _musicDisc->gets_surnameCre() << "\n"
                <<"Name Song -> " << _musicDisc->gets_nameMusic()<< "\n"
                <<"Type Music -> " << _musicDisc->gets_typeMusic() << "\n"
                <<"Year create -> " <<  _musicDisc->gets_yearMusic() << "\n"
                <<"Time (second)-> " <<_musicDisc->gets_secondMusic() << "\n"
                <<"----------------------------------";
    }


void print ( Album *_album )
 {
        cout

                <<"Name Musician -> " << _album->gets_nameCre() << "\n"
                <<"Surname Musician -> " << _album->gets_surnameCre() << "\n"
                <<"Name Album -> " << _album->gets_nameAl()<< "\n"
                <<"Type Music -> " << _album->gets_typeAl() << "\n"
                <<"Year create -> " << _album->gets_yearCre() << "\n"
                <<"Count of song-> " << _album->gets_countSong() << "\n"
                <<"----------------------------------";
 }

 void print (Producent *_prod)
     {
         cout

                 << "Name Producent -> " << _prod->gets_name() << "\n"
                 << "Surname Producent -> " << _prod->gets_surname() << "\n"
                 << "Age -> " << _prod->gets_age() << "\n"
                 << "Year -> " << _prod->gets_year() << "\n"
                 << "Month -> -> " << _prod->gets_month() << "\n"
                 << "Day -> " << _prod->gets_day() << "\n"
                 << "ExpertiseArea ->" << _prod->gets_expertiseArea() << "\n"
                 << "Grammy Awards ->" << _prod->gets_hasGrammyAward() << "\n"
                 << "Favorite BMP (Beat Per Minute) ->" << _prod->gets_FavoriteBPM() << "\n"
                 << "Number of Production ->" << _prod->gets_numOfProductions() << "\n"
                 <<"----------------------------------";
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
            << "\n\t!!! Albumy Muzyczne ( music Album's )\t\t!!!"
            << "\n\t!!! Utwory Muzyczne ( music song's )\t\t!!!"
            << "\n\t!!! (NEW) Producentow (  Producent )\t\t!!!"
            << "\n\t!!! (NEW) Piosenkarzy (  Singer )\t\t!!!";
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
            << "\n\t8. Tworzyc ( edit ) (!! Tutaj Pokazlem Polimorfizm !!!) "
            ;
}

void preestart()
{
    cout
            << "\nPrzed uzytkowaniem oprogramowania nalezy stworzyc obiekty"
            << "( Objects must be created before using the software ) "
            << "\n\n-Musician\n-"
               "Producent"
            << "\n-Album"
            << "\n-Disc"
            << "\nWprowadz Liczbe obiektow"
            << "\n(Enter count of object)\n"
            ;
}

void printEditMenu()
{
    cout
    << "\nChoice what's type do you wanna edit?"
    << "\n1.Musician"
    << "\n2.Album"
    << "\n3.Music disc"
    << "\n4.Producent"
    << "\n5.All";
}

void printChoiceObj()
{
    cout << "\nChoice object's index do you wanna change";
}
void printClass( Musician * musician)
{
    cout
    <<"\n1.Name Musician"
    <<"\n2.Surname Musician"
    <<"\n3.Age Musician"
    <<"\n4.Year of Brith"
    <<"\n5.Month of Brith"
    <<"\n6.Day of Brith"
    <<"\n7.Distribution Company"
    <<"\n8.Nickname"
    <<"\n9.Work Experiense";

}
void printClass( Album ** _album)
{
    cout
            <<"\n1.Name Musician"
            <<"\n2.Surname Musician"
            <<"\n3.Name Album"
            <<"\n4.Type of Album"
            <<"\n5.Year of Album"
            <<"\n6.Count of Song";

}
void printClass( Music ** _musicDisc)
{
    cout
            <<"\n1.Name Musician"
            <<"\n2.Surname Musician"
            <<"\n3.Name of Song "
            <<"\n4.Type of Music"
            <<"\n5.Second of Song"
            <<"\n6.Year of create Song";
}

void printClass( Producent ** Producent)
{
    cout
            <<"\n1.Name Producent"
            <<"\n2.Surname Producent"
            <<"\n3.Age "
            <<"\n4.Year"
            <<"\n5.Month"
            <<"\n6.Day"
            <<"\n7.Expertise Area"
            <<"\n8.Grammy Award"
            <<"\n9.Favorite value of BPM (beat per minute)"
            <<"\n10.Number of Production";

}


void printHowEdit ( Musician * _creator)
{
    printHowEdit();
    printClass(_creator);
}

void printHowEdit ( Album ** _album)
{
    printHowEdit();
    printClass(_album);

}
void printHowEdit ( Music ** _musicDisc)
{
    printHowEdit();
    printClass(_musicDisc);

}
void printHowEdit ( Producent ** _prod)
{
    printHowEdit();
    printClass(_prod);

}
void printHowEdit(){
    cout << "\nIf you wanna change data in object you have to listen simple principle";
    cout << "\nThis is example, you have object Person";
    cout << "\nList of data: 1._name , 2.age";
    cout << "\nfor a change rules you must write for examples ";
    cout << "\n\n\t <_name><X><age>";
    cout << "\n\n\t X is what ever you want (space , semicolon , multiplication , nevermind but NOT number and char alphabet!!!)";
    cout << "\n\nSecond , this is object's list";
}




void wrongInput()
{
    cout << "\nYou probably type wrong index number \n !!! please try again !!!";
}

void howMany(string _str){
    cout << "\n Please write how many '" << _str << "' do you want ?";

}

void howMany(string _str1 ,string _str2) {
    cout << "\n Please write how many '" << _str1 <<"' (" << _str2 << ") = (ALL Minus " << _str1 << ") Do you want ?";
}


void printProcess(string _str ){
    cout << "\n- - - - - [PROCESS OF " << _str << " END] - - - - - ";
}

