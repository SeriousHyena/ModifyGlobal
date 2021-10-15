/*
*-> create function called modifyGlobal-void and paramterless
*-> create a global variable called counter and initialize to 0
*-> inside main, call modifyGlobal inside a for loop and iterate 100 times
*-> print out the value of counter before and after the loop
*/


#include <iostream>

using namespace std;

//declare functions here
void modifyGlobal();

//declare variables here
int counter = 0;

int main()
{
	cout << "The value of counter before the loop is: " << counter << endl << endl;
	for (int i = 0; i < 100; i++)
	{
		modifyGlobal();
	}
	cout<<endl << "The value of counter after the loop is: " << counter << endl << endl;

	return 0;
}

void modifyGlobal()
{
	counter++;
	cout << "The value of the looping counter is now: " << counter << endl;
}