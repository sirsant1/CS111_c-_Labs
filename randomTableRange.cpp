//Sharif Anthony
#include <iostream> 
using namespace std;
#include <ctime>
#include <cstdlib>

void callArr(int twoX3[][3]){
    
    for(int i = 0; i <2; i++){
        for(int j = 0; j < 3; j++){
            twoX3[i][j] = rand() % (999-100+1)+100;
        }
    }

}

void printArr(int twoX3[][3]){
    for(int i = 0; i<2;i++){
        for(int j=0;j<3;j++){
            cout << twoX3[i][j] << " "; 
        }
        cout << endl;
    }
}

void mmRange(int &min, int &max, int &range,int twox3[][3]){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(twox3[i][j]>max)
                max = twox3[i][j];
            if(twox3[i][j]<min)
                min = twox3[i][j];

        }
    }

    range = max-min;

}

int main(){
    srand(time(0));
    int twoX3[2][3];
    int range = 0, max = 0, min = 1001;
    
    callArr(twoX3);
    printArr(twoX3);
    cout << endl;
    mmRange(min,max,range,twoX3);
    cout << "Range from (" << max << "-" << min << ")";
    cout << " : " << range;


    return 0;
}