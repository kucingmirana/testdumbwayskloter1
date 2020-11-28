// Example program
#include <iostream>
#include <string>
using namespace std;

void printPattern(int number){
	
	int tampung=(number/2)+1;
	int tampung2=-1;
	for(int i=1;i<=number;i++){
		if(number == 1 || number==2){
			for(int y=0;y<number;y++){
			cout<<"*";
			}
			cout<<"\n";
		}
		
		else if(number>2){
			
			if(i==1){
				for(int y=0;y<number;y++){
					cout<<"*";
				}
				
				cout<<"\n";
			}
			
			else if(i>=2){
				
				if(i%2==0){
					for(int y=1;y<=number+2-i;y++)
					{
						
						if(y==tampung)
						{
							
							tampung--;
							tampung2+=2;
							if (tampung2==13){
								cout<<" DUMBWAYS ID ";
							}
							else if(tampung2!=13){
								for(int z=1;z<=tampung2;z++)
								{
									cout<<" ";
						
								}
							}
							
							
						}
						else if (y != tampung){
							cout<<"*";
						}				
					}
					cout<<"\n";	
				}
			}
			
		}
		
	}
	
	int tampung3=(number/2)+1;
	int tampung4=-1;
    
    for(int i=1;i<=number;i++){
		if(number == 1 || number==2){
			for(int y=0;y<number;y++){
			cout<<"*";
			}
			cout<<"\n";
		}
		
		else if(number>2){
			
			if(i==1){
				for(int y=0;y<number;y++){
					cout<<"*";
				}
				
				cout<<"\n";
			}
			
			else if(i>=2){
				
				if(i%2==0){
					for(int y=1;y<=number+2-i;y++)
					{
						
						if(y==tampung3)
						{
							tampung3--;
							tampung4+=2;
							for(int z=1;z<=tampung4;z++)
							{
								cout<<" ";
					
							}
							
						}
						else if (y != tampung3){
							cout<<"*";
						}				
					}
					cout<<"\n";	
				}
			}
			
		}
		
	}
    
}


int main()
{	
	printPattern(15);
}

