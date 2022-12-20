#include<iostream>
#include<iostream>
#include<string>
using namespace std;
int main(){
string x;
int y; 
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,x);
    
    cout << "Fahsai: Wow!!! " << x << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << x << ": ";
    cin >> y; 
    
    cin.ignore();
    int z = (y/10000000)-12;
    cout << "Fahsai: I think you may be GEAR " << z << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << x << ": ";
    string mov;
    getline(cin,mov);
    
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << x << ": ";
    string day;
    getline(cin,day);
    
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << mov << " with you.\n";
    cout << x << ": ";
    string motto;
    getline(cin,motto);
    
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye " << '\\' << "(^ ^)/";
    
}