#include<iostream>
using namespace std;

void printPattern(int n){
    for(int i=1; i<n; i++){
        for(int j=1; j<n-i+1; j++){
            cout<< j <<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printPattern(n);

return 0;
}

// Output:
// 5
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 