#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int a, b;
        cin>>a>>b;

        int sum = 0;
        for(int j = a; j<=b; j++){
            if(j%2){
                sum+=j;
            }
        }

        cout<<"Case "<<i+1<<": "<<sum;
        cout<<"\n";
    }



}