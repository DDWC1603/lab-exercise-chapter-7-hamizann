#include <string>
#include <iostream>
using namespace std;



int main()
{
	
	string myName="Adebayor ";//write your name there.
	//make a while loop until user input 'quit' to exit/end the program
	string userName;
	while(true)
	{
	    cout<<"enter name: ";
	    cin>> userName;
	   
        
		
		//get the user input for string.
		if(userName=="Abu")
	       	{
			cout<<"Hey Aubameyang!"<<endl;
		}
		else if(userName=="quit")
		{
			cout<<endl;
			break;
		}
		else
		{
			cout<<"Aha! its "<<myName<<endl;
		}
	}
	return 0;
}
