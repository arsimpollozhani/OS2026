
// You press run programm -> New
// Operating system prepares it -> Ready (waits for CPU)
// CPU starts executing these instructions below
#include <iostream>
using namespace std;

int main() {
    cout << "Enter number: ";
    int x;
    cin >> x; // Program reaches cin -> Blocked
    cout << "You entered: " << x << endl; // User enters a number when event completes state goes to -> Ready (waits for CPU)
    return 0; // program terminates -> Terminate (OS frees memory, Closes files, removes PCB)
}
