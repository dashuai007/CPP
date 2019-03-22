//
//  main.cpp
//  CProject
//
//  Created by John on 2019/3/22.
//  Copyright © 2019 John. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    
    char ary[] = "Welcom to CPP tutorial";
    cout << "string is :" << ary << endl;
    
    int xx = 18 >> 3; //0001 0010
    cout << "value is: " << xx  << endl;
    
    int yy = -20 >> 3; //0001 0100 -->1110 1011 -->
    cout << "value is: " << yy  << endl;
    return 0;
}
