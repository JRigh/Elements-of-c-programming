#-----------
# C++ basics
#-----------

# Example 1: Program to Print a Half-Pyramid Using *

#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}


# Example 2: Program to Print a Half-Pyramid Using Numbers

#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}


# Example 7: Program to Print a Pyramid Using Numbers

#include <iostream>
using namespace std;

int main() {

    int rows, count = 0, count1 = 0, k = 0;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int space = 1; space <= rows-i; ++space) {
            cout << "  ";
            ++count;
        }

        while(k != 2*i-1) {
            if (count <= rows-1) {
                cout << i+k << " ";
                ++count;
            }
            else {
                ++count1;
                cout << i+k-2*count1 << " ";
            }
            ++k;
        }
        count1 = count = k = 0;
        
               cout << endl;
    }
    return 0;
}


# Example 8: Program to print Pascal's triangle

#include <iostream>
using namespace std;

int main() {

    int rows, coef = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 0; i < rows; i++) {
        for(int space = 1; space <= rows-i; space++)
            cout <<"  ";

        for(int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
    }

    return 0;
}


# Example 9: Program to print Floyd's triangle

#include <iostream>
using namespace std;

int main() {

    int rows, number = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; ++j) {
            cout << number << " ";
            ++number;
        }

        cout << endl;
    }

    return 0;
}


# Example 10: Monte Carlo integration example

#include <iostream>
#include <cstdlib>
#include <cmath>

double myFunction(double x);
double monteCarloEstimate(double lowBound, double upBound, int iterations);

int main()
{

	double lowerBound, upperBound;
	int iterations;

	lowerBound = 1;
	upperBound = 5;
	iterations = 200;

	double estimate = monteCarloEstimate(lowerBound, upperBound,iterations);

	printf("Estimate for %.1f -> %.1f is %.2f, (%i iterations)\n",
			lowerBound, upperBound, estimate, iterations);

	return 0;
}


double myFunction(double x)
//Function to integrate
{
	return pow(x,4)*exp(-x);
}

double monteCarloEstimate(double lowBound, double upBound, int iterations)
//Function to execute Monte Carlo integration on predefined function
{

	double totalSum = 0;
	double randNum, functionVal;

	int iter = 0;

	while (iter<iterations-1)
	{

		//Select a random number within the limits of integration
		randNum = lowBound + (float(rand())/RAND_MAX) * (upBound-lowBound);

		//Sample the function's values
		functionVal = myFunction(randNum);

		//Add the f(x) value to the running sum
		totalSum += functionVal;

		iter++;
	}

	double estimate = (upBound-lowBound)*totalSum/iterations;

	return estimate;
}
