#include<bits/stdc++.h>
#include<iostream>
using namespace std; // so we use only cout and cin
int org_num=100; 
int guess_num;
    int guess_your_num(){
    	cout<<"Enter Your Number"<<endl;
    	cin>>guess_num;
    	cout<<"your guess is "<<endl;
    	if(org_num<guess_num){
    			cout<<"oops!! too high try gain:("<<endl;
    		guess_your_num();
		}
		else if(org_num>guess_num){
			cout<<"oops!! too low try again:("<<endl;	
	        guess_your_num();
		}
        else{
        	cout<<"Congo!!!!!! you guess it right";
		}
		
	}

int main(){
	std::cout<<"lets start the guessing Game:)"<<endl;
	std::cout<<"please guess you number"<<endl;
	
    guess_your_num();
    return 0;
}

