#ifndef GlobalData_h
#define GlobalData_h

#include <string>

using namespace std;

class GlobalData {
public:
	double H, B, nH, nB, nh, ne;

	GlobalData(const string dataFile);
};

#endif // !GlobalData_h

