#include <iostream>
using namespace std;
int main() {
    int marks[8]= {35,78,65,12,99,57,83,77};
    int r= sizeof(marks)/sizeof(marks [0]);
    cout<<"Marks above 60 are: ";
    for (int i = 0; i < 8; i++)
    {
        if (marks[i]>60){
      cout<< marks[i]<<"\n";

        
}

     }
}