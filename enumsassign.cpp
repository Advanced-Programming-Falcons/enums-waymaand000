#include <iostream>

using namespace std;
 
enum Gamemode{
    Easy = 50,
    Medium = 100,
    Hard = 150
};

int main(void){
    Gamemode difficulty = Medium;

    switch(difficulty){
        case Easy:
        cout << "Selected mode: Easy" << endl;
        cout << "Enemies will deal " << difficulty << "% of their usual damage, That's half the damage!";
        break;

        case Medium:
        cout << "Selected mode: Medium" << endl;
        cout << "Enemies will deal " << difficulty << "% of their usual damage, Good for a normal playthrough";
        break;
        
        case Hard:
        cout << "Selected mode: Hard" << endl;
        cout << "Enemies will deal " << difficulty << "% of their usual damage, Rip";
        break;

    }

}