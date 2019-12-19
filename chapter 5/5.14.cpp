#include <iostream>
 #include <iomanip>
 #include <cmath>
 // for pow function
 using namespace std;

 int main() {

 cout << fixed << setprecision(2);

 double principal{1000.00}; 
 double rate{0.05}; 
 double rates{0.06};
 double rat{0.07};
 double ra{0.08};
 double r{0.09};
 double rs{0.10};

 cout << "Initial principal: " << principal << endl;
 cout << " Interest rate: " << rate << endl;
 cout << " Interest rate: " << rates << endl;
 cout << " Interest rate: " << rat << endl;
 cout << " Interest rate: " << ra << endl;
 cout << " Interest rate: " << r << endl;
 cout << " Interest rate: " << rs << endl;


 cout << "\nYear" << "\tAmount on deposit 5%" <<  "\tAmount on deposit 6%" <<  "\tAmount on deposit 7%" << "\tAmount on deposit 8%" << "\tAmount on deposit 9%" << "\tAmount on deposit 10%" <<endl;
 
for (unsigned int year{1}; year <= 10; year++) {

 double amount = principal * pow(1.0 + rate, year);
  double amoun = principal * pow(1.0 + rates, year);
   double amou = principal * pow(1.0 + rat, year);
    double amo = principal * pow(1.0 + ra, year);
     double am = principal * pow(1.0 + r, year);
      double a = principal * pow(1.0 + rs, year);
 

 
cout << year <<"\t\t" << amount <<"\t\t\t" << amoun <<"\t\t\t" << amou <<"\t\t\t" << amo <<"\t\t\t" << am <<"\t\t\t" << a << endl; 
}








 }

