#include <iostream>
using namespace std;


bool accept(){                                      // Writing with if-else statements
    cout << "Do you want to proceed(y or n)?\n";
    char answer = 0;
    cin >> answer;

    if(answer == 'y'){
        return true;
    }else{
        return false;
    }
}

bool accept2(){                                     // Writing with switch-case statemens
    cout << "Dou you want to proceed(y or n)?\n";
    char answer = 0;
    cin >> answer;

    switch(answer){
        case 'y':
            return true;
            break;
        case 'n':
            return false;
            break;
        default:
            cout << "I'll accept this no.\n";
            return false;
            break;    
    }
}

int main(){
    accept();
}