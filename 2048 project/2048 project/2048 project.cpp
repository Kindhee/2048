#include <iostream>
#include "time.h"
#include <list>
#include "grid.h"
#include "2048 test.h"

using namespace std;

void Tests()
{
    TestIntegration oTestIntegration;
    oTestIntegration.Test_Move_Up_Min_Range();
    oTestIntegration.Test_Move_Down_Min_Range();
    oTestIntegration.Test_Move_Left_Min_Range();
    oTestIntegration.Test_Move_Right_Min_Range();

    oTestIntegration.Test_Fusion_Up_Min_Range();
    oTestIntegration.Test_Fusion_Down_Min_Range();
    oTestIntegration.Test_Fusion_Left_Min_Range();
    oTestIntegration.Test_Fusion_Right_Min_Range();
}

void Game() 
{

    ///
    Grid my_grid(4, 4);

    char player_input;
    int end_of_game = 0;
    int valid_play;
    int zero = 0;

    while (end_of_game == 0) {

        system("cls");
        valid_play = 0;
        my_grid.showTableC();

        if (my_grid.testLooseC(zero) == true) {
            end_of_game = 1;
        }

        std::cout << std::endl;
        std::cout << "type a direction :" << std::endl;
        std::cout << "   z   " << std::endl;
        std::cout << "q     d" << std::endl;
        std::cout << "   s   " << std::endl;
        std::cout << std::endl;

        std::cin >> player_input;
        switch (player_input) {

        case 'z':
            my_grid.moveUpC();
            valid_play = 1;
            break;

        case 'q':
            my_grid.moveLeftC();
            valid_play = 1;
            break;

        case 's':
            my_grid.moveDownC();
            valid_play = 1;
            break;

        case 'd':
            my_grid.moveRightC();
            valid_play = 1;
            break;

        default:
            break;

        }
        if (valid_play == 1) {
            zero = my_grid.newTilesC();
        }
    }
    std::cout << std::endl;
    std::cout << "You lost" << std::endl;
    std::cout << "end of game" << std::endl;
    std::cout << std::endl;
    // slt
}

int main()
{
    Tests();

    //Game();
}

