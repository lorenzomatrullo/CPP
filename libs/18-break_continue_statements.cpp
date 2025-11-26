#include <iostream>

using namespace std;

/*
    continue = skips rest of code & forces the next interation of the loop
    break = exits a loop/switch
*/

int main(){

    for(int i = 0; i <= 10; i++){
        if(i == 5){
            continue;
        } else if (i == 8){
            break;
        }

        cout << i << '\n';
    }
    

    return 0;
}