#include <iostream>

using std::cout;
using std::endl;

#include <math.h>

int main(int argc, char** argv)
{
	cout << "pythagorean triples" << endl;
	
	for(int side1 = 1; side1 < 500; side1 ++)
	{
		for(int side2 = 1; side2 < 500; side2 ++)
		{
			for(int hypotenuse = 1; hypotenuse < 500; hypotenuse ++)
			{
				//take a range between 1 to 500 as a result
				if(pow(side1,2) + pow(side2,2) == pow(hypotenuse,2) && pow(hypotenuse,2) <= 500)
				{
					cout << side1 << " + " << side2  << " = "  << hypotenuse << endl;

				}
			}
		}	
	}	
	return 0;
}
  
