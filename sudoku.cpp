#include"sudoku.h"
#include<iostream>
#include<vector>
using namespace std;
Sudoku::Sudoku(){
    possible = {{ {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0} },
        { {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0} },
        { {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0} },
        { {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0} },
        { {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0} },
        { {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0} },
        { {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0} },
        { {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0} },
        { {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0} }};
};
void Sudoku::swapNum(int x,int y){};
void Sudoku::swapRow(int x,int y){};
void Sudoku::swapCol(int x,int y){};
void Sudoku::rotate(int x){};
void Sudoku::flip(int x){};
int Sudoku::solve(){};
void Sudoku::setChange(bool p){change = p;}
bool Sudoku::getChange(){return change;}
vector<vector<int>> Sudoku::getAns(){return ans;}
bool Sudoku::validation(){
//    cout<<"run vali.\n";
    for(int i = 0; i<81; ++i){
        if (!(map[i/9][i%9])){return false;}
        else {}
    }
    // row and column
    int counter = 0;
    while(counter<9){
        int counter2 = 0;
        int row[10] = {0,0,0,0,0,0,0,0,0,0};
        int column[10] = {0,0,0,0,0,0,0,0,0,0};
        while(counter2<9){
            ++row[map[counter][counter2]];
            ++column[map[counter2][counter]];
            ++counter2;
        }
        counter2 = 1;   // We don't consider zero.
        while(counter2<10){
            if (row[counter2]<2 && column[counter2]<2){}
            else{return false;}
            ++counter2;
        }
        ++counter;
    }
    // square
    counter = 0;
    while(counter<9){
        int counter2 = 0;
        int num[10] = {0,0,0,0,0,0,0,0,0,0};
        while(counter2<9){
            ++num[map[3*(counter/3)+counter2/3][3*(counter%3)+counter2%3]];
            ++counter2;
        }
        counter2 = 1;
        while(counter2<10){
            if(num[counter2]<2){}
            else{return false;}
            ++counter2;
        }
        ++counter;
    }
    return true;
}

//  Done.


void Sudoku::fill(){        // possible check and only possible fill
    int counter = 0;
// EX: possible[2][3]={4,0,0,0,1,1,0,2,1,0} then map[2][3] can fill in "1","2","3","6","9"
    while(counter<81){
        int r = counter/9;
        int c = counter%9;
        if (map[r][c] == 0){
            for(int i=0; i<9; ++i){
                possible[ r ][ c ][map[ r ][ i ]] = 1;   // the row
                possible[ r ][ c ][map[ i ][ c ]] = 1;   // the column
                possible[ r ][ c ][map[(counter/27)*3+i/3][(c/3)*3+i%3]] = 1;   //the square
            }
        }
        else{possible[ r ][ c ] = {1,1,1,1,1,1,1,1,1,1};}
        int blank = 0;
        for(int i = 1; i<10; ++i){
            if ( possible[r][c][i] ) {}     // whether I can fill "i" here
            else if (!blank) {blank = i;}   // Is there any number here
            else {blank = 0; break;}
        }
        if (blank){
            map[r][c] = blank;
            change = true;
            counter = 0;
            // for debug
            // cout<<"map("<<r<<","<<c<<") = "<<blank<<endl;
            //
        }else {}
        ++counter;
    }
}

void Sudoku::fill2(){       // row/column/block only location
    for(int r = 0; r<9; ++r){   // row checking
        for(int i = 1; i<10; ++i){
            int blank = -1;
            for(int c = 0; c<9; ++c){
                if (possible[r][c][i]){}   // if can not fill "i" here
                else if (!(blank+1)){blank = c;}    // if it has other column
                else {blank = -1; break;}    // not sure to fill it in
            }
            if (blank+1){map[r][blank] = i; change = true;}
            //    cout<<"2map("<<r<<","<<blank<<")="<<i<<endl;}
            else {}
        }
    }
    for(int c = 0; c<9; ++c){   // column check
        for(int i = 1; i<10; ++i){
            int blank = -1;
            for(int r = 0; r<9; ++r){
                if (possible[r][c][i]){}
                else if (!(blank+1)){blank = r;}
                else {blank = -1; break;}
            }
            if (blank+1){map[blank][c] = i; change = true;}
            //    cout<<"2map("<<blank<<","<<c<<")="<<i<<endl;}
            else {}
        }
    }

    /*for(int j = 0; j<9; ++j){
        cout<<"(";
        for(int i = 0; i<10; ++i){
            cout<<possible[(1/3)*3+j/3][(1%3)*3+j%3][i];
            if (i == 9) cout<<")\n";
            else cout<<", ";
        }
    }*/
    for(int b = 0; b<9; ++b){   // block check
        for(int i = 1; i<10; ++i){
            int blank = -1;
            for(int j = 0; j<9; ++j){
                if (possible[(b/3)*3+j/3][(b%3)*3+j%3][i]){}
                else if (!(blank+1)){blank = j;}
                else {blank = -1; break;}
            }
            if (blank+1){
                map[(b/3)*3+blank/3][(b%3)*3+blank%3] = i; change = true;
            //    cout<<"2map("<<(b/3)*3+blank/3<<","<<(b%3)*3+blank%3<<")="<<i<<endl;
            }else {}
        }
    }
}

