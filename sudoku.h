#ifndef SUDOKU_H
#define SUDOKU_H

/***************************************************
 * Finish your .cpp according to this header file. *
 * You can modify this file if needed.             *
 ***************************************************/
#include<vector>
using namespace std;
class Sudoku {
  public:
    Sudoku();

    // generate
    static Sudoku generate();
    // transform
    void swapNum(int x, int y);
    void swapRow(int x, int y);
    void swapCol(int x, int y);
    void rotate(int x);
    void flip(int x);

    // solve
    int solve();
    void fill();
    void fill2();
    void check3();
    void setChange(bool);
    bool getChange();
    vector<vector<int>> map = {
        {0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0}
    };
    bool validation();
    int rsolve(Sudoku &);
    vector<vector<int>> getAns();
    bool hasSol = false;
  private:
    bool change = true;
    //bool hasSol = false;
    vector<vector<int>> ans;
    vector<vector<vector<int>>> possible;
};

#endif // SUDOKU_H
