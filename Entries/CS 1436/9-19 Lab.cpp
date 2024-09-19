#include <iomanip>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int target = rand() % 100 + 1;
    cout << target << endl;
    int counter = 0;
    int guess = 0; 
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess > target){
            cout << "Go lower\n";
            counter ++;}
        if (guess < target){
            cout << "Go Higher\n";
            counter ++;}
        else
            continue;
        
    } while (guess != target);
    cout << "Good Game!\n";
    cout << "You guessed in " << counter << "tries!\n";
    
    
    return 0;
}
