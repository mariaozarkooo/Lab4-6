#include "CircleInSquare.h"
#include <fstream>

int main() {
	CircleInSquare cis(10);

	cout << cis << endl;

	ofstream fout("result.txt");
	fout << cis << endl;
	fout.close();

	return 0;
}