
const int size_gridC = 4;

#include <vector>

class Grid
{
private:
	int i;
	std::vector<std::vector<int>> grid;

public:
	//attributes
	int starting;

	//methods
	Grid(int x, int y);
	
	Grid(std::vector<std::vector<int>> s);

	int randomNumberC(int number);

	void moveUpC();
	void moveDownC();
	void moveLeftC();
	void moveRightC();

	int newTilesC();

	bool testInGridC(int i, int j);
	bool testLooseC(int zero);

	void showTableC();

	bool Compare(std::vector<std::vector<int>> result);

};
