//
//  Controller.hpp
//  FirstClass
//
//  Created by Billings, Spencer on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
using namespace std;

// A class is only defined in a header file, and a header file only defines prototypes
// Private: only visible to the file, Protected: only visible to the class, Public: visible to the project
// A header file defines what you need to put into your code
// Templates are only defined in the header file

class Controller
{
    
private:
    int specialNumber;
public:
    Controller();
    void start();
    
};

#endif /* Controller_hpp */
