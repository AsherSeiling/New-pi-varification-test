#include <iostream>

using namespace std;

// MAIN
int main(){
    // Number it will add every loop
    double add_num_loop = .1;

    // What number it will go up to
    int run_up_to = 10;

    // Trys it counts up per try
    int trys_up = 1;


    // num its trying it on
    double num = 0;

    // amount of tries
    int try_num = 0;

    //  True or false statement to see if it has been run enough
    bool try_tf = true;

    // Area works
    string area_works;

    // Circumference works
    string cir_works;
    // new pi equivalent
    double new_pi = .785;

    // old pi
    double old_pi = 3.14;

    // pi input
    double input_pi_old;

    // Would you like to test it input var
    string would_like_test;

    // pi new
    double pi_new;

    cout << "Enter a variation of PI" << endl;
    cin >> input_pi_old;
    double cal_convert = ((5 * 5)* old_pi) / 100;
        cout << "New variation of pi is: " + to_string(cal_convert) << endl;
    cout << "Would you like to test it?(Y/N)" << endl;
    cin >> would_like_test;
    if (would_like_test == "Y"){
    }
    if(would_like_test == "N"){
        cout << "Thankk you for converting." << endl;
    }
    else{
        cout << "Syntax invalid, Please try again." << endl;
        yesorno;
    }

    pi_new = cal_convert;
    yesorno();

}