void Sudoku::check3(){
    for(int b = 0; b<9; ++b){
        for(int i = 1; i<10; ++i){
            if (possible[(b/3)*3+1][(b%3)*3][i] && possible[(b/3)*3+1][(b%3)*3+1][i] && possible[(b/3)*3+1][(b%3)*3+2][i] &&
                possible[(b/3)*3+2][(b%3)*3][i] && possible[(b/3)*3+2][(b%3)*3+1][i] && possible[(b/3)*3+2][(b%3)*3+2][i]){     // deleting first row
                for(int k = 3; k<9; ++k){
                    possible[(b/3)*3][((b%3)*3+k)%9][i] = 1;
                }
            }else{}
	        if (possible[(b/3)*3][(b%3)*3][i] && possible[(b/3)*3][(b%3)*3+1][i] && possible[(b/3)*3][(b%3)*3+2][i] &&
                possible[(b/3)*3+2][(b%3)*3][i] && possible[(b/3)*3+2][(b%3)*3+1][i] && possible[(b/3)*3+2][(b%3)*3+2][i]){     // deleting second row
                for(int k = 3; k<9; ++k){
                    possible[(b/3)*3+1][((b%3)*3+k)%9][i] = 1;
                }
            }else{}
	        if (possible[(b/3)*3+1][(b%3)*3][i] && possible[(b/3)*3+1][(b%3)*3+1][i] && possible[(b/3)*3+1][(b%3)*3+2][i] &&
                possible[(b/3)*3][(b%3)*3][i] && possible[(b/3)*3][(b%3)*3+1][i] && possible[(b/3)*3][(b%3)*3+2][i]){       // deleting third row
                for(int k = 3; k<9; ++k){
                    possible[(b/3)*3+2][((b%3)*3+k)%9][i] = 1;
                }
            }else{}
            if (possible[(b/3)*3][(b%3)*3+1][i] && possible[(b/3)*3+1][(b%3)*3+1][i] && possible[(b/3)*3+2][(b%3)*3+1][i] &&
                possible[(b/3)*3][(b%3)*3+2][i] && possible[(b/3)*3+1][(b%3)*3+2][i] && possible[(b/3)*3+2][(b%3)*3+2][i]){       // deleting first column
                for(int k = 3; k<9; ++k){
                    possible[((b/3)*3+k)%9][(b%3)*3][i] = 1;
                }
            }else{}
            if (possible[(b/3)*3][(b%3)*3][i] && possible[(b/3)*3+1][(b%3)*3][i] && possible[(b/3)*3+2][(b%3)*3][i] &&
                possible[(b/3)*3][(b%3)*3+2][i] && possible[(b/3)*3+1][(b%3)*3+2][i] && possible[(b/3)*3+2][(b%3)*3+2][i]){       // deleting second column
                for(int k = 3; k<9; ++k){
                    possible[((b/3)*3+k)%9][(b%3)*3+1][i] = 1;
                }
            }else{}
            if (possible[(b/3)*3][(b%3)*3+1][i] && possible[(b/3)*3+1][(b%3)*3+1][i] && possible[(b/3)*3+2][(b%3)*3+1][i] &&
                possible[(b/3)*3][(b%3)*3][i] && possible[(b/3)*3+1][(b%3)*3][i] && possible[(b/3)*3+2][(b%3)*3][i]){       // deleting third column
                for(int k = 3; k<9; ++k){
                    possible[((b/3)*3+k)%9][(b%3)*3+2][i] = 1;
                }
            }else{}
        }
    }

}

// recursive
int Sudoku::rsolve(Sudoku & su){
    int firstZero = -1;
    for(int i = 0; i<81; ++i){
        if (!su.map[i/9][i%9]){
            firstZero = i;
            break;
        }
    }
    if (firstZero+1){
        bool locPossible[10] = {0,0,0,0,0,0,0,0,0,0};
        for(int i = 0; i<9; ++i){
            locPossible[su.map[firstZero/9][i]] = 1;
            locPossible[su.map[i][firstZero%9]] = 1;
            locPossible[map[(firstZero/27)*3+i/3][((firstZero%9)/3)*3+i%3]] = 1;
        }
        for(int i = 1; i<10; ++i){
            if (!locPossible[i]){
                su.map[firstZero/9][firstZero%9] = i;
                if (Sudoku::rsolve(su)){     // recursive and true.
                    if (su.hasSol){ return 2;}  // has one solution aready.
                    else {  // has one solution now.
                        su.hasSol = true;
                    }
                }
            }
        }
        if (!su.map[firstZero/9][firstZero%9]){ return 0;}  //can't put any 
        else {  // has put in.
            su.map[firstZero/9][firstZero%9] = 0;
            return 0;   // (*1) Explain below.
        }
    }else {su.ans = su.map; return 1;}
}
/**********************************************************
* (*1) "One solution" and "no solution" may may run here.
*   But only when "first solution" and "no solution" can run to here.
*   Because the second solution will be returned upward first.
*   And su.hasSol will have been set "true" in the last 2 recursive.
**********************************************************/
