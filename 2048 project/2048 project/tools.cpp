#include "Tools.h"

#include <iostream>

namespace Tools 
{
    void showTableC_T(std::vector<std::vector<int>> grid) {

        for (int j = 0; j < 4; ++j)
        {
            for (int i = 0; i < 4; ++i)
            {
                if (grid[j][i] < 10) {
                    std::cout << "   " << grid[j][i] << "  ";
                }
                else if (grid[j][i] > 10 && grid[j][i] < 100) {
                    std::cout << "   " << grid[j][i] << " ";
                }
                else if (grid[j][i] > 100 && grid[j][i] < 1000) {
                    std::cout << "  " << grid[j][i] << " ";
                }
                else if (grid[j][i] > 1000 && grid[j][i] < 10000) {
                    std::cout << " " << grid[j][i] << " ";
                }
                else if (grid[j][i] > 10000 && grid[j][i] < 100000) {
                    std::cout << " " << grid[j][i] << "";
                }
                else {
                    std::cout << grid[j][i];
                }
            }
            std::cout << std::endl << std::endl;
        }
    }
}
