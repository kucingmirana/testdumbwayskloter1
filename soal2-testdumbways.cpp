// Example program
#include <iostream>
#include <string>
using namespace std;

void putarArray(char a, char b, char c, char d, char e){
    char aray[5] = {a,b,c,d,e};
    
    cout<<"setelah di putar 4 kali :";
    cout<<"\n";
    
    for(int i=0;i<4;i++){
        
        for(int y=1+i;y<5;y++)
        {
            
            cout<<aray[y];
            
        }
        for(int z=0;z<=i;z++){
        	
        	cout<<aray[z];
        	
		}
        
        cout<<"\n";
    }
    
}


int main()
{
	cout<<"abcde sebelum diputar 4 kali \n";
	
	putarArray('a','b','c','d','e');
}

