#include <iostream>

using namespace std;

int main(){
	// Number it will add every loop
	double add_num_loop = .1;

    // What number it will go up to
    int run_up_to = 10;

    // Trys it counts up per try
    int trys_up = 1;

    // new pi equivalent
    double new_pi = 0.785375;

    // old pi
    double old_pi = 3.1415;

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

    // Main loop
    while(try_tf == true){
        try_num += trys_up;
        num += add_num_loop;
        // Area new
        double areacalnew = (num * num) * new_pi;

        // Area old
        double areacalold = ((num / 2) * (num / 2)) * old_pi;
        // Area if
        if(areacalnew == areacalold){
            area_works = "Works";
        }
        else{
            area_works = "Fail";
        }

        // Cir new
        double circalnew = (num * new_pi) * 4;

        // Cir old
        double circalold = (num * old_pi);

        // Cir if
        if(circalnew == circalold){
            cir_works = "Works";
        }
        else{
            cir_works = "False";
        }

        // Display results
        cout << "Try: " +  to_string(try_num) + " Cal num: " + to_string(num) + " |Area " + area_works + " |Circumference " + cir_works << endl;

        // Final if to see if next try should happen
        if(num >= run_up_to){
            try_tf = false;
        }
    }
    return 0;
}
