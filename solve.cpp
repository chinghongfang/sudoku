#include<iostream>
#include"sudoku.h"
using namespace std;

int main() {
    // finish your solve code...
    class Sudoku sudoku;
    int initMap[9][9];
    int counter,i;
    counter = 0;
    while(cin>>i && counter<81) {
        sudoku.map[counter/9][counter%9] = i;
        initMap[counter/9][counter%9] = i;
        ++counter;
        if(counter<81) {}
        else {
            break;
        }
    }
    // solving
    while(!sudoku.validation() && sudoku.getChange()) {
        sudoku.setChange(false);
        sudoku.fill();
        sudoku.fill2();
    }
    if (sudoku.validation()) {  // print answer
        cout<<"1\n";
        for(int i = 0; i<9; ++i) {
            for(int j = 0; j<9; ++j) {
                cout<<sudoku.map[i][j];
                if (j<8) {
                    cout<<" ";
                } else { }
            }
            cout<<"\n";
        }
        return 0;
    } else {
        if ( sudoku.rsolve(sudoku) == 2) {
            cout<<"2\n";
            return 0;
        } else if (sudoku.hasSol) {
            sudoku.map = sudoku.getAns();
            cout<<"1\n";
            for(int i = 0; i<9; ++i) {
                for(int j = 0; j<9; ++j) {
                    cout<<sudoku.map[i][j];
                    if (j<8) {
                        cout<<" ";
                    } else {}
                }
                cout<<"\n";
            }
            return 0;
        } else {
            cout<<"0\n";
            return 0;
        }
    }
    /*cout<<"debug\n";
    sudoku.map = sudoku.getAns();
    for(int i = 0; i<9; ++i){
        for(int j = 0; j<9; ++j){
            cout<<sudoku.map[i][j];
            if (j<8){cout<<" ";}
            else {}
        }
        cout<<"\n";
    }*/
    return 0;
}
