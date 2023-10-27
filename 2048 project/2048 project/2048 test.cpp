#include "2048 test.h"

#include <iostream>

#include "grid.h"
#include "tools.h"

using namespace std;

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

    oGrid.moveUpC();

    bool success = oGrid.Compare( result );

    if(success == true)
    {
        std::cout << "SUCCESS Test_Move_Up" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Move_Up" << std::endl;
        Tools::showTableC_T(config);
        oGrid.showTableC();
        Tools::showTableC_T(result);
    }

}

void TestIntegration::Test_Move_Down_Min_Range()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {2, 0, 0, 0},
        {0, 0, 0, 0}
    };

    std::vector<std::vector<int>> result =
    {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {2, 0, 0, 0}
    };

    Grid oGrid(config);


    oGrid.moveDownC();

    bool success = oGrid.Compare(result);

    if (success == true)
    {
        std::cout << "SUCCESS Test_Move_Down" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Move_Down";
        Tools::showTableC_T(config);
        oGrid.showTableC(); 
        Tools::showTableC_T(result);


    }

}

void TestIntegration::Test_Move_Left_Min_Range()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {0, 2, 0, 0},
        {0, 0, 0, 0},
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

    oGrid.moveLeftC();

    bool success = oGrid.Compare(result);

    if (success == true)
    {
        std::cout << "SUCCESS Test_Move_Left" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Move_Left" << std::endl;
        Tools::showTableC_T(config);
        oGrid.showTableC();
        Tools::showTableC_T(result);
    }

}

void TestIntegration::Test_Move_Right_Min_Range()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {0, 0, 2, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    std::vector<std::vector<int>> result =
    {
        {0, 0, 0, 2},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    Grid oGrid(config);

    oGrid.moveRightC();

    bool success = oGrid.Compare(result);

    if (success == true)
    {
        std::cout << "SUCCESS Test_Move_Right" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Move_Right" << std::endl;
        Tools::showTableC_T(config);
        oGrid.showTableC();
        Tools::showTableC_T(result);
    }

}







void TestIntegration::Test_Fusion_Up_Min_Range()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {2, 0, 0, 0},
        {2, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    std::vector<std::vector<int>> result =
    {
        {4, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    Grid oGrid(config);

    oGrid.moveUpC();

    bool success = oGrid.Compare(result);

    if (success == true)
    {
        std::cout << "SUCCESS Test_fusion_Up_Min_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_fusion_Up_Min_Range" << std::endl;
        Tools::showTableC_T(config);
        oGrid.showTableC();
        Tools::showTableC_T(result);
    }

}

void TestIntegration::Test_Fusion_Down_Min_Range()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {2, 0, 0, 0},
        {2, 0, 0, 0}
    };

    std::vector<std::vector<int>> result =
    {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {4, 0, 0, 0}
    };

    Grid oGrid(config);


    oGrid.moveDownC();

    bool success = oGrid.Compare(result);

    if (success == true)
    {
        std::cout << "SUCCESS Test_Fusion_Down_Min_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Fusion_Down_Min_Range";
        Tools::showTableC_T(config);
        oGrid.showTableC();
        Tools::showTableC_T(result);


    }

}

void TestIntegration::Test_Fusion_Left_Min_Range()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {2, 2, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    std::vector<std::vector<int>> result =
    {
        {4, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    Grid oGrid(config);

    oGrid.moveLeftC();

    bool success = oGrid.Compare(result);

    if (success == true)
    {
        std::cout << "SUCCESS Test_Fusion_Left_Min_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Fusion_Left_Min_Range" << std::endl;
        Tools::showTableC_T(config);
        oGrid.showTableC();
        Tools::showTableC_T(result);
    }

}

void TestIntegration::Test_Fusion_Right_Min_Range()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {0, 0, 2, 2},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    std::vector<std::vector<int>> result =
    {
        {0, 0, 0, 4},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    Grid oGrid(config);

    oGrid.moveRightC();

    bool success = oGrid.Compare(result);

    if (success == true)
    {
        std::cout << "SUCCESS Test_Fusion_Left_Min_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Fusion_Left_Min_Range" << std::endl;
        Tools::showTableC_T(config);
        oGrid.showTableC();
        Tools::showTableC_T(result);
    }

}
