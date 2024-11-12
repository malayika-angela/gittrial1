#include <iostream>
using namespace std;
int main(){
    int marks[8]={35,78,65,12,99,57,83,77};
    cout<<"marks above 60."<<endl;
    int u= 0;
    while ( u < 8)
    {
    if (marks[u]>60){
            cout<< marks[u]<<",";
           
    }
         u++;
        
   }
    return 0;
}
