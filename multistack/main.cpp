//
//  main.cpp
//  multistack
//
//  Created by Jaken Herman
//  Copyright © 2016 jaken herman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>

using namespace std;

/*
 stack_parameters holds the values of the amount of memory that is being used (n),
 the amound of stacks that we will be creating (m), and the value of lo (lo). These
 values will all be given by the user in main() by creating user_stack.
 */

struct stack_parameters{
    int n, m, lo;
};

int main(int argc, char* argv[]){
    
    stack_parameters user_stack;
    
    cout << "Total amount of memory to use? ";
    cin >> user_stack.n; //total amount of memory is received from the user.
    
    cout << "How many stacks to create? ";
    cin >> user_stack.m; //total amount of stacks to be created is received from the user.
    
    cout << "Value of Lo? ";
    cin >> user_stack.lo; //value of lo is received from the user.
    
    string user_operation = " ";
    string user_stack_selection;
    string user_information;
    cout << "Enter your operations. \n To insert, type i [stack-number] [information] \n To delete, type d [stack-number] [information] \n To quit, type q 0 0\n";
    
    do {
        cin >> user_operation >> user_stack_selection >> user_information;
        if(user_operation == "i"){
            cout << "You chose to insert \n";
            cout << "sec is " << user_stack_selection << "\n";
            cout << "thi is" << user_information << "\n";
            //do some insertion
        }
        else if (user_operation == "d"){
            cout << "You chose to delete \n";
            //do some deletion
        }
        else {
            if (user_operation == "q"){
                cout << "Aborting program. Goodbye \n";
            }
            else {
                cout << "Error: invalid operation error. Try again, friend. \n";
            }
        }
    } while (user_operation != "q");
    
    return 0;
}
