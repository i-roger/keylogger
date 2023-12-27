#define KEY_ESC 27

#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <iostream>

using namespace std;

int main()
{

    int c = 0;

    while (c != KEY_ESC)    //esc key code is 27
    {
        if (!_kbhit()) {
            c = _getch();

            switch (c)
            {
            case VK_RETURN:
                cout << endl << "Apertou Enter" << endl;//key up
                break;
            }//switch
            printf("%c",c);
        }//if

    }//while

    return 0;
}
