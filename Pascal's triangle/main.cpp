#include <iostream>
using namespace std;

int main()
{
    int levels = 0;
    cout << "Enter the height of the Pascal's Triangle: ";
    cin >> levels;

    int arr[levels] = {1,1};
    int arr2[levels] = {};
    
    if(levels > 0){ // first two levels
        cout << arr[0] << endl;
    }
    if(levels > 1){
        cout << arr[0] << " " << arr[1] << endl;
    }
    
    if(levels > 2){
        for(int n = 2;n<levels;n++){ // traingle levels iteration
            for(int i = 0; i < levels;i++){ //saving previous level
                arr2[i] = arr[i];
            }
            for(int i = 1; i <= n;i++){ // creating next level
                arr[i] = arr2[i] + arr2[i-1];
            }
            for(int i = 0;i<n;i++){ //display 
                cout << arr[i] << " ";
            }
            cout << "1" << endl; 
        }
    }
    return 0;
}