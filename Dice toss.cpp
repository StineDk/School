#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>
using namespace std;


int main() {
	int Throws;
	int Roll;
	vector <int> Result;
	srand(time(0));

	cout << "How many dice do you want to throw?\n";
	cin >> Throws;

	for (int i = 0; i < Throws; i++) {
		Roll = rand() % 6 + 1;
		Result.push_back(Roll);
	}

	for (int i = 1; i < Result.size(); i++) {
		int Current = Result[i];
		int j = i - 1;

		while (j >= 0 && Result[j] > Current) {
			Result[j + 1] = Result[j];
			j--;
		}
		Result[j + 1] = Current;
	}

	for (int resul : Result) {
		cout << resul << endl;
	}
} 