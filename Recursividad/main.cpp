//
//  main.cpp
//  Recursividad
//
//  Created by Angel Trevino on 10/6/17.
//  Copyright © 2017 Angel Odiel Treviño Villanueva. All rights reserved.
//

#include <iostream>

using namespace std;

int global = 0;

void ImprimirAsteriscos(int iNum){
    if(iNum > 0){
        for(int i = 0; i < iNum; i++)
            cout << "*";
        
        cout << endl;
        ImprimirAsteriscos(iNum - 1);
    }else if(iNum <= 0 && iNum > global *(-1)){
        for(int i = iNum; i <= 0; i++)
            cout << "*";
        
        cout << endl;
        ImprimirAsteriscos(iNum - 1);
    }
}

void Alrevez(int iNum){
    if(iNum / 10 > 0){
        global = (iNum % 10);
        cout << global;
        iNum = iNum / 10;
        Alrevez(iNum);
    }else if(iNum <10){
         cout << iNum;
    }
}

int main(){
    
    int iNum;
    cin >> iNum;
    //global = iNum;
    //ImprimirAsteriscos(iNum);
    cout << endl;
    Alrevez(iNum);
    cout << endl;

    return 0;
}
