#include<iostream>
using namespace std;
int main ()
{
	int x=0,y=0;
	char ch;
	ch =cin.get(); 
		while(ch !='\n'){
				if(ch=='N'){
					y++;
				}
				else if(ch=='S'){
					y--;
				}
				else if(ch=='E'){
					x++;
				}
				else if(ch=='W'){
					x--;
				}
				ch= cin.get();
		}
				//cout<<x<<" "<<y<<endl;
			if (x >= 0 and y >= 0) {
				//1st Quadrant
				// Print x times E
				for (int i = 0; i < x; ++i)
				{
					cout << 'E';
				}
				// Print y times N
				for (int i = 0; i < y; ++i)
				{
					cout << 'N';
				}
			}
			else if (x <= 0 and y >= 0) {
				// 2nd Quadrant
				// Print y times N
				for (int i = 0; i < y; ++i)
				{
					cout << 'N';
				}
				// Print |x| times W
				x *= -1;
				for (int i = 0; i < x; ++i)
				{
					cout << 'W';
				}
			}
			else if (x <= 0 and y <= 0) {
				// 3rd Quadrant
				// Print |y| times S
				y *= -1;
				for (int i = 0; i < y; ++i)
				{
					cout << 'S';
				}
				// Print |x| times W
				x *= -1;
				for (int i = 0; i < x; ++i)
				{
					cout << 'W';
				}

			}
			else {
				// 4th Quadrant
				// Print x times E
				for (int i = 0; i < x; ++i)
				{
					cout << 'E';
				}
				// Print |y| times S
				y *= -1;
				for (int i = 0; i < y; ++i)
				{
					cout << 'S';
				}
			}

	
    return 0;
}
    