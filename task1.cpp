#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
    int main(){
       srand((unsigned int )time (NULL));
       int number =( rand()%100) +1;

       int guess = 0;
       do{
cout<<"enter guess (1-100):";
cin>> guess;
    if(guess>number)
    cout<<"to high"<<endl;
    else if(guess < number)
    cout<<"to low"<<endl;
    else 
    cout <<"guess is correct"<<endl;
       }while(guess != number);
       return 0;
    }