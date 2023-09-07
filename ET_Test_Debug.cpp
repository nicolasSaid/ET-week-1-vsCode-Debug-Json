#include <stdlib.h>
#include <iostream>

using namespace std;
int adder(int index){
    return index*index;
}

int main(){
    int sum = 0;

    for(int i = 0; i < 100; i++){
        sum += adder(i);
    }
    
    cout<<sum<<endl;
}