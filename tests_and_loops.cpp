#include <iostream>
using namespace std;


bool accept(){                                      // Writing with if-else statements
    cout << "Do you want to proceed(y or n)?\n";
    char answer = 0;
    cin >> answer;                                  // read the answer

    if(answer == 'y'){
        return true;
    }else{
        return false;
    }
}

bool accept2(){                                     // Writing with switch-case statemens
    cout << "Dou you want to proceed(y or n)?\n";
    char answer = 0;
    cin >> answer;                                  // read the answer

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

bool accept3(){                                     //Writing with while statements
    cout << "Do you want to proceed(y or n)?\n";
    char answer = 0;
    cin >> answer;                                  // read the answer
    int tries = 0;
    while(tries<4){
        switch (answer)
        {
        case 'y':
            return true;
            break;
        case 'n':
            return false;
            break;
        default:
            cout << "Sorry, I don't understand please try again...\n";
            tries++;                                // increment
            break;
        }
    }
    cout << "I'll take that no..\n";
    return false;
}

int main(){
    
}