#include "headFile.h"

void pressEnter()
{
    std::cout << "\n\n\t ENTER to continue ";
    char c;
    do {
        c=getchar();
        putchar (c);
    } while (c != '\n');
}

int index(int* ptrNum)
{
    std::cout << "\nWrite your choice index:";
    int number;
    std::cin >> number;
    *ptrNum = number;
}
