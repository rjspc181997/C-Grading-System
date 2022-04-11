#include <iostream>
#include <windows.h>
using namespace std;

COORD coord={0,0};

void gotoxy(int x, int y)
{
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


int main()
{
	int i, j;
	float grade[2][5], sum=0;
	int id[2];
	
	gotoxy(20,5);cout<<"Input Grade";
	
	gotoxy(1,7);cout<<"Student ID";
	gotoxy(15,7);cout<<"PRELIM";
    gotoxy(25,7);cout<<"MIDTERM";
    gotoxy(35,7);cout<<"SEMIFINAL";
    gotoxy(45,7);cout<<"FINAL";
    
    
	int y=9;
	
	for(i=0; i<2; i++)
		{	
			int x1=10;
			int x=15;
			
			gotoxy(1,y);
			cin >> id[i];
			
			for(j=0; j<4; j++)
				{
					gotoxy(x,y);
					cin >> grade[i][j];
					x=x+x1;
				}
				
			y=y+1;
		}
		
	

	gotoxy(20,13);cout<<"Print Grade";
	
	gotoxy(1,15);cout<<"Student ID";
	gotoxy(15,15);cout<<"PRELIM";
    gotoxy(25,15);cout<<"MIDTERM";
    gotoxy(35,15);cout<<"SEMIFINAL";
    gotoxy(45,15);cout<<"FINAL";
	
	y=17;
	
	for(i=0; i<2; i++)
		{
			
            int x1=10;
            int x = 15;
            gotoxy(1,y);
            cout<< id[i];
           
                for(j=0; j<1; j++)
                    {
                        gotoxy(x,y);
                        cout<<grade[i][j];
                        sum+=grade[i][j];
                        x=x+x1;
                     }
            x1=10;
			x=25;         
            	
				for(j=1; j<4; j++)
					{
						gotoxy(x,y);
						sum=(sum+grade[i][j])/2;
						cout<<sum;
						x=x+x1;					
					}
					
			break;          
         
		}
		
	y=18;
	sum=0;
	
	for(i=1;i<2;i++)
		{	
			int x1=10;
            int x = 15;
            
			gotoxy(1,y);
			cout << id[i];
			
			for(j=0; j<1; j++)
				{
					gotoxy(x,y);
                    cout<<grade[i][j];
                    sum+=grade[i][j];
                    x=x+x1;
				}
				
			
			x1=10;
			x=25;         
            	
			for(j=1; j<4; j++)
				{
					gotoxy(x,y);
					sum=(sum+grade[i][j])/2;
					cout<<sum;
					x=x+x1;					
				}
		}
		

	
	return 0;
}
