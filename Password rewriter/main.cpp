/*This is a simple program, featuring measuring time. I will use this more in the future.*/
#include <iostream>
#include <ctime>

using namespace std;

int main(){
    string agree = ""; //starting
    cout << "Welcome to simple password rewriter. Your goal is to rewrite given number in 10 secound." << endl;
    cout << "Also, important note. If you type any text, that is not a number, you will not be able to write until your time is over." << endl;
    cout << "Type anything when you will be ready:";
    cin >> agree;
    
    srand(time(NULL)); //number seed randomization
    
    int passedTime = 0; //variables
    int userType;
    time_t timestamp;
    int pass;
    
    do{
        pass = rand(); // generating number
        time(&timestamp); 
        
        cout << "Password: " << pass << endl; //user typing 
        cout << "Rewrite Password: ";
        cin >> userType;
        
        time_t timestamp2; //calculating time spent while typing
        time(&timestamp2);
        passedTime += timestamp2 - timestamp;
        
        if(passedTime <10 && userType == pass){ //win
            cout << "Congratulations! You succesfully rewrote password in 10 seconds.";
            return 0;
        }
        cout << "The password is incorect. Try again." << endl;
    }while(passedTime <10); //time ended
        cout << "Your time has ended.";
        return 0;
}
