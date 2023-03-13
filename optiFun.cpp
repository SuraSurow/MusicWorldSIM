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
    cout << "\nWrite your choice index:";
    int number;
    cin >> number;
    *ptrNum = number;
    return 0;
}
