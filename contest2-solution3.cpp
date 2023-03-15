// Problem Statement

// You have given a string that will be contain a-z, 1-9, '+', '-', '*', '/'.

// The string contains some statements (at least one). A statement is defined as -

// NC (Here N is defined as a number from 1-9, and C is defined as a group of small alphabets)
// There will be an operator (+,-,*,/) between two statements
// You have to apply the below rules on that string.

// The Rules is,

// Append the group of alphabets (C) N times to the final string.
// Append the operators (if any) after the statements to the final string.
// Suppose the string is 5a+2bc-9abc*1d

// After apply,

// 5a wil become aaaaa
// 2bc will become bcbc
// 9abc become abcabcabcabcabcabcabcabcabc
// 1d will become d
// Finally the string will be like this after apply the string rules,

// aaaaa+bcbc-abcabcabcabcabcabcabcabcabc*d

// Input Format

// You will be given a string S in the given format.
// Constraints

// 2 <= |S| <= 5000 ; Here |S| mean the length of the String
// Output Format

// Print the final string after applying the rules.
// Sample Input 0

// 5a+2bc-9abc*1d
// Sample Output 0

// aaaaa+bcbc-abcabcabcabcabcabcabcabcabc*d

#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin>>input;
    string result;
    int i=0;
    while(i<input.size()){
        if(input[i]>='1' && input[i]<='9' ){
            int n=input[i]-'0';
            i++;
            string ch="";
            while(input[i]>='a'&&input[i]<='z'){
                ch+=input[i];
                i++;
            }
            string repeat="";
            for(int j=0;j<n;j++){
                repeat+=ch;
            }
            result+=repeat;
        }
        else if(input[i]=='+'||input[i]=='-'||input[i]=='*'||input[i]=='/'){
            result+=input[i];
            i++;
        }
        else{
            i++;
        }
            
    }
    cout<<result<<endl;
    return 0;
}