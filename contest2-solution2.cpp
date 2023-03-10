// Problem Statement

// Suppose you are attending a party where a lot of people are present. Suddenly, you hear that someone named "Ratul" has gone missing, and everyone is looking for him. You decide to help out and start asking people their name.

// However, you soon realize that it's difficult to keep track of everyone's responses. So, you decide to write down everyone's names. You write all the information in a string and keep it with you.

// As you continue your search, you wonder if Ratul's name is mentioned anywhere in the string. You decide to write a program to find out if the string contains the word "Ratul."

// Write a program to determine if a given string contains the word "Ratul." If the word is present in the string, the program should output "YES," otherwise it should output "NO."

// NOTE: You need to find only "Ratul"; not "ratul" or "RatuL" or any other form.

// Input Format

// Input will contain a string S containing everyone's name. There is a space in between two names.
// Constraints

// 1 <= |S| <= 1000; Here |S| means the length of the string.
// Output Format

// Output YES or NO according to the question.
// Sample Input 0

// Rahat Rifat Sakib Asif Sifat Ratul Munna
// Sample Output 0

// YES
// Sample Input 1

// Rahat Rifat Sakib Asif Sifat Munna
// Sample Output 1

// NO


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string line;
    bool found = false;

    getline(cin, line);

    istringstream iss(line);
    string word;
    while(iss>>word){
        if(word=="Ratul"){
            found=true;
        }  
    }
    if (found) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }

    

    return 0;
}
