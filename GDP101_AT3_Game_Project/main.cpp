#include <iostream>
#include <string>
#include <windows.h>
#include <mmsystem.h>
#include "main.h"
#include "Rooms.h"

using std::cout;
using std::cin;
using std::string;

int main()
{
    //Returns 0 to start the game
    //if (Intro() == 0)
    //{
    //    HomeScreen();
    //}
    Game();
}

int Intro()
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
            PlaySound(TEXT("Jumpscare Sound Effect"), NULL, SND_FILENAME | SND_ASYNC);
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

            return 0;
        }
        else
        {
            "\n\033[0;37m"; //Makes text white
            cout << "\nFarewell\n\n";
            return 1;
        }
    }
    else
    {
        cout << "\nFarewell\n\n";
        return 1;
    }
}

void HomeScreen()
{
    system("cls");
    PlaySound(TEXT("Persona 5 OST 11 - To Another World.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
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
    //Room Instantiation

    // COLUMN MAJOR
     
    SafeRoom room00;
    room00.CanMoveEast();
    room00.CanMoveSouth();
    DeadEnd room01;
    room01.SetDescription("You enter the room. It's cold and damp.\n"
    "Looking around, you notice nothing of interest.\n"
    "There's nothing inherently dangerous here, nor is there a reason to stay.\n"
    
    "You should probably go back.\n");
    Room room02;
    Room room03;
    TalkRoom room10("You enter the room. It's dark. You try to broaden your eyes, but to no avail.\n"
        "You take a deep breathe, the odor of urine and feaces trailing in. You hold in your gag.\n\n"

        "Your eyes begin to adjust, in the corner you notice a troll.\n"
        "You begin to look for a hiding spot, but he calls out to you.\n\n"

        "'Don't worry', the troll says. 'I am not going to hurt you.'\n"
        "His tone seems genuine, but something is off. You can make out a smirk, his yellow teeth spiking out.\n\n"
        "What do you do?\n");
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
    PlaySound(TEXT("creak1.wav"), NULL, SND_FILENAME | SND_ASYNC);
    Room rooms[4][4] = { room00, room01, room02, room03, room10, room11, room12, room13,room20,room21,room22,room23,room30,room31,room32,room33 };
    
    int col = 0;
    int row = 0;
    //game loop
    while (true)
    {
        //Runs the room and returns the direction
        int dir = rooms[col][row].RunRoom();
        std::cout << dir;
        PlaySound(TEXT("creak1.wav"), NULL, SND_FILENAME | SND_ASYNC);
        //Processes direction (1,2,3,4) -> (N,E,S,W)
        switch (dir)
        {
        case 1:
            row += -1;
            break;
        case 2:
            col += 1;
            break;
        case 3:
            row += 1;
            break;
        case 4:
            col += -1;
            break;
        default:
            std::cout << "what";
            return;
        }
    }

    rooms[0][0].OutputDescription();
    int direction = room00.DirectionInput();

    //If east
    if (direction == 1)
    {
        PlaySound(TEXT("creak1.wav"), NULL, SND_FILENAME | SND_ASYNC);
        rooms[1][0].OutputDescription();
        int direction = room10.DirectionInput();
    }
    //If south
    else if (direction == 2)
    {
        PlaySound(TEXT("creak1.wav"), NULL, SND_FILENAME | SND_ASYNC);
        rooms[0][1].OutputDescription();
        int direction = room01.DirectionInput();
    }

    system("pause");
}