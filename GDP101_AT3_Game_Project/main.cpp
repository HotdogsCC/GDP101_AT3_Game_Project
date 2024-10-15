#include <iostream>
#include <string>
#include <windows.h>
#include "main.h"
#include "SafeRoom.h"

using std::cout;
using std::cin;
using std::string;

int main()
{
    //Intro();
    Game();
}

void Intro()
{
    cout << "This game is not suitable for children or those who are easily disturbed.\n\n";
    cout << "This game contains uncomfortable themes and flickering lights.\n\n";
    cout << "Type 'Ok' if you wish to continue.\nTyping anything else will close this game. You must input at least 1 character.\n\n";

    std::string acceptanceInput;
    cin >> acceptanceInput;

    if (acceptanceInput == "Ok")
    {
        cout << "\n\033[0;31m"; //Makes text red
        cout << "Are you sure? Type 'Ok' again.\n";
        cout << "\n\033[0;33m"; //Makes text yellow
        acceptanceInput = "";
        cin >> acceptanceInput;
        if (acceptanceInput == "Ok")
        {
            system("cls"); //Clears screen;
            cout << "\033[0;37m"; //Makes text white
            cout << "Let's play.\n";
            Sleep(1000);
            cout << ".";
            Sleep(1000);
            cout << ".";
            Sleep(1000);
            cout << ".";
            Sleep(2000);
            cout << "\n\033[0;31m"; //Makes text red
            cout << ":)";
            Sleep(2000);
            system("cls"); //Clears screen;
            string momo =
                "...........*UHWHН!hhhhН!?M88WHXХWWWWSW$o\n"
                ".......X * #M@$Н!eeeeНXНM$$$$$$WWxХWWW9S0\n"
                "…...ХН!Н!Н!? HН..ХН$Н$$$$$$$$$$8XХDDFDFW9W$\n"
                "....Н!f$$$$gХhН!jkgfХ~Н$Н#$$$$$$$$$$8XХKKW9W$, \n"
                "....ХНgХ:НHНHHHfg~iU$XН ? R$$$$$$$$MMНGG$9$R$$\n"
                "....~НgН!Н!df$$$$$JXW$$$UН!? $$$$$$RMMНLFG$9$$$\n"
                "......НХdfgdfghtХНM''T#$$$$WX??#MRRMMMН$$$$99$$\n"
                "......~? W…fiW * `........`''#$$$$8Н!Н!? WWW ? Н!J$99999$$$\n"
                "...........M$$$$.............`''T#$T~Н8$WUXUQ$$$$$99$9$$\n"
                "...........~#$$$mХ.............~Н~$$$ ? $$$''''$F$$$990$0\n"
                "..............~T$$$$8xx......xWWFW~## * '''''''''I * *9999о\n"
                "...............$$$.P$T#$$@@W@ */**$$..........,,*90о\n"
                ".............$$$L!?$$.XXХXUW....../....$$,,,,.,,ХJ;09*\n"
                "............$$$.......LM$$$$Ti......../.....n+НHFG$9$*\n"
                "..........$$$H.Нu....''$$B$$MEb!MХUНT$$0\n"
                "............W$@WTL...''*$$$W$TH$Н$$0\n"
                "..............?$$$B$Wu,,''***PF~***$/ ***0\n"
                "...................*$$g$$$B$$eeeХWP0\n"
                "........................*0$$$$M$$00F''\n";
            cout << momo;
            Sleep(50);
            system("cls"); //Clears screen;
            cout << "\n\033[0;37m"; //Makes text white
            cout << momo;
            Sleep(50);
            system("cls"); //Clears screen;
            cout << "\n\033[0;31m"; //Makes text red
            cout << momo;
            Sleep(50);
            system("cls"); //Clears screen;
            cout << "\n\033[0;37m"; //Makes text white
            cout << momo;
            Sleep(50);
            system("cls"); //Clears screen;
            cout << "\n\033[0;31m"; //Makes text red
            cout << momo;
            Sleep(50);
            system("cls"); //Clears screen;
            cout << "\n\033[0;37m"; //Makes text white
            cout << momo;
            Sleep(50);
            system("cls"); //Clears screen;
            cout << "\n\033[0;31m"; //Makes text red
            cout << momo;
            Sleep(50);
            system("cls"); //Clears screen;

            HomeScreen();
        }
        else
        {
            "\n\033[0;37m"; //Makes text white
            cout << "\nFarewell\n\n";
            system("pause");
            exit;
        }
    }
    else
    {
        cout << "\nFarewell\n\n";
        system("pause");
        exit;
    }
}

void HomeScreen()
{
    system("cls");
    string title =
        "______\n"
        "| _  \\\n"
        "| | | | _   _  _ __    __ _   ___    ___    _ __\n"
        "| | | || | | || '_ \\  / _` | / _ \\  / _ \\  | '_ \\\n"
        "| |/ / | |_| || | | || (_| ||  __/ | (_) | | | | |\n"
        "|___ / \\__, _||_| |_| \\__, | \\___|  \\___/  |_| |_| \n"
        "                       __/ |\n"
        "                      |__ / \n"
        " _____\n"
        "| ___| \n"
        "| |__   ___    ___   __ _  _ __   ___\n"
        "| __|  / __|  / __| / _` || '_ \\  / _ \\            \n"
        "| |___ \\__ \\ | (__|  (_| || |_) || __ / \n"
        "\\____/ |___/  \\___| \\__,_|| .__ / \\___| \n"
        "                          | |\n"
        "                          |_| \n";
    cout << title << "\n\nPress enter to continue\n";

    system("pause");
    Game();
}

void Game()
{
    system("cls");
    SafeRoom room00;
    room00.CanMoveEast();
    room00.CanMoveSouth();
    Room room01;
    Room room02;
    Room room03;
    Room room10;
    Room room11;
    Room room12;
    Room room13;
    Room room20;
    Room room21;
    Room room22;
    Room room23;
    Room room30;
    Room room31;
    Room room32;
    Room room33;

    Room rooms[4][4] = { room00, room01, room02, room03, room10, room11, room12, room13,room20,room21,room22,room23,room30,room31,room32,room33 };
    rooms[0][0].OutputDescription();
    int myInt = room00.DirectionInput();
    system("pause");
}