#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()
{
	vector<string> floor;
	vector<int> occ;

	int i;
	int v;

	floor.push_back("Floor 1");
	floor.push_back("Floor 2");
	floor.push_back("Floor 3");
	floor.push_back("Floor 4");
	floor.push_back("Floor 5");
	floor.push_back("Floor 6");
	floor.push_back("Floor 7");
	floor.push_back("Floor 8");
	floor.push_back("Floor 9");
	floor.push_back("Floor 10");

	for (i = 0; i < 10; i++)
	{
		cout << "Please Enter the occupancy on Floors 1-10, each floor only hass 22 rooms" << endl;
		cout << floor[i] << " = ";
		cin >> v;
		occ.push_back(v);
	}
	
	for (i = 0; i < 10; i++)
	{
		if (i >= 10) continue;
		cout << "the occupancy for " << floor[i] << " is " << occ[i] << endl;

	}

	cout << "Total number of rooms booked: " << occ[0] + occ[1] + occ[2] + occ[3] + occ[4] + occ[5] + occ[6] + occ[7] + occ[8] + occ[9] << endl;
}


