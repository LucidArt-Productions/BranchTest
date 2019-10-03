#include <iostream>
#include <fstream> //Needed to use files
using namespace std;

int main()
{
	ofstream outputFile;

	outputFile.open("demofile.txt"); //Opens the output file

	cout << "Now writing data to the file. \n";

	outputFile << "Nintendo Switch" << endl;
	outputFile << "Playstation 4" << endl;
	outputFile << "Xbox One" << endl;
	outputFile << "PC" << endl;

	outputFile.close();
	cout << "DONE! \n";

	system("pause");
	return 0;
}

/*
fstream
=======
ifstream -- Input file stream

ofstream -- Output file stream

fstream -- File Stream (does both input and output)

*/