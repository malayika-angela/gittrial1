# include <iostream>
# include <string>
using namespace std;

int main(){
    string animal= "cow";
    string* ptr= & animal;

// show the value of animal.
// show the address of  animal.

    cout<<"value of animal :"<<animal<<endl;
    cout<<"address of animal:"<<&animal<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    
return 0;

}
// nakanwagi angella
// 2024-B071-21804