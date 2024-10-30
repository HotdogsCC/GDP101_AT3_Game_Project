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
    Game();

    //Returns 0 to start the game
    if (Intro() == 0)
    {
        HomeScreen();
    }
    
}

int Intro()
{
    cout << "This game is not suitable for those who are easily discomforted, or suffer from epilepsy.\n\n";
    cout << "This game is best enjoyed with audio, and in full screen.\n\n";
    cout << "Type 'Ok' if you wish to continue.\nTyping anything else will close this game. You must input at least 1 character.\n\n";

    std::string acceptanceInput;
    cin >> acceptanceInput;

    if (acceptanceInput == "Ok")
    {
        PlaySound(TEXT("[Persona 4 OST] 10 - Who's there？"), NULL, SND_FILENAME | SND_ASYNC); //plays music
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

    //Constructor sets return direction (North)
    DeadEnd room01(1);
    room01.SetDescription("You enter the room. The same must from the previous room haunts this one, is there any escape?\n\n"
        
        "Looking around, you notice nothing of interest but something tugs at the corner of your brain. \n"
        "Perhaps it's the smoky haze that has began to swarm all four corners, or that putrid smell of rotten dreams.\n"
        "Either way, it's got your breath hastening and brain rapidly calculating an escape route.\n\n"

        "There's nothing inherently dangerous here, you think but also nothing really of substance either.\n\n"

        "Do you risk turning back and discovering what dangerous secrets may tantalise the very depths of your subconscious?\n"
        "Or do you stay complacent in your somewhat primitive safe haven?\n"
        "Do you dare journey into the seedy underbelly of the beast?\n\n"

        "You should probably go back.\n\n");

    Room room02;
    Room room03;

    //This memory is deallocated in the TaklRoom class destructor
    string* messages10 = new string[6];
    messages10[0] = 
        "You enter the room. It's dimly lit. You try to adjust your eyes to the slight increase of light, blinking rapidly but to no avail.\n"
        "You take a deep breath, but you're met with the odour of urine and faeces instead of the expected cool fog. You attempt hold in your gag.\n\n";
    messages10[1] = 
        "Your eyes begin to adjust to the dim gloom, just as you notice the unmistakable olive rippled skin of a easternwich troll.\n"
        "Your breath hitches, your heart pounding faster as you quickly scan your surroundings for any sign of substantial hiding spot before he sees you.\n"
        "But alas, it's too late. His yellowed eyes have already spied you, a faint smirk arising from his thick purpled lips.\n\n";
    messages10[2] = 
        "'Don't worry', the troll purrs. 'I am not going to hurt you.'\n\n";
    messages10[3] =
        "His tone seems genuine, enough, but something lingers at the end of his phrase that turns your stomach just a little.\n"
        "You decide the risk is just enticing enough to bare and continue to listen, plus you need to find someway to get out of here.\n\n";
    messages10[4] =
        "The beast lifts his chin in acknowledgement, his smirk spreading into a wide grin.\n"
        "'Through the door behind me lies a dungeon which will lead you to the exit. The only exit point is through this dungeon.\n"
        "However, guarding this dungeon is a fearsome knight who prays on innocent mortals, like yourself.\n" 
        "If he catches you he will imprison you, keeping him as his own personal slave for all of eternality.'\n"
        "You furrow your brow. All of eternity? How on earth are you supposed to escape?\n\n";
    messages10[5] =
        "Noticing your worry the troll assures you, bending down to meet your eye, his gigantic yellow orbs widening in reassurance.\n"
        "Lucky for you the knight lost all his eyesight many moons ago in a brutal battle, as long as you sneak past and don't make a single sound he will never catch you.\n\n"
        "You swallow hard and nod.Accepting your fate you advance to the next room";
    TalkRoom room10(messages10, 6);

    DeadEnd room11(4);
    room11.SetDescription(
        "Limp by limp you trawl through the hidden passageway, following the lantern lit path.\n\n"

        "Along it’s walls you see ornate carvings that plaster it’s surface.\n"
        "You see lines of script, perhaps lines of poetry written in a long lost tongue.\n"
        "Drawings of a utopia (one far from this dungeon you’re sure) where waterfalls cascade\n"
        "down large mountain ledges and lush forests contain all sorts of unusual animals.\n\n"

        "Suddenly the path comes to an end.\n"
        "You step through the bolted wooden door in front of you and fall into another room.\n\n"
        "It's the dead end next to where you woke up.\n\n"
    );

    Room room12;
    Room room13;

    string introMessages20 = 
        "In front of you lie two cobblestoned paths.\n"
        "One path winds all the way to the base of the knights throne while the other leads beyond your line of vison, half covered by... is that bones?\n"
        "If so, they seem human.\n\n"

        "Do you take the path infront of the knight, whom you’ve been told cannot see?\n"
        "Or, take the path behind the knight covered in the bones of your predecessors and possibly soon yours.\n\n"
        
        "Enter 'Infront' or 'Behind': ";
    string winMessages20 =
        "Gulping, you tentively step one foot onto the bone trodden path, a bone immediately snapping under your weight.\n"
        "You wince as the bone’s crunch reverberates off the stone walls but the knight doesn't react in the slightest.\n"
        "Confused you take another step onto another pile of bones and another crunch, much louder this time.\n"
        "Echoes around the room but yet no reaction from the knight.\n\n"

        "The troll lied.\n\n"

        "You leap forward in glee, advancing further through the room and around the Knight’s throne successfully without alerting him.\n"
        "This quest will not be easy but you have to remember to keep your wits about you as you realise...\n\n"

        "No one can be trusted.\n\n";
    string loseMessages20 =
        "\nReaching the throne you notice it is infact made up of a pile of bones, impossibly balanced almost like a very macabre Jenga.\n"
        "You lean closer, attempting to get a better view just as the knight's eyes snap open,\n"
        "your blood running cold with the realisation slowly dawning on you -\n\n"
        
        "The knight is not blind.\n\n"
        
        "With a firm set scowl the knight brings a firm fist, grapping you by the scruff of you neck and lifting you high into the air.\n"
        "'How dare you think to steal MY throne!'\n"
        "The knight bellows, mouth open so wide you can see specks of rotting flesh lodged between each teeth.\n"
        "'Just for this I will throw you into my dungeon for you to live for eternity as my personal slave.'\n\n"
        
        "Everything goes black.\n\n";
    string correctInput20 =
        "Behind";
    StealthRoom room20(&introMessages20, &winMessages20, &loseMessages20, &correctInput20, 2, 3);

    DeadEnd room21(4);
    room21.SetDescription(
        "You land in the dungeon with a dull thud, a sharp pain rising from you knee.\n"
        "You look down and realise your entire left leg has a huge gash down your thigh,\n"
        "and calf while your right knee seems to be bruised and slightly swollen.\n\n"

        "Suddenly, a small spec of light catches your eye.\n"
        "Limping you advance toward it, smashing the wall in to reveal the source of the light.\n"
        "A lantern-lit hidden passage way.\n"

        "With no choice but to proceed you climb inside.\n\n");

    Room room22;
    Room room23;

    DeadEnd room30(3);
    room30.SetDescription(
        "Ecstatic that you made it past the knight without being spotted you release a sigh of relief.\n\n"
        "However, this relief doesn’t last long because you hear mummuring in the next room.\n"
        "You look around you.\n"
        "With no where else to go you have no choice but to continue for fear that any moment could be your last.\n\n"
    );

    int* winningNums31 = new int[2];
    winningNums31[0] = 2;
    winningNums31[1] = 1;
    string* winMsgs31 = new string[2];
    winMsgs31[0] = 
        "The minotaur is shocked, which fades into a smug confident look.\n"
        "He charges again.\n\n"

        "Do you:\n"
        "(1) Slide under the beats legs\n"
        "(2) Roll out the way again\n\n";
    winMsgs31[1] = 
        "You slide under him. He was moving on an angle, expecting you to roll.\n"
        "You trip him up, causing him to ram his antlers into the ground, becoming lodged in a crack between two stones.\n"
        "You run towards the next door, aware he wont be stuck for much longer.\n\n";
    string* loseMsgs31 = new string[2];
    loseMsgs31[0] = "You get impaled by the minotaur's antlers. You black out.\n\n";
    loseMsgs31[1] = "The centaur anticpated your slide and stabs you. You black out.\n\n";
    BattleRoom room31(2, winningNums31, winMsgs31, loseMsgs31, 3, 4);
    room31.SetDescription(
        "A new room, somewhat more mistreated than the rest.\n\n"

        "As you circle to take in your surroundings you notice the deep dents settled into the wall.\n"
        "Behind you, you hear a rattling snout, and the distinct sound of hooves on stone.\n"
        "Swifty turning you come face to face with a furious looking minotaur that begins to charge.\n\n"

        "Do you:\n"
        "(1) Stand your ground, and tackle the beast head on.\n"
        "(2) Role out of the way.\n\n"
    );

    Room room32;
    Room room33;
    PlaySound(TEXT("creak1.wav"), NULL, SND_FILENAME | SND_ASYNC);
    Room* rooms[4][4] = { &room00, &room01, &room02, &room03, &room10, &room11, &room12, &room13, &room20, &room21, &room22, &room23, &room30, &room31, & room32, &room33 };
    
    int col = 0;
    int row = 0;
    //game loop
    while (true)
    {
        //Runs the room and returns the direction
        int dir = rooms[col][row]->RunRoom();
        //std::cout << dir;
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

    rooms[0][0]->OutputDescription();
    int direction = room00.DirectionInput();

    //If east
    if (direction == 1)
    {
        PlaySound(TEXT("creak1.wav"), NULL, SND_FILENAME | SND_ASYNC);
        rooms[1][0]->OutputDescription();
        int direction = room10.DirectionInput();
    }
    //If south
    else if (direction == 2)
    {
        PlaySound(TEXT("creak1.wav"), NULL, SND_FILENAME | SND_ASYNC);
        rooms[0][1]->OutputDescription();
        int direction = room01.DirectionInput();
    }

    system("pause");
}