#include<iostream>
using namespace std;
int main() {
    // finish your transform code...
    int initMap[81];
    int i;
    int counter = 0;
    while (cin>>i) {
        initMap[counter] = i;
        //cout<<i;
        ++counter;
        /*if(counter%9 == 0){
        	cout<<"\n";
        }else{
        	cout<<" ";
        }*/
        if (counter >= 81) {
            break;
        }
    }
    int a,b,c;
    while(cin>>a) {
        int tmp;
        int tmpMap[81];
        if (a==0) {
            break;
        }
        switch(a) {
        case 1:		// number "b" and "c" exchange
            cin>>b>>c;
            counter = 0;
            while(counter<81) {
                if(initMap[counter]==b) {
                    initMap[counter]=c;
                } else {
                    if(initMap[counter]==c) {
                        initMap[counter]=b;
                    }
                }
                ++counter;
            }
            break;
        case 2:     // change "big" row, only input 0,1,2.
            cin>>b>>c;
            counter = 0;
            while(counter<27) {
                tmp = initMap[27*b+counter];
                initMap[27*b+counter] = initMap[27*c+counter];
                initMap[27*c+counter] = tmp;
                ++counter;
            }
            break;
        case 3:     // change "big" column, input:0,1,2.
            cin>>b>>c;
            counter = 0;
            while(counter<27) {
                tmp = initMap[counter%3+3*b+(counter/3)*9];
                initMap[counter%3+3*b+(counter/3)*9]=initMap[counter%3+3*c+(counter/3)*9];
                initMap[counter%3+3*c+(counter/3)*9] = tmp;
                ++counter;
            }
            break;
        case 4:     // clockwise rotate 90*b degree.
            cin>>b;
            b = b%4;
            switch (b) {
            case 1:
                counter = 0;
                while(counter<81) {
                    tmpMap[counter] = initMap[9*(8-counter%9)+counter/9];
                    ++counter;
                }
                counter = 0;
                while(counter<81) {
                    initMap[counter] = tmpMap[counter];
                    ++counter;
                }
                break;
            case 2:
                counter = 0;
                while(counter<40) {
                    tmp = initMap[counter];
                    initMap[counter] = initMap[80-counter];
                    initMap[80-counter] = tmp;
                    ++counter;
                }
                break;
            case 3:
                counter = 0;
                while(counter<81) {
                    tmpMap[counter] = initMap[9*(counter%9)+8-counter/9];
                    ++counter;
                }
                counter = 0;
                while(counter<81) {
                    initMap[counter] = tmpMap[counter];
                    ++counter;
                }
                break;
            default:
                break;
            }
            break;
        case 5:     // flip.  0: up-down, 1: left-right.
            cin>>b;
            switch(b) {
            case 0:
                counter = 0;
                while(counter<36) {
                    tmp = initMap[counter];
                    initMap[counter]=initMap[9*(8-counter/9)+counter%9];
                    initMap[9*(8-counter/9)+counter%9]=tmp;
                    ++counter;
                }
                break;
            case 1:
                counter = 0;
                while(counter<36) {
                    tmp = initMap[9*(counter/4)+counter%4];
                    initMap[9*(counter/4)+counter%4]=initMap[9*(counter/4)+8-counter%4];
                    initMap[9*(counter/4)+8-counter%4]=tmp;
                    ++counter;
                }
                break;
            }
            break;
        }
    }
    counter = 0;
    while(counter<81) {
        cout<<initMap[counter];
        ++counter;
        if(counter%9 == 0) {
            cout<<"\n";
        } else {
            cout<<" ";
        }
    }
    return 0;
}
