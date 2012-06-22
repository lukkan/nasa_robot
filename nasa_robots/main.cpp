//
#include<vector>
#include<string>
#include<iostream>

#include "EvacuateRobots.h"

using namespace std;

int main( int argc, char* argv[])
{
	int R;
	cin>>R; //robots

	vector<string> cave;
	string temp;
	for( int i = 0; i < R; i++) {
		cin>>temp;
		cave.push_back(temp);
	}//for

	double V;//oiling paraneter
	cin>>V;

	EvacuateRobots evacR;
	string ret = evacR.evacuateAll(cave, V);
//	cout << "!" << endl;

	cout << ret << endl;	

	cout.flush();
	return 0;
};//main

//	int C, G, I, S;
//	cin>>C; //cakes
//	cin>>G; //guests
//	cin>>I; //ingredients
//	cin>>S; // size, one side
//
//	int gi = G * I;
//	vector<int> preferences;
//	preferences.reserve(gi);
//	int temp;
//	for( int i = 0; i < gi; i++) {
//		cin>>temp;
//		preferences.push_back(temp);
//	}//for
//
//	vector<int> cakes;
//	int cssi = C * S * S * I;
//	cakes.reserve(cssi);
//	for( int i = 0; i < cssi; i++) {
//		cin>>temp;
//		cakes.push_back(temp);
//	}//for
//
//	Cakes kaka;
//	vector<int> ret = kaka.split( C, G, I, S, preferences, cakes);
////	cout << "!" << endl;
//	
//	for(int i = 0; i < ret.size(); i++) {
//		cout << ret[i] << endl;	
//	}//for
//
//	cout.flush();
//	return 0;
