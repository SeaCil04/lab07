#include <iostream>
using namespace std;
//Dialog of the first example is given below.

int main(){
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: " << name;
    getline(cin,name);
    cout << "Fahsai: Wow!!! "<< name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    int ID;
    cout << name<< ": " ;
    cin >> ID;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR "<< (ID/10000000) - 12 << ". I have a free movie ticket for you."<< endl;
    cout << "Fahsai: Let's go to the cinema together!!!"<< endl;
    cout << "Fahsai: What movie do you want to watch?"<< endl;
    string movie;
    cout << name<< ": " << movie;
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?"<< endl;
    string day;
    cout << name<< ": " << day;
    getline(cin,day);
    cout << "Fahsai: " << day <<"....that is OK!!! I'm looking forward to watching "<< movie << " with you." << endl;
    string text;
    cout << name<< ": " << text;
    getline(cin, text);
    cout << "Fahsai: 555+ see you "<< day <<". Bye Bye \\(^ ^)/"<< endl;

}