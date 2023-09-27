#include<iostream>
#include <iomanip>
#include <cmath>
#include <string>


using namespace std;

int main() {

	double commission_Rate;
	double sales_Amount;
	double commissions_Made;
	double commission_Percent;

	cout << "What is your sales amount?\n";
	cin >> sales_Amount;


	cout << setprecision(2) << fixed;

	if (sales_Amount <= 10000) {
		commission_Rate = .1;
		commissions_Made = sales_Amount * commission_Rate;
	}

	else if (sales_Amount > 15000) {
		commission_Rate = .2;
		commissions_Made = sales_Amount * commission_Rate;
	}

	else if (sales_Amount <= 15000 &&
		sales_Amount > 10000) {
		commission_Rate = .15;
		commissions_Made = sales_Amount * commission_Rate;
	}

	commission_Percent = commission_Rate * 100;

	cout << "Your commission rate based on your sales is " << commission_Percent << "% \n"
		"Your total commission made based on your sales is $" << commissions_Made << endl;

	return 0;
}