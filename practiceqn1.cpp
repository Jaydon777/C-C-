#define STARS "*****"
#define SITE "jaddu"
#define YEAR 22000
#include <iostream>
using namespace std ;

int main()
{
	cout << STARS << endl << SITE << endl << STARS ;
	cout << endl << "YEAR is: " << YEAR ;
	cout << endl << "Next YEAR is: " << ((YEAR)+1) << endl ;

	return 0 ;
}