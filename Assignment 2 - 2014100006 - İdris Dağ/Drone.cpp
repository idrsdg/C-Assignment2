#include<iostream>
#include<string>
using namespace std;



int main(){
	string direction = "North";
	string myWay;
	int myNum;
	cin >> myWay >> myNum;
	int height = 0;
	
	
	while(myWay != "B")
	{
		if(myWay == "U"){
			
			height += myNum;
			
			if(height > 50){
				height = 50;
			}
			
			cout << "Head direction: "<< direction << ", Height: " << height << endl;
		}
		
		else if(myWay == "D"){
			
			height -= myNum;
			
			if(height < 0){
				
				height = 0;
			}
			
			cout << "Head direction: " << direction << ", Height: " << height << endl;
		}
		
		
		else if(myWay == "F"){
			
			if(height > 0){
				
				cout << "Going forward " << myNum << " units. Head direction: " << direction << ", Height: " << height << endl;
			}
			
			else{
				
				cout << "Not in the air !!! Head direction: " << direction << ", Height: " << height << endl;
			}
			
			
		}
		
		else{
			if(height>0){
			
				if(myNum == 0){
				
				if(direction == "North"){
					
					direction = "East";
				}
				else if(direction == "East"){
					
					direction = "South";
				}
				else if(direction == "South"){
					
					direction = "West";
				}
				else{
					
					direction = "North";
				}
								
			}
			else if(myNum==1){
				
				if(direction == "North"){
					
					direction = "West";
				}
				else if(direction == "West"){
					
					direction = "South";
				}
				else if(direction == "South"){
					
					direction = "East";
				}
				else{
					
					direction = "North";
				}
				
			}
			else{
				cout << "wrong input!!! take 1 or 0 for this function." << endl;
			}
			
			cout << "Head direction: " << direction << ", Height: " << height << endl;
			
		}
		else{
			
			cout << "Not in the air!!! Head direction: " << direction << ", Height: " << height << endl;
			
			}
		
		}
		

		cin >> myWay >> myNum;
		
	}
	
	return 1;
	
	

}
