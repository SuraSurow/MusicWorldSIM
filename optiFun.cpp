#include "headFile.h"

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


