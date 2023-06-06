//
// Created by surow on 20/04/2023.
//
#include "../head/headHeadFile.h"
#include "ClassMusician.h"
#include "../head/headLib.h"

void Musician::set_distCompany ( string _str ) { distributionCompany=std::move(_str);}
void Musician::set_nickName ( string _str) { nickName=std::move(_str);}
void Musician::set_workExp ( size_t _num) { workExp=_num;}

string Musician::gets_distCompany (  ) const {return distributionCompany;}
string Musician::gets_nickName (  )const  {return nickName;}
size_t Musician::gets_workExp (  ) const {return workExp;}

void Musician::doSomething ( ) {
    cout << "\n Jako ze jestem Muzykiem to Stworze Objekt 'musicText'";
    MusicText musicText (randStringData(nameMusic_txt_path_file , "nameMusic.txt"),randSize_t(0,1000));
    cout << "\tNazwa tekstu: " << musicText.gets_name();
    cout << "\nLiczba znakow tekstu" << musicText.gets_countChar();
    cout << "\n--------------------------";

}

ostream& operator<<(ofstream& output , Musician& musician){
    output << musician.gets_name() << ";"
           << musician.gets_surname()<< ";"
           <<musician.gets_age()<< ";"
           <<musician.gets_year()<< ";"
           <<musician.gets_month()<< ";"
           <<musician.gets_day()<< ";"
           <<musician.gets_distCompany()<< ";"
           <<musician.gets_nickName()<< ";"
           <<musician.gets_workExp()<<endl;
    return output;
}

ostream& operator<<(ofstream& output, vector<Musician>& musicians)
{
    for (const auto& musician : musicians) {
        output << musician.gets_name() << ";"
               << musician.gets_surname() << ";"
               << musician.gets_age() << ";"
               << musician.gets_year() << ";"
               << musician.gets_month() << ";"
               << musician.gets_day() << ";"
               << musician.gets_distCompany() << ";"
               << musician.gets_nickName() << ";"
               << musician.gets_workExp() << endl;
    }
    return output;
}


ostream& operator<<(ostream& os,const Musician& musician) {
    os << "Name:" << musician.gets_name() << "\tSurname:" << musician.gets_surname() << endl;
    os << "Age:" << musician.gets_age() << "\tYear:" << musician.gets_year() << " \tMonth:" << musician.gets_month()
       << " \tDay:" << musician.gets_day() << endl;
    os << "Distribution Company:\t" << musician.gets_distCompany() << endl;
    os << "Also Knows Us:\t" << musician.gets_nickName() << endl;
    os << "Work Experiense:\t" << musician.gets_workExp() << endl;
    return os;
}

ostream& operator<<(ostream& os, const vector<Musician>& musicians)
{
    for (const auto& musician : musicians) {
        os << "Name: " << musician.gets_name() << "\tSurname: " << musician.gets_surname() << endl;
        os << "Age: " << musician.gets_age() << "\tYear: " << musician.gets_year() << " \tMonth: " << musician.gets_month()
           << " \tDay: " << musician.gets_day() << endl;
        os << "Distribution Company: " << musician.gets_distCompany() << endl;
        os << "Also Knows Us: " << musician.gets_nickName() << endl;
        os << "Work Experience: " << musician.gets_workExp() << endl;
        os << endl;
    }
    return os;
}

istream& operator>>(ifstream& input, Musician& musician) {
    string line;
    getline(input, line);
    stringstream ss(line);
    string name, surname, distCompany ,nickName;
    size_t age, year, month, day,  workEXP;
    // Odczytaj poszczególne części linii i przypisz do odpowiednich zmiennych
     getline(ss, name, ';');
     getline(ss, surname, ';');
     ss >> age; ss.ignore();
     ss >> year; ss.ignore();
     ss >> month; ss.ignore();
     ss >> day; ss.ignore();
     getline(ss, distCompany, ';');
     getline(ss, nickName, ';');
     ss >> workEXP ;ss.ignore();
     musician.set_name(name);
     musician.set_surname(surname);
     musician.set_age(age);
     musician.set_year(year);
     musician.set_month(month);
     musician.set_day(day);
     musician.set_distCompany(distCompany);
     musician.set_nickName(nickName);
     musician.set_workExp(workEXP);

    return input;
}

istream& operator>>(ifstream& input, vector<Musician>& musicians)
{
    string line;
    while (getline(input, line)) {
        stringstream ss(line);
        string name, surname, distCompany, nickName;
        size_t age, year, month, day, workEXP;

        getline(ss, name, ';');
        getline(ss, surname, ';');
        ss >> age; ss.ignore();
        ss >> year; ss.ignore();
        ss >> month; ss.ignore();
        ss >> day; ss.ignore();
        getline(ss, distCompany, ';');
        getline(ss, nickName, ';');
        ss >> workEXP; ss.ignore();

        Musician musician;
        musician.set_name(name);
        musician.set_surname(surname);
        musician.set_age(age);
        musician.set_year(year);
        musician.set_month(month);
        musician.set_day(day);
        musician.set_distCompany(distCompany);
        musician.set_nickName(nickName);
        musician.set_workExp(workEXP);

        musicians.push_back(musician);
    }

    return input;
}

void Musician::set_visible ( bool ) {

}

//ostream& operator<<(ofstream& output, Musician& musician)
