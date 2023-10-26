#include "2048 test.h"
#include "grid.h"

TestIntegration::TestIntegration()
{

}

void TestIntegration::Test_Move_Up_Min_Range()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {0, 0, 0, 0},
        {2, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    std::vector<std::vector<int>> result =
    {
        {2, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    Grid oGrid(config);

    oGrid.moveRightC();

    bool success = oGrid.Compare( result );

    if(success == true)
    {
        std::cout << "SUCCESS Test_Move_Up" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Move_Up" << std::endl;
    }

}
void TestIntegration::Test2()
{

}