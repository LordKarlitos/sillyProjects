#include <iostream>
#include <time.h>

using namespace std;

int roll(){
    int value = rand() % 6 + 1;
    return(value);
}

int main(){
    int roll1, roll2, roll3;
    
    srand(time(NULL));
    
    cout << "Altar Casino - Slot Machine Simulation" << endl;
    string cont;
    /*Because this project is made for something bigger (my board-computer game) you can not only get money, 
    but also other stuff, such as weapons, resources, or cosmetic items. Lets say it works more like 
    lootbox system, than a real slot machine in casino.*/
    string RESOURCES[5] = {"20 Mana","20 Fotons","10 Esoteric Candles","10 Binary Cents","15 Cast Iron Denarii"};
    string COUPONS[6] = {"Blamage Coupon","Discount Coupon","Casino Coupon","Recrutation Coupon","Elemental Coupon","Coupon of Coupons"};
    string OTHER[2] = {"Random Tray Background", "Random Regular Chest"};
    while(true){
        cout << "Type 's' to spin. Type anything else to end: ";
        cin >> cont;
        if(cont != "s"){
            cout << "Exit." << endl;
            break;
        }
        roll1 = roll();
        roll2 = roll();
        roll3 = roll();
        
        cout << "[ "<<roll1<<" ]-[ "<<roll2<<" ]-[ "<<roll3<<" ]"<<endl;

        if(roll1 == roll2 && roll2 == roll3){
            
            cout << "You won and got: ";
            switch(roll1){
            case 1:
                cout << (rand() % 25) + 10 << " Swirls" << endl;
            break;
            case 2:
                cout << OTHER[rand() % 2] << endl; 
            break;
            case 3:
                cout << COUPONS[rand() % 6] << endl; 
            break;
            case 4:
                cout << RESOURCES[rand() % 5] << endl;
            break;
            case 5:
                cout << (rand() % 200) + 50 << " B" << endl;
            break;
            case 6:
                cout << "Holy Golden Shield" << endl;
            break;
            }
            if(roll1 != 1){
                cout << "You also get 10 Swirls" << endl;
                cout << endl;
            }
        }
    }
    return 0;
}