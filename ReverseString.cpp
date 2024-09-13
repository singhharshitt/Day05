#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<"Reversed String: ";
    for(int i=str.length()-1;i>=0;i--){
        cout<<str[i];
    }
    cout<<endl;

    return 0;
}
