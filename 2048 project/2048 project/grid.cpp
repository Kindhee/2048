#include "grid.h"

#include <iostream>
#include "time.h"
#include <list>

#include "tools.h"

using namespace std;

Grid::Grid(int x, int y) {

    grid.resize(x);
    for(int i = 0; i < x; ++i)
    {
        grid[i].resize(y);
    }

    starting = 2;

    srand(time(NULL));

    for (int j = 0; j < size_gridC; ++j)
    {
        for (int i = 0; i < size_gridC; ++i)
        {
            grid[j][i] = 0;
        }
    }

    int test_starting_tiles;

    for (int i = 0; i < starting; ++i) {

        test_starting_tiles = 0;

        while (test_starting_tiles == 0) {
            x = randomNumberC(size_gridC);
            y = randomNumberC(size_gridC);
            if (grid[x][y] == 0) {
                test_starting_tiles = 1;
            }
        }
        grid[x][y] = 2;
    }
}

Grid::Grid(std::vector<std::vector<int>> config) {

    grid = config;
}

int Grid::randomNumberC(int number){
    int randomnumber;
    randomnumber = rand() % number;
    return(randomnumber);
}

bool Grid::testInGridC(int i, int j) {
    if (i > 3 || i < 0 || j>3 || j < 0) {
        return false;
    }
    else {
        return true;
    }
}

void Grid::moveUpC() {
    list<int> list_col{};
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if ((grid[j][i] != 0)) {
                list_col.push_back(grid[j][i]);
            }
        }
        while (list_col.size() < size_gridC) {
            list_col.push_back(0);
        }
        for (int l = 0; l < size_gridC; l++) {
            grid[l][i] = list_col.front();
            list_col.pop_front();
            if (testInGridC(i, l - 1) == true && grid[l - 1][i] == grid[l][i]) {
                grid[l - 1][i] += grid[l][i];
                grid[l][i] = 0;
            }
        }
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            if ((grid[j][i] == 0 && grid[j + 1][i] != 0)) {
                grid[j][i] = grid[j + 1][i];
                grid[j + 1][i] = 0;
            }
        }
    }
}

void Grid::moveDownC() {
    list<int> list_col{};
    for (int i = 0; i < 4; ++i) {
        for (int j = 3; j > -1; --j) {
            if ((grid[j][i] != 0)) {
                list_col.push_back(grid[j][i]);
            }
        }
        while (list_col.size() < size_gridC) {
            list_col.push_back(0);
        }
        for (int l = 3; l > -1; l--) {
            grid[l][i] = list_col.front();
            list_col.pop_front();
            if (testInGridC(i, l + 1) == true && grid[l + 1][i] == grid[l][i]) {
                grid[l + 1][i] += grid[l][i];
                grid[l][i] = 0;
            }
        }
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 3; j > 0; --j) {
            if ((grid[j][i] == 0 && grid[j - 1][i] != 0)) {
                grid[j][i] = grid[j - 1][i];
                grid[j - 1][i] = 0;
            }
        }
    }
}

void Grid::moveLeftC() {
    list<int> list_col{};
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if ((grid[i][j] != 0)) {
                list_col.push_back(grid[i][j]);
            }
        }
        while (list_col.size() < size_gridC) {
            list_col.push_back(0);
        }
        for (int l = 0; l < size_gridC; l++) {
            grid[i][l] = list_col.front();
            list_col.pop_front();
            if (testInGridC(i, l - 1) == true && grid[i][l - 1] == grid[i][l]) {
                grid[i][l - 1] += grid[i][l];
                grid[i][l] = 0;
            }
        }
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            if ((grid[i][j] == 0 && grid[i][j + 1] != 0)) {
                grid[i][j] = grid[i][j + 1];
                grid[i][j + 1] = 0;
            }
        }
    }
}

void Grid::moveRightC() {
    list<int> list_col{};
    for (int i = 0; i < 4; ++i) {
        for (int j = 3; j > -1; --j) {
            if ((grid[i][j] != 0)) {
                list_col.push_back(grid[i][j]);
            }
        }
        while (list_col.size() < size_gridC) {
            list_col.push_back(0);
        }
        for (int l = 3; l > -1; l--) {
            grid[i][l] = list_col.front();
            list_col.pop_front();
            if (testInGridC(i, l + 1) == true && grid[i][l + 1] == grid[i][l]) {
                grid[i][l + 1] += grid[i][l];
                grid[i][l] = 0;
            }
        }
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 3; j > 0; --j) {
            if ((grid[i][j] == 0 && grid[i][j - 1] != 0)) {
                grid[i][j] = grid[i][j - 1];
                grid[i][j - 1] = 0;
            }
        }
    }
}

int Grid::newTilesC() {
    int count = 0;
    int count_random = 0;
    int random_coord;
    for (int i = 0; i < size_gridC; ++i) {
        for (int j = 0; j < size_gridC; ++j)
        {
            if (grid[i][j] == 0) {
                count += 1;
            }
        }
    }
    if (count == 0) {
        return 0;
    }

    if (count == 1) {
        random_coord = 0;
    }
    else {
        random_coord = randomNumberC(count);
    }
    for (int i = 0; i < size_gridC; ++i) {
        for (int j = 0; j < size_gridC; ++j) {
            if (grid[i][j] == 0) {
                if (count_random == random_coord) {
                    if (randomNumberC(3) == 0) {
                        grid[i][j] = 4;
                    }
                    else {
                        grid[i][j] = 2;
                    }
                }
                count_random += 1;
            }
        }
    }
    return 1;
}

bool Grid::testLooseC() {
    for (int j = 0; j < 4; ++j) {
        for (int i = 0; i < 4; ++i)
        {
            if (grid[i][j] == 0) {
                return false;
            }
            if (testInGridC(i, j - 1) == true && grid[i][j - 1] == grid[i][j] || testInGridC(i - 1, j) == true && grid[i - 1][j] == grid[i][j] || testInGridC(i + 1, j) == true && grid[i + 1][j] == grid[i][j] || testInGridC(i, j + 1) == true && grid[i][j + 1] == grid[i][j]) {
                return false;
            }
        }
    }
    return true;
}


bool Grid::AreEqual(int i1, int j1, int i2, int j2) 
{
    if (testInGridC(i1, j1) == false || testInGridC(i2, j2) == false || grid[i1][j1] != grid[i2][j2])
    {
        return false;
    }
    else 
    {
        return true;
    }


}

void Grid::showTableC() {
    Tools::showTableC_T(grid);
}



bool Grid::Compare(std::vector<std::vector<int>> result)
{
    for(int x = 0; x < size_gridC; ++x)
    {
        for (int y = 0; y < size_gridC; ++y)
        {
            if (grid[x][y] != result[x][y])
            {
                return false;
            }
        }
    }
    return true;
}
