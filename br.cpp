#include<iostream>
using namespace std;

class juice{
    public:
    string name;
    string color;
    int size;
    string flavour;

};
int main(){
    // this is an object declaration.
    juice  j;
    j.name="strewberry";
    j.color="grey";
    j.size=5;
    j.flavour="sweet";

    cout<<j.name<<endl;
    cout<<j.color<<endl;
    cout<<j.size<<endl;
    cout<<j.flavour<<endl;
}



