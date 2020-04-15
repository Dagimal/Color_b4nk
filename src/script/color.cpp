#include <iostream>
#include <iomanip>
using namespace std;

//modular
void banner(){
	//banner
	cout<<R"(
	   ______      __                
	  / ____/___  / /___  _____      
	 / /   / __ \/ / __ \/ ___/      
	/ /___/ /_/ / / /_/ / /          
	\____/\____///\____/_/       __  
	          / /_  ____ _____  / /__
	         / __ \/ __ `/ __ \/ //_/
	        / /_/ / /_/ / / / / ,<   
	       /_.___/\__,_/_/ /_/_/|_| v1.0 
       					                            
	)";
}
void germanPalette(){
	//var
	int inputGerman,colorFormatInput;
	char repeat;
	//colorFormat
	cout << "|| ++ Select Color Format ++ ||\n\n";
	cout << "[1] HEX\n";
	cout << "[2] RGB\n\n";
	cout << "               _____\n";
	cout << "Select Format : ";
	cin >> colorFormatInput;
	//ambilnya kiri ke kanan
	repeat:
	system("clear");
	banner();
	string germanName[20] = {"Fusion Red","Orange Hibiscus","Flirtatious","Reptile Green","Maximum Blue Green","Desire","Beniukon Bronze","Nyc Taxi","Algal Fuel","Turquoise Topaz",
	"High Blue","C64 Ntsc","Lighter Purple","Twinkle Blue","Blue Grey","Boyzone","Royal Blue","Gloomy Purple","Innuendo","Blue Horizon"};
	string germanHEX[20] = {"#fc5c65","#fd9644","#fed330","#26de81","#2bcbba","#eb3b5a","#fa8231","#f7b731","#20bf6b","#0fb9b1",
							"#45aaf2","#4b7bec","#a55eea","#d1d8e0","#778ca3","#2d98da","#3867d6","#8854d0","#a5b1c2","#4b6584"};
	
	if (colorFormatInput == 1)
	{
		for (int i = 0; i <= 19; ++i)
		{
			cout << "[" << i+1 << "] " << germanName[i] << endl;
		}
		cout << "[0] Back To Menu\n";
		cout << "       		__________________\n";
		cout << "Select Number : ";cin>>inputGerman;
		cout << "Copy This Value !! ------>> "<< setw(10) << germanHEX[inputGerman -1] << " ["<<germanName[inputGerman - 1]<<"]" << endl;
		//repeat
		cout << "Repeat? (y/n)";cin>>repeat;
		if (repeat == 'y' || repeat == 'Y')
		{
			goto repeat;
		}
		
	}
}

int main(){
//var
string nama;
int colorPaletteInput;
banner();
 //mainProgram
	cout << "//// ++++ WELCOME TO COLOR BANK TOOLS ++++ ////\n";
	cout << "Siapa Namamu? : ";cin>>nama;
	cout << "Happy Coloring, "<<nama<<" ! XD\n\n";
//colorPalette
	cout << "|| -- Select Color Palette -- ||\n\n";
	cout << "[1] German Palette";
	cout << setw(25) << "[2] Indian Palette\n";
	cout << "[3] Russian Palette";
	cout << setw(25) << "[4] Spanish Palette\n";
	cout << "[5] Swedish Palette";
	cout << setw(25) << "[6] Turkish Palette\n";
	cin >> colorPaletteInput;
	if (colorPaletteInput == 1)
	{
		germanPalette();
	}
}