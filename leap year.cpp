#include <iostream>
using namespace std;
int main() {
 int yr;
 cout<<"Enter the year"<<endl;
 cin>>yr;
 if((yr%4==0) && (yr%100!=0)){
     cout<<"It is a leap year"<<endl;
 }
 else if(yr%400==0){
     cout<<"It is a leap year"<<endl;
 }
 else{
     cout<<"It is not a leap year"<<endl;
 }
    return 0;
}