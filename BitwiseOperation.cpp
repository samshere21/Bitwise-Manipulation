#include <iostream>

using namespace std;

void showBits(unsigned int n) {

		for (int i=31;i>=0;i--)
				if (n & (1 << i))
						cout << '1';
 				else
 						cout << '0';

 			cout << endl;
 		}
 		
int countBits(unsigned int n) {
	int count=0;
			
	while (n != 0) {
		count++;
		n &= n - 1;
	}
		
		return count;
	}

 	int main(void) {
 		unsigned int
 		a,b,c;

 		cout << "Enter two nonnegative integers: ";
 		cin >> a >> b;

		cout << a << " in binary is: ";
		showBits(a);
		cout << b << " in binary is: ";
		showBits(b);
    
		cout << a <<" & " << b << " is: "; 
		showBits(a & b);
		cout << a <<" | " << b << " is: ";
		showBits(a | b);
		cout << a <<" ^ " << b << " is: ";
		showBits(a ^ b);
		cout <<"~" << a << " is: ";
		showBits(~a);
		cout <<"~" << b << " is: ";
		showBits(~b);
		cout<< endl;
 
		cout <<"Shifting a to left by 2: ";
		showBits(a<<2);
		cout <<"Shifting b to right by 2: ";
		showBits(b>>2);
		cout<<endl;

		cout<<"Number of 1s in a is: "<<countBits(a)<<endl;
		cout<<"Number of 1s in b is: "<<countBits(b);


		return 0;
}