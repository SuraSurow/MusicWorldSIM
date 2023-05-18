#include "../head/headHeadFile.h"

void pressEnter()
{
    std::cout << "\n\n\t ENTER to continue ";
    char enter = 0;
    while (enter != '\r' && enter != '\n') enter = getchar();
}

int index(size_t * ptrNum)
{
    cout << "\nWrite your choice index:";
    int number;
    cin >> number;
    *ptrNum = number;
    return 0;
}
int index(int * ptrNum)
{
    cout << "\nWrite your choice index:";
    int number;
    cin >> number;
    *ptrNum = number;
    return 0;
}
int index(size_t * ptrNum,size_t maxVal)
{
    cout << "\nWrite your choice index:";
   size_t number;
    cin >> number;
    maxVal = maxVal - 1;
    int minVal = 0;
    if (number >= maxVal){
        number = maxVal;
        *ptrNum = number;
    }
    else if (number <= minVal)
    {
        number = minVal;
        *ptrNum = number;
    }
    else {
        *ptrNum = number;
    }
    return 0;
}

void get_size( size_t *size)
{
    cout
    <<   "\nvalue of min = "<<MIN
    << "\nvalue of max = "<<MAX<<"\t:";
    cin >> *size;
    if ( *size <= MIN )
    {
        *size = MIN;
    }
    else if ( *size >= MAX)
    {
        *size = MAX; //max = 100
    }
}


size_t countLineFILE( const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "Nie można otworzyć pliku " << filename << std::endl;
        return 0;
    }

    int lineCount = 0;
    std::string line;
    while (std::getline(file, line)) {
        lineCount++;
    }

    file.clear();
    file.seekg(0, std::ios::beg);
    file.close();

    return lineCount;
}



/*
 void print_size (size_t *size)
{
    cout
    << "\n Actual cout of object:"<<*size;
}

int joinArray(const int arr[], int size, int &result)
{
    result = 0;
    for (int i = 0; i < size; i++) {
        result = result * 10 + arr[i];
    }
    return 0;
}
void joinArray(const size_t arr[], int size, size_t &result)
{
    result = 0;
    for (int i = 0; i < size; i++) {
        result = result * 10 + arr[i];
    }
}

 */

