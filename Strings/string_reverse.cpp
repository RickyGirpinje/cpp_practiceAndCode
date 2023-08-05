//Reverse string without using strrevve funtion
#include<iostream>
using namespace std;

int main(){
    int day1,month1,year1,day2,month2,year2;
    cin>>day1>>month1>>year1>>day2>>month2>>year2;

    int totaldays=0;
    int year=year2-year1+1;
    for(int i=year1;i<=year2;i++){
        if(i%100==0 && i%400==0){  //leap year for senturay
            totaldays+=366;
        }else if(i%4==0){
            totaldays+=366;
        }else{
            totaldays+=365;
        }
    }
    cout<<totaldays;
    return 0;
}