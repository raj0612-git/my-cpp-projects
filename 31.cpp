#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    /*
    ofstream onFile;
    onFile.open("\\file.txt");
    cout <<"File Created successfully";
    onFile.close();
    */
    
    /*
    ofstream onFile;
    onfile.open("\\file.txt");
    onFile <<"Thank u so much";
    cout <<"Data has been written in the file";
    onfile.close();
    */
    
    /*
    ifstream inFile;
    string str;
    inFile.open("\\file.txt");
    inFile  >> str;
    cout << str;
    inFile.close();
    */
    
    /*
    ifstream inFile;
    string str;
    inFile.open("\\file.txt");
    while(getline(inFile, str)){
        cout <<str;
    }
    inFile.close();
    */
    
    /*
    ifstream inFile;
    ofstream onFile;
    char str;
    inFile.open("\\file.txt");
    onFile.open("\\file2.txt");
    while(inFile.get(str)){
        onFile.put(str);
    }
    cout <<"Copied!!";
    inFile.close();
    onFile.close();
    */
    
    int value = remove("\\file.txt");
    if(value == 0){
        cout <<"File Deleted";
    }else {
        cout <<"File Not Deleted";
    }
    
   return 0;
}