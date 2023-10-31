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
        std::cout << "SUCCESS Test_Move_Up_Min_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Move_Up_Min_Range" << std::endl;
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
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
        std::cout << "SUCCESS Test_Move_Down_Min_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Move_Down_Min_Range";
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
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
        std::cout << "SUCCESS Test_Move_Left_Min_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Move_Left_Min_Range" << std::endl;
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
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
        std::cout << "SUCCESS Test_Move_Right_Min_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Move_Right_Min_Range" << std::endl;
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
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
        std::cout << "SUCCESS Test_Fusion_Up_Min_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Fusion_Up_Min_Range" << std::endl;
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
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
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
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
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
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
        std::cout << "SUCCESS Test_Fusion_Right_Min_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Fusion_Right_Min_Range" << std::endl;
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
        Tools::showTableC_T(result);
    }

}






void TestIntegration::Test_Move_Up_Max_Range()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {2, 0, 0, 0}
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

    bool success = oGrid.Compare(result);

    if (success == true)
    {
        std::cout << "SUCCESS Test_Move_Up_Max_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Move_Up_Max_Range" << std::endl;
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
        Tools::showTableC_T(result);
    }

}

void TestIntegration::Test_Move_Down_Max_Range()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {2, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
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
        std::cout << "SUCCESS Test_Move_Down_Max_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Move_Down_Max_Range";
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
        Tools::showTableC_T(result);


    }

}

void TestIntegration::Test_Move_Left_Max_Range()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {0, 0, 0, 2},
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
        std::cout << "SUCCESS Test_Move_Left_Max_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Move_Left_Max_Range" << std::endl;
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
        Tools::showTableC_T(result);
    }

}

void TestIntegration::Test_Move_Right_Max_Range()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {2, 0, 0, 0},
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
        std::cout << "SUCCESS Test_Move_Right_Max_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Move_Right_Max_Range" << std::endl;
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
        Tools::showTableC_T(result);
    }

}







void TestIntegration::Test_Fusion_Up_Max_Range()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {2, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {2, 0, 0, 0}
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
        std::cout << "SUCCESS Test_Fusion_Up_Max_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Fusion_Up_Max_Range" << std::endl;
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
        Tools::showTableC_T(result);
    }

}

void TestIntegration::Test_Fusion_Down_Max_Range()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {2, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
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
        std::cout << "SUCCESS Test_Fusion_Down_Max_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Fusion_Down_Max_Range";
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
        Tools::showTableC_T(result);


    }

}

void TestIntegration::Test_Fusion_Left_Max_Range()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {2, 0, 0, 2},
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
        std::cout << "SUCCESS Test_Fusion_Left_Max_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Fusion_Left_Max_Range" << std::endl;
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
        Tools::showTableC_T(result);
    }

}

void TestIntegration::Test_Fusion_Right_Max_Range()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {2, 0, 0, 2},
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
        std::cout << "SUCCESS Test_Fusion_Right_Max_Range" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_Fusion_Right_Max_Range" << std::endl;
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
        Tools::showTableC_T(result);
    }

}








void TestIntegration::Test_No_Spawn_Up()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {2, 0, 0, 0},
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

    oGrid.moveUpC();

    bool success = oGrid.Compare(result);

    if (success == true)
    {
        std::cout << "SUCCESS Test_No_Spawn_Up" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_No_Spawn_Up" << std::endl;
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
        Tools::showTableC_T(result);
    }

}

void TestIntegration::Test_No_Spawn_Down()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {2, 0, 0, 0}
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
        std::cout << "SUCCESS Test_No_Spawn_Down" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_No_Spawn_Down";
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
        Tools::showTableC_T(result);


    }

}

void TestIntegration::Test_No_Spawn_Left()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {2, 0, 0, 0},
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
        std::cout << "SUCCESS Test_No_Spawn_Left" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_No_Spawn_Left" << std::endl;
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
        Tools::showTableC_T(result);
    }

}

void TestIntegration::Test_No_Spawn_Right()
{
    //test Move Up Min Range
    std::vector<std::vector<int>> config =
    {
        {0, 0, 0, 2},
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
        std::cout << "SUCCESS Test_No_Spawn_Right" << std::endl;
    }
    else
    {
        std::cout << "FAILURE Test_No_Spawn_Right" << std::endl;
        std::cout << "starting grid :" << std::endl;
        Tools::showTableC_T(config);
        std::cout << "obtained result:" << std::endl;
        oGrid.showTableC();
        std::cout << "expected result:" << std::endl;
        Tools::showTableC_T(result);
    }

}