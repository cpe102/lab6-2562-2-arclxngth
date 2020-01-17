#include <iostream>
using namespace std;

int main(){

    string name,ans,cinema,day,text;
    int gear,sum,i,ID;

    cout<<"Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
    cout<<"?????: ";
    getline(cin,name);
    cout<<"Fahsai: Wow!!! "<<name<<" that is a really cool name."<<endl;
    cout<<"Fahsai: I think you are Engineering student. What is your student ID? "<<endl;
    cout<<name<<": ";
    cin>>ID;
    cin.ignore();

	sum = ID/10000000;
    

    gear = sum -12;
    
    cout<<"Fahsai: I think you may be GEAR "<<gear<<".  I have a free movie tickets for you."<<endl; 
    cout<<"Fahsai: Let's go to cinema together!!!"<<endl;
    cout<<"Fahsai: What movie do you want to watch?"<<endl;
    cout<<name<<" : ";
    getline(cin,cinema);
    cout<<"Fahsai: So....which day are you free to go with me?"<<endl;
    cout<<name<<" : ";
    getline(cin,day);
    cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watch "<<cinema<<" with you."<<endl;
    cout<<name<<" : ";
    getline(cin,text);
    cout<<"Fahsai: 555+ see you "<<day<<". Bye Bye \(^ ^)/";

}