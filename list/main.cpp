//
//  main.cpp
//  list
//
//  Created by Filip Peterek on 27/01/2017.
//  Copyright © 2017 Filip Peterek. All rights reserved.
//

#include <iostream>

#include "list.hpp"

int main(int argc, const char * argv[]) {
    
    list<int> test(5, 1, 2, 3, 4, 5);
    
    for (int i = 0; i < test.length(); ++i) {
        std::cout << test[i] << std::endl;
    }
    
    test.insert(10, 0);
    test.insert(20, 2);
    test.insert(30, test.length());
    
    std::endl(std::cout);
    
    for (int i = 0; i < test.length(); ++i) {
        std::cout << test[i] << std::endl;
    }
    
    std::endl(std::cout);
    
    test.remove(0);
    test.remove(1);
    test.remove(test.length() - 1);
    
    for (int i = 0; i < test.length(); ++i) {
        std::cout << test[i] << std::endl;
    }
    
    std::cout << "Found value 1 at index: " << test.find(1) << std::endl;
    
    test.first() = 100;
    test.last() = 100;
    test.at(3) = 420;
    
    for (int i = 0; i < test.length(); ++i) {
        std::cout << test[i] << std::endl;
    }
    
    std::endl(std::cout);
    
    test.at(0) = 1;
    test.at(4) = 5;
    
    for (int i = 0; i < test.length(); ++i) {
        std::cout << test[i] << std::endl;
    }
    
}
