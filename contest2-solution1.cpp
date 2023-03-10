// Problem Statement

// Once upon a time, in a small village, there was a group of hardworking farmers who had a huge wheat field. Every year, they would work together to harvest the wheat and prepare it for sale in the market.

// One year, due to unforeseen circumstances, the farmers were sick for few days during the harvest season. As a result, they have less time to finish the harvest on time.

// They realized that they needed to find a way to complete the harvest in a shorter amount of time. That's when they remembered a mathematical problem that they had learned in school - "If a work is done by X people in D1 days, then how many people you need to complete that work in D2 days?"

// They quickly calculated that they needed to increase the number of people working in the field to finish the harvest on time. They reached out to neighboring villages and hired some extra hands.

// Can you tell how many farmers do they have now?

// Input Format

// First line will contain T, the number of test cases.
// Each line of the test case will contain X(The number of farmers in the village), D1(Number of days needed to complete the work by X farmers), D2(Number of days have now)
// Constraints

// 1 <= T <= 1000
// 1 <= X <= 1000
// 1<= D1, D2 <= 365; Here D2 <= D1
// Output Format

// Output the total number of farmers needed to complete the harvesting. You should give ceiling value as output if rational number is found.
// Sample Input 0

// 2
// 15 13 9
// 1 16 8
// Sample Output 0

// 22
// 2

#include <bits/stdc++.h>
using namespace std;

int farmers(int x, int d1, int d2){
    int x1=ceil(double(x)*d1/d2);
    return x1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int d1,d2,x;
        cin>>x>>d1>>d2;
        cout<<farmers(x,d1,d2)<<endl;
    }
    return 0;
}