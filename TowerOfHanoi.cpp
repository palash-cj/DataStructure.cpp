#include<iostream>
using namespace std;

void toh(int rings, char src, char dest, char helper){
    if(rings==0){
        return;
    }

    toh(rings-1, src, helper, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    toh(rings-1, helper, dest, src);

}

int main(){
    toh(3, 'A', 'C', 'B');
    return 0;
}