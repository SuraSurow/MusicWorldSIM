//
// Created by surow on 20/03/2023.
//

#ifndef LAB_STRUCT_H
#define LAB_STRUCT_H

#define EXIT 0
#define CREATE 1
#define INITIALIZE 2
#define PRINT 3
#define ADD 4
#define DELETE 5
#define SORT 6
#define DATA_SHEET 7
#define MIN 1
#define MAX 100


using
        std::string,
        std::cout,
        std:: cin;


namespace MenuText{
    const string
            create = "CREATE",
            initialize = "INITIALIZE",
            print = "PRINT",
            add = "ADD",
            del = "DELETE",
            sort = "SORT",
            data_sheet = "DATA_SHEET",
            start_path = "START_PATH";
}


struct creator {
    string nameCre;
    string surnameCre;
    size_t ageCre;
    size_t yearCre;
    size_t monthCre;
    size_t dayCre;
};
struct musicDisc {
    string nameCre; //
    string surnameCre; //
    string nameMusic;
    string typeMusic;
    size_t  secondMusic;
    size_t yearMusic;
};
struct album {
    string nameCre;
    string surnameCre;
    string nameAl;
    string typeAl;
    size_t yearCre;
    size_t countSong;
};
#endif //LAB_STRUCT_H
