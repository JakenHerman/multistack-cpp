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
    
    string user_stack_selection;
    string user_information;
    cout << "Enter your operations. \n To insert, type i [stack-number] [information] \n To delete, type d [stack-number] [information] \n To quit, type q 0 0\n";
    
    do {
        cin >> argv[0] >> user_stack_selection >> user_information;
        if(!strncmp(argv[0], "i", 2)){
            cout << "You chose to insert \n";
            cout << "sec is " << user_stack_selection << "\n";
            cout << "thi is" << user_information << "\n";
            //do some insertion
        }
        else if (!strncmp(argv[0], "d", 2)){
            cout << "You chose to delete \n";
            //do some deletion
        }
        else {
            if (!strncmp(argv[0], "q", 2)){
                cout << "Aborting program. Goodbye \n";
            }
            else {
                cout << "Error: invalid operation error. Try again, friend. \n";
            }
        }
    } while (strncmp(argv[0], "q", 2));
    
    return 0;
}
