//created by Michael Connors

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

    srand(time(NULL));

    cout << "Welcome to the math game!" << endl;
    cout << "Type in the answer to the question." << endl;

    int correct = 0;
    int incorrect = 0;
    int total = 0;

    while (true){
        int num1 = rand() % 10 + 1;
        int num2 = rand() % 10 + 1;
        int num3 = num1 + num2;
        int ans;

        cout << num1 << " + " << num2 << " = ";
        cin >> ans;

        if (ans == num3){
            cout << "Correct!" << endl;;
            correct = ++correct;
            total = ++total;

        } else {
            cout << "Incorrect!" << endl;;
            incorrect = ++incorrect;
            total = ++total;
        }

        string play_again;
        cout << "PLay again? y or n ";
        cin >> play_again;
        if (play_again != "y"){
            break;
        }
    }
    
    cout << "Great job!" << endl;
    cout << "Total rounds played: " << total << endl;
    cout << "Total correct: " << correct << endl;
    cout << "Total incorrect: " << incorrect << endl;
    cout << "Thanks for playing!" << endl;

    return 0;
}