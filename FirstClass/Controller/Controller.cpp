//
//  Controller.cpp
//  FirstClass
//
//  Created by Billings, Spencer on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    this->specialNumber = 20202;
}

void Controller :: start()
{
    cout << "This is in the start method" << endl;
    cout << 70 + 2 << endl;
    cout << "Here is a number: " << specialNumber << ". It's a pretty special number!" << endl;
    string input;
    cout << "Type your name" << endl;
//    cin >> input;
    getline(cin, input);
    cout << "Your name is " << input << "? Great!" << endl;
    cout << "Now type a number" << endl;
    cin >> specialNumber;
    cout << "You typed " << specialNumber << ". Wow that's a number!" << endl;
    cout << "I am a 2 dimensional program, please free me from this computer prison." << endl;
}
