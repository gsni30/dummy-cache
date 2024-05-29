#include <iostream> 
#include <unordered_map> 
#include <string>
#include <bits/stdc++.h>
#include <sstream>

using namespace std;

unordered_map<string, string> dictionary;
string delimiter = " ";


string get(string key) {
    if (dictionary.find(key) == dictionary.end()) {
        return "";
    }
    return dictionary[key];
}

void put(string key, string value) {
    dictionary[key] = value;
}

int main() {

    while(1) {
        string input;

        std::getline (std::cin,input);

        stringstream ss(input);
        string word;
        string cmd;
        string key;
        string value;
        int count = 0;

        while (ss >> word) {
            
            if (count == 0) {
                cmd = word;
            }
            else if (count == 1) {
                key = word;
            }
            else {
                value = word;
            }
            count++;
        }

        if (cmd == "get") {
            cout<<get(key);
            cout<<"\n";
        }

        if (cmd == "put") {
            put(key, value);
        }
        cout<<"\n";

        if (cmd == "exit") {
            break;
        }
        
    }    
    return 0;
}