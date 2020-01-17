#include <iostream>
#include<string>
using namespace std;
 int main() {
string name,move,day,UU;
 int std,gar;
const string N="\n";
cout<<"Fahsai: Sawadee ka...Can you tell me your name?"<<N;
cout<<"?????:";
getline(cin,name);
cout<<"Fahsai: Wow!!! "<<name<<" is a really cool name."<<N;
cout<<"Fahsai: I think you are Engineering student. What is your student ID?"<<N;
cout<<name<<":";
cin>>std;
cin.ignore();
gar=std/10000000-12;
cout<<"Fahsai: I think you may be GEAR "<<gar<<".  I have a free movie tickets for you."<<N;
cout<<"Fahsai: Let's go to cinema together!!!"<<N ;
cout<<"Fahsai: What movie do you want to watch?"<<N;
cout<<name<<":";
getline(cin,move);
cout<<"Fahsai: So....which day are you free to go with me?"<<N;
cout<<name<<": ";
getline(cin,day);
cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watch "<<move<<" with you."<<N;
cout<<name<<": ";
getline(cin,UU);
cout<<"Fahsai: 555+ see you "<<day<<". Bye Bye  \\(^ ^)/"<<N;
}

