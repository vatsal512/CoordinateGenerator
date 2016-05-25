//#ifndef ThisClass
//#define ThisClass

#include <iostream>
#include <vector>
using std::vector;
class Coordinates{
public:
	int N;          						// Number of Detectors
	int M;
	double temp;		
	vector<vector <double>> coordinate;						
	//double coordinate[3][30];				//
	void CoGenerator(int N, int M);
	double GenRandom(double min, double max);
	void Print();

};
//#endif