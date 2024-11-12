# include <iostream>

using namespace std;

int main(){
    int marks []={50,70,23,59,90,85,77,99,66};

     int m= sizeof (marks)/sizeof (marks[0]);
     cout<<m<<endl;
    
     
     cout<<"marks above 50 are:"<<endl;                    

     for (int i=0; i<m; i++) 
     {
        if(marks[i]>50){
            cout<<marks[i]<<"\n"; 
        };
     };
     
    




    return 0;
}