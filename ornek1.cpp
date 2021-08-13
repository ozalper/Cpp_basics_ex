// This example calcutes the power of number which input from the program writer

#include <iostream>
using namespace std;            // make the names from std visible without std::
double square(double x){        // square a double precision floating point number
    return x*x;                     
}

void print_square(double x){
    cout << "the square of" << x << "is " << square(x) << "\n";
}

int main(){
    print_square(1.234);
}