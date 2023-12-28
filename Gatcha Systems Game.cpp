#include <iostream>
#include <cstdlib>
using namespace std;



void commonPool() {
    int characterCall = rand()%4+1; // 1-4 inclusive
    string pulled;
   
    if(characterCall==1){
        // Common 1
        pulled = "Isabella";
    }else if(characterCall==2){
        // Common 2
        pulled = "Richard";
    }else if(characterCall==3){
        // Common 3
        pulled = "Anna";
    }else{
        // Common 4
        pulled = "David";
    }
    cout << "You pulled a Common character: " << pulled << endl;
}


void rarePool(){
    int characterCall = rand()%3+1; // 1-3 inclusive
    string pulled;
   
    if(characterCall==1){
        // Rare 1
        pulled = "Peony";
    }else if(characterCall==2){
        // Rare 2
        pulled = "Steven";
    }else{
        // Rare 3
        pulled = "Nick";
    }
    cout << "You pulled a Rare character: " << pulled << endl;
}


void superPool(){
    int characterCall = rand()%2+1;
    string pulled;
   
    if(characterCall==1){
        // Super 1
        pulled = "Mary";
    }else{
        // Super 2
        pulled = "Finch";
    }
    cout << "Wow! You pulled a Super Rare character: " << pulled << endl;
}


void ultraPool(){
    // No random call is required, as there is one character.
    string pulled = "Matteo";
    cout << "INCREDIBLE!!! You pulled an Ultra Rare character: " << pulled << endl;
}




void regularPull(){
    int rarityCall = rand()%100+1; // 1-100 inclusive
   
    if(rarityCall<=50){
        // Common Pulls
        commonPool();
       
    }else if(rarityCall<=80){
        // Rare Pulls
        rarePool();
       
    }else if(rarityCall<=96){
        // Super Rare Pulls
        superPool();
       
    }else{
        // Ultra Rare Pulls
        ultraPool();
       
    }
}


void pityPull(){
    srand(time(0));
    int rarityCall = rand()%100+1; // 1-100 inclusive
   
    if(rarityCall<=75){
        // Super Rare Pulls
        superPool();
       
    }else{
        // Ultra Rare Pulls
        ultraPool();
       
    }
}



int main() {
    srand(time(0));
    bool playingGame = true;
    string action;

    while (playingGame){
        cout << "Would you like to try your luck at the gacha?\n> S for Single Pull\n";
        cout << "> T for Ten Pull\n> P for Pity Pull\n> L for Leave\n\n";
        cin >> action;

        if(action=="S" || action=="s" || action=="Single Pull"){
            regularPull();
        }else if(action=="T" || action=="t" || action == "Ten Pull"){
            for(int i=0; i<10; i++) regularPull();
        }else if(action=="P" || action=="p" || action == "Pity Pull"){
            pityPull();
        }else if(action == "L" || action == "l" || action == "Leave"){
            cout << "Thank you for playing the gacha! See you!\n";
            playingGame = false;
        }else {
            cout << "Invalid action; try again.\n";
        }

    }
   
    return 0;
}
