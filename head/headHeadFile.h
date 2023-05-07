//
// Created by surow on 11/03/2023.
//

#ifndef LAB_HEADHEADFILE_H
#define LAB_HEADHEADFILE_H

//standard library




#include <iostream>
#include <string>
#include <cstdlib>
#include <locale>
#include <ctime>
#include <random>
#include <type_traits>
#include <chrono>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <filesystem>

const std::string name_txt_path_file = R"(\dataFile\examplesData\name.txt)";
const std::string Beat_txt_path_file = R"(\dataFile\examplesData\Beat.txt)";
const std::string distCompany_txt_path_file = R"(\dataFile\examplesData\distCompany.txt)";
const std::string expertiseArea_txt_path_file = R"(\dataFile\examplesData\expertiseArea.txt)";
const std::string nameMusic_txt_path_file = R"(\dataFile\examplesData\nameMusic.txt)";
const std::string nickName_txt_path_file = R"(\dataFile\examplesData\nickName.txt)";
const std::string surname_txt_path_file = R"(\dataFile\examplesData\surname.txt)";
const std::string typeMusic_txt_path_file = R"(\dataFile\examplesData\typeMusic.txt)";
const std::string albumName_txt_path_file = R"(\dataFile\examplesData\albumName.txt)";


//own header

#include "../Fun/funCreate.h"

#include "../Fun/funAdd.h"

#include "../Fun/funDelete.h"

#include "../Fun/funInit.h"

#include "../Fun/funOptiFun.h"

#include "../Fun/funPrint.h"

#include "../Fun/funRandData.h"

#include "../Fun/funEdit.h"

#include "../Fun/funSort.h"

#include "../path.h"


#endif //LAB_HEADHEADFILE_H
