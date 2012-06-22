
#include<string>
#include<vector>

using namespace std;

class EvacuateRobots {

	struct CaveSquare {
		int row;
		int col;
		string cellContent;
		int oil;

	};//CaveSquare


public:
	string evacuateAll( vector<string> cave, double V) {

		const int R = cave.size();
		const int C = cave[0].size();
		vector< vector<CaveSquare> > caveMaze;
		vector<CaveSquare> tempRow;
		CaveSquare tempSquare;
		string tempCh;;
		for(int r = 0; R < r; r++) {

			for(int c = 0; c < C; c++) {
				tempCh = cave[r].substr(c,1);

			}//for c

		}//for r

		string ret;
		ret.append("F");


		return ret;
	};//evacuateAll

};//class EvacuateRobots