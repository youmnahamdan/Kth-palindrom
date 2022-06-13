// This is program to find the Kth palindrom number the user inserts an index and the program findes 
// the palindrom number that lies at that index.
#include <iostream>

using namespace std;
// to check if a number is palindrom
bool isPal(int num) {
    int temp=num, rev=0, rem;
    while (temp) {
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
    }
    return (rev == num) ? true : false;
}
// returns Kth palindrom number 
int KthPal(int index) {
    int num=1;
    while (index) {
        if (isPal(num)) {
            if (index == 1)return num;
            index--;
        }
        num++;
    }
    return num;
}


int main()
{
    //input
    int K;
    if (K > 0 && K < pow(10, 12)) {
        cout <<"insert K :"<< endl;
        cin >> K;
        //output
        cout << KthPal(K) << endl;
    }
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
