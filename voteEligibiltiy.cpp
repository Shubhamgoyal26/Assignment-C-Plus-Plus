// Checking eligibility for voting

#include<iostream>

using namespace std;

int main(void){
    int age;
    
    cout<<"Enter your age: ";
    cin>>age;

    if(age >= 18){
        cout<<"You are eligible to vote";
    }
    else if(age < 0){
        cout<<"Age cannot be negative";
    }
    else{
        cout<<"You are not eligible to vote"<<endl<<"Wait for "<<18 - age<<" years to vote";
    }

    return 0;
}
