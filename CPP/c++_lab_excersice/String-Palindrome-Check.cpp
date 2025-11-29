#include<iostream>
#include<string>
using namespace std;

main(){
	string str;
	cout<<"Enter the string:";
	cin>>str;

	int len = str.length();
	bool isPalindrome = true;
	
	for(int i=0;i<len/2;i++){
		if (str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
	}
	if(isPalindrome){
		cout<<"The number is palindrome";
	}
	else{
		cout<<"The number is not palindrome";
	}
}

