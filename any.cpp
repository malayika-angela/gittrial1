# include <iostream>
# include<string>
#include<vector>
using namespace std;
int main(){
    std:: vector<std::string>

    fruits={"mango","orange","pineapple","jackfruit","grapes","berries","apples",};
for(const auto & fruit:fruits){
    if(fruit=="mango"){
        std::cout<<"this is a mango."<< std::endl;

    }
    else{
        std::cout<<"this is not a mango,it is "<<fruit<<"."<<std::endl;
    }
}

}