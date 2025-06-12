#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    /*
    char name[20];
    cout << "Enter your name: ";
    cin >> name,
    cout <<"Your name is: " <<name <<endl;
    */
    
    /* not working 
    char myName[20];
    cout << "Enter your name: ";
    gets(myName);
    puts(myName);
    */
    
    /*
    string myName[];
    cout <<"Enter your name is: ";
    cin >>myName;
    cout <<"Your name is: " <<myName <<endl;
    */
    
    
    string myName;
    cout <<"Enter your name is: ";
    getline(cin, myName);
    cout <<"Your name is: " <<myName <<endl;
    

    /*
    string myName="rajkarmakar";
    cout <<"Enter your name is: " <<myName <<endl;
    myName.push_back('A');
    cout <<"Your name is: " <<myName <<endl;
    myName.pop_back();
    cout <<"Your name is: " <<myName <<endl;
    */
    
    /*
    char str="raj";
    int l=strlen(str);
    cout <<"Name lenght is: " <<l <<endl;
    */
    
    /*
    char str[]="raj";
    char str2[10];
    strcpy(str2, str);
    cout << "store in str2: "<<str2;
    */
    
    /*
    string name="raj";
    cout <<name.length();
    *//*
    string name="raj";
    cout <<name.length();
    */
    
    /*
    string name="raj";
    name.replace(0, 3, "Hello World!");
    cout <<name <<endl;
    */
    
    /*
    string name="raj";
    string naam=" Hello World!";
    name.append(naam);
    cout <<name;
    */
    
    /*
    string name="raj Karmakar";
    reverse(name.begin(), name.end());
    cout <<name;
    */

    return 0;
}