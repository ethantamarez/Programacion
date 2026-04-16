#include <iostream>
using namespace std;

int main(){
    int Array[5]={1,2,3,4,5};

    int*PInteger;

    PInteger=Array;

    std::cout<<"PInteger"<<*(PInteger)<<std::endl;


    *(PInteger+3);
    std::cout<<"PInteger+3"<<*(PInteger+3)<<std::endl;

    return 0;
}
