#include<iostream>
using namespace std;

char before(char x){
    char ans; 
    if(x == 'A'){
        x='Z';
        return x;
    }

    if('A' <= x and x <= 'Z'){
        x = x-1;
        return x;
    }
    else{
        ans='0';
        return ans;
    }

}

int main (){
    cout << before('A');
    cout << before('B');
    cout << before('P');
    cout << before('T');
    cout << before('Z');
    cout << before('a');
    cout << before('0');
    cout << before('c');
}
