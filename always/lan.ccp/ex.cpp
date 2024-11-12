# include <iostream>
using namespace std;
int main () {

    try{
        int age=16;
        if(age >=18){
            cout <<"access granted - you are old enough";

        }
        else{
            throw (age);
        }
    }
     
     catch (int mynum){
        cout <<"access denied -you must be at least 18 years old.\n";
     }
     return 0;


}