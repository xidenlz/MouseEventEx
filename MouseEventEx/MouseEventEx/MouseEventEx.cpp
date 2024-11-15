#include "MouseEventEx.h"

int main()
{
    // Usage 
    SysCall::SendMouseEventEx(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    SysCall::SendMouseEventEx(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

    printf("Catch me if you can!\n");
}

