#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int queries;
        set<int>set;
    cin>>queries;
    while(queries>0){
        int x,y;
        cin>>x>>y;
        if(x==1){
            set.insert(y);
        }else if(x==2){
            set.erase(y);
        }else if(x==3){
            cout<<(set.find(y)==set.end()?"No":"Yes")<<endl;
        }
        queries--;
    }
    return 0;
}



