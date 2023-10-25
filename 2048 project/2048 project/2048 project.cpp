#include <iostream>
#include "time.h"
#include <list>
#include "grid.h"
using namespace std;


int main()
{
    int grid[size_gridC][size_gridC];

    Grid my_grid(grid);

    char player_input;
    int end_of_game = 0;
    int valid_play;
    int zero = 0;

    while (end_of_game == 0){

        system("cls");
        valid_play = 0;
        my_grid.showTableC(grid);

        if (my_grid.testLooseC(grid, zero) == true) {
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
                my_grid.moveUpC(grid);
                valid_play = 1;
                break;

            case 'q':
                my_grid.moveLeftC(grid);
                valid_play = 1;
                break;

            case 's':
                my_grid.moveDownC(grid);
                valid_play = 1;
                break;

            case 'd':
                my_grid.moveRightC(grid);
                valid_play = 1;
                break;

            default:
                break;

        }
        if (valid_play == 1) {
            zero = my_grid.newTilesC(grid);
        }
    }
    std::cout << std::endl;
    std::cout << "You lost" << std::endl;
    std::cout << "end of game" << std::endl;
    std::cout << std::endl;
    // slt
}
