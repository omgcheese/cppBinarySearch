//
//  main.cpp
//  cppBinarySearch
//
//  Created by Jinwook Lee on 2015-12-31.
//  Copyright (c) 2015 Jinwook Lee. All rights reserved.
//

#include <iostream>
#include <array>

int binarySearch(std::array<int,10>, int);

int main() {
    
    std::array<int, 10> myarray;
    
    myarray = {1,2,4,5,7,9,10,12,15,16};
    
    int searchNum;
    std::cout << "Please Enter a numer you want to search" << std::endl;
    std::cin >> searchNum;
    //std::cout << myarray.size();
    int result = binarySearch(myarray, searchNum);
    
    if (result == 1) {
        std::cout << "Number Found" << std::endl;
    }
    else {
        std::cout << "Number Not Found" << std::endl;
    }
    
    
    return 0;
}

int binarySearch(std::array<int,10>myArray, int search) {
    
    int* lowP = &myArray[0];
    int* highP = &myArray[myArray.size()];
    int midI = myArray.size()/2;
    int* midP = &myArray[midI];
    
    while (*midP < search) {
        lowP = midP;
        midP = &myArray[(highP - midP)/2];
        std::cout << *midP << " " << midP << std::endl;
    }
    
    for (int* i = lowP; i <= highP; i++) {
        if ( *i == search) {
            std::cout << *i << std::endl;
            return 1;
        }
    }
    
    
    return -1;
    
}
