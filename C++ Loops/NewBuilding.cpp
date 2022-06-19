/*New building

SoftUni is about to move to a new building that can accommodate all knowledge-hungry students.
However, interior designers are facing a problem, namely the optimization of space in the new halls.
Since they can't do it on their own and are aware that SoftUni students can help them without difficulty
, the designers assign you the task.
According to the given dimensions (integer) we have to calculate and draw on the console how many seats
 can fit in the respective hall, keeping in mind the following:
 
• Seats must be diagonal and marked with a '#'.
• The distance between the places (empty space) is indicated by '...'.

• The drawing of the hall should start with a seat in the upper
 left corner and follow the chair-empty-chair-empty template.
 
• Seats (chairs) are located top-right to bottom-left.

• For clarity, see the examples below.

Entrance
• The input is read from the console.
• One row - the size of the hall - an integer [3… 151].

Exit
• The exit should be a drawing of the location of the seats and empty seats in the hall.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	
	int width;
	
	cin>>width;
	
    int height = width / 2 + width;
    
    for (int y = 0; y < height; y++) {
        string arr[0];
        
        for (int x = 0; x < width; x++) {
            int isLane = x + y;
			if(isLane % 4 == 0){
				arr[x]=(isLane ? "#" : ".");
			}
            
        }
        cout<<*arr<<""<<endl;
    }
    return 0;
}
	
