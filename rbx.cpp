#include <Windows.h>
#include <iostream>
#include <string>
//garbage, dont use i dont recommend ussing this as you can prob use some hook or smth to modify the messagebox
//WORKS btw roblox cannot patch this it doesnt interact internally 

int main() {//for NOOBS
    const char* roblox_crash = "Roblox Crash";
    std::string exploit = "Robloxsploit"; //theres 2 errors one is named Roblox Crash and one is windows clean boot; i suggest doing both for this case

    while (true) {
        HWND hwnd = FindWindowA(NULL, roblox_crash);

        if (hwnd != NULL) {
            std::string message = "An unexpected error occurred and " + exploit + " needs to quit!\n\nERROR: exploit was too shit and detected!";
            system("taskkill /F /IM robloxplayerbeta.exe");//close roblox message
            MessageBoxA(NULL, message.c_str(), exploit.c_str(), MB_TOPMOST);//show our msg
            break;
        }

        Sleep(1);//loop, we can do NO loop in a new thread but this is just example
    }

    return 0;
}
