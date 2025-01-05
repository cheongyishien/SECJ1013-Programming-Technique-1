#include <iostream> 
using namespace std; 
int average(int, int,int); 
int power (float p); 
int main() 
{ 
 int x, y, z, avrg, powerOf; 
 cout << "Please enter three numbers:" << endl; 
 cin >> x >> y >> z; 
 avrg = average (); 
 cout << "The average of the given three numbers is: " << avrg <<  endl; 
 power (); 
 cout << "The average number to the power of two is: " << power () << endl; 
return 0; 
} 
int average(int a, int b, int c) 
{ 
 int sum, avrg2; 
 sum = a + b + c; 
 avrg2 = sum / 3; 
} 
int power (int p) 
{ 
 int pOf; 
 pOf = pow(p,2); 
 return 0; 
}
