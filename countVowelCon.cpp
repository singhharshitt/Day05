#include <iostream>
#include <string>
using namespace std;
void countVC(string str){
    int countV=0;
    int countC=0;
    for(int i=0; i<=str.length()-1;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            countV++;
        }
        else if(str[i]=='A' || str[i]=='E' || str[i]== 'O' || str[i]=='I' || str[i]=='U'){
            countV++;
        }
        else{
            countC++;
        }
    }
    cout<<"Number of vowels: "<<countV<<endl;
    cout<<"Number of consonants: "<<countC<<endl;
}

int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<"Reversed String: ";
    for(int i=str.length()-1;i>=0;i--){
        cout<<str[i];
    }
    cout<<endl;
    countVC(str);
    return 0;
}
