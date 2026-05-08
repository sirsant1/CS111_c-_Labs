//Sharif Anthony
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

void ranDice(int &dice){
    dice = rand() % (6-1+1)+1;
}

void desOrder(int &a, int &b, int &c){
    if(a<b) swap (a,b);
    if (a<c) swap (a,c);
    if (b<c) swap (b,c);
}

int main(){ 
    srand(time(0));
    int a,b,c;
    int dice = 0;

    cout << "Enter three integers: " << endl;
    cin >> a >> b >> c;
    cout << "Integers unsorted: " << a << " " << b << " " << c << endl;
    cout << "Integers sorted: ";
    desOrder(a,b,c);
    cout << a << " " << b << " " << c;
    cout << endl;

    cout << "Random dice #: "; 
    ranDice(dice);
    cout << dice;

    return 0;
}
