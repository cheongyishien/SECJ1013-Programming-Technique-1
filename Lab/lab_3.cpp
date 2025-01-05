#include <iostream> 
#include <cmath>//Error 1
using namespace std; 
int average(int, int,int); 
int power (int); //Error 2
int main() 
{ 
 int x, y, z, avrg, powerOf; 
 cout << "Please enter three numbers:" << endl; 
 cin >> x >> y >> z; 
 avrg = average (x,y,z);//Error 3 
 cout << "The average of the given three numbers is: " << avrg <<  endl; 
 power (avrg);//Error 34
 cout << "The average number to the power of two is: " << power (avrg) << endl; 
return 0; 
} 
int average(int a, int b, int c) 
{ 
 int sum, avrg2; 
 sum = a + b + c; 
 avrg2 = sum / 3; 
 return avrg2;
} 
int power (int p) 
{ 
 int pOf; 
 pOf = pow(p,2); 
 return pOf; 
}
