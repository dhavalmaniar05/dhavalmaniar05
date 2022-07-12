#include <iostream>

using namespace std;


int main()
{
    double a, b;
    int operation;

    cout << "Enter your first number ";
    cin >> a;
    cout << "Enter you second number ";
    cin >> b;
    cout << "Which operation would u like to perform ?\n";
    cout << "1-Addition\n";
    cout << "2-Subtraction\n",
    cout << "3-Multiplication\n";
    cout << "4-Division\n";
    cout << "" << endl;
    cin >> operation;
    if(operation == 1){
        cout << a + b;
    }
    else if(operation == 2){
        cout << a - b;
    }
    else if(operation == 3){
        cout << a * b;
    }
    else if(operation == 4){
        cout << a / b;
    }
    else{
        cout << "You Chose Nothing";
    }
    return 0;
}

