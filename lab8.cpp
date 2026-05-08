//Sharif 
#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <algorithm>

void quadCo(int &a, int &b, int &c){
	cin >> a >> b >> c;
}

void small3(int &x, int &y, int &z){
    x = rand() % (999-100+1)+100;
    y = rand() % (999-100+1)+100;
    z = rand() % (999-100+1)+100;
}

int main(){
    int a,b;
    int x,y,z;
    int c;

    srand(time(0));
    cout << "Random roll(-10-10): ";
    cout << -10 + rand() % (21) << endl;

    cout << "Enter two positive integers: " << endl;
    cin >> a >> b;
    cout << "Random roll " << a << " to " << b << ":";   
    cout << rand() % (b-a+1)+a;
    cout << endl;

    cout << "Min of 3 random 3 digit numbers: ";
    small3(x,y,z);
    cout << min({x,y,z});
    cout << endl;

    cout << "Enter 3 coefficents for a quadratic equation: " << endl;
    quadCo( a, b, c);
    cout << "Coefficients : " << a << " " << b << " " << c << endl;

    double r1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    double r2 = (-b-sqrt(b*b-4*a*c))/(2*a);
    cout << "Root 1 solved: " << r1 << endl;
    cout << "Root 2 solved: " << r2 << endl;

    return 0;
}
