// Name: Michael Sanchez
// 10/22/15
// Program the reads in information from the file and outputs it in another file with an average.

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	string firstName, lastName, highFirst, highLast;
	double n1,n2,n3,n4,n5,n6,avg, max = -100000;

	fin.open("scores.txt");
	fout.open("results.txt");

	if(fin.fail())
	{
		cerr << "Error in the input file.\n";
	}
	if(fout.fail())
	{
		cerr << "Error in the input file.\n";
	}

	while(fin >> firstName >> lastName >> n1 >> n2 >> n3 >> n4 >> n5 >> n6)
	{
		fout.setf(ios::fixed);
		fout.setf(ios::showpoint);
		fout.precision(2);
		//cout.setf(ios::left);
		
		fout << setw(12) << firstName << setw(12) << lastName << setw(8) << n1 << setw(8) << n2 << setw(8) << n3 << setw(8) << n4 << setw(8) << n5 << setw(8) << n6 << endl;
			avg = (n1 + n2 + n3 + n4 + n5) / 5;
			
			if(avg > max)
			{
				highFirst = firstName;
				highLast = lastName;
				max = avg;
			}
	
	}
		fout <<  "\nHighest average score:";
		fout << setw(10) << highFirst << setw(10) << highLast << setw(8) << avg << endl << endl;
	

	fin.close();
	fout.close();

	return 0;
}
