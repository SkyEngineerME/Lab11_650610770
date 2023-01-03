#include<iostream>
using namespace std;

int main(){
	string count;
	int a = 0,b = 0,c = 0,d = 0,f = 0,i = 0;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{

		cout << "Student [" << i+1 << "]: ";
		cin >> count; 
		if(count == "A"){
         a++; 
        i++;
		} 
		else if(count == "B"){b++;
		i++;
		}
		else if(count == "C"){c++;
		i++;
		}
		else if(count == "D") {d++;
           i++;
		}
		else if(count == "F") {f++;
		i++;
		}
		else if(count == "0") break;
        else{
			while(count != "A" || count != "B" ||count != "C" || count != "D" || count != "F"){
			cout << "Wrong input. Please input again."<<endl;
			cout << "Student [" << i+1 << "]: ";
		    cin >> count; 
			if(count != "A" && count != "B" && count != "C" && count != "D" && count != "F" && count != "0"){
			}
			else break;
			}
			if(count == "A"){
         a++; 
        i++;
		} 
		else if(count == "B"){b++;
		i++;
		}
		else if(count == "C"){c++;
		i++;
		}
		else if(count == "D") {d++;
           i++;
		}
		else if(count == "F") {f++;
		i++;
		}
		else if(count == "0") break;
			

		}

	}while(1);
	
	
	cout << "In total "<< i <<" students."<<endl;
	cout << "A = " << a <<", ";
	cout << "B = " << b <<", ";	
	cout << "C = " << c <<", ";
	cout << "D = " << d <<", ";	
	cout << "F = " << f ;
	
	return 0;
}
