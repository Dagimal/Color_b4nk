#include <iostream>
#include <iomanip> //setw
#include <stdlib.h> //textColor
#include <algorithm> //sorting & searching

using namespace std;

//modular
void banner(){
	//banner
	cout<<R"(
	   ______      __                
	  / ____/___  / /___  _____      
	 / /   / __ \/ / __ \/ ___/      
	/ /___/ /_/ / / /_/ / /          
	\____/\____/ /\____/_/       __  
	          / /_  ____ _____  / /__
	         / __ \/ __ `/ __ \/ //_/
	        / /_/ / /_/ / / / / ,<   
	       /_.___/\__,_/_/ /_/_/|_| v0.1
	       Offline Static Color Database
    	   source: https://flatuicolors.com			                            
	)";
}
//binarySearch
string dataCari;
bool ketemu;

void germanPalette(){
	banner();
	cout << "	\033[1;31m[German Palette Selected!]\033[0m\n";
	//var
	int inputGerman,colorFormatInput;
	char repeat;
	//colorFormat
	cout << "|| ++ Select Color Format ++ ||\n\n";
	cout << "[1] HEX\n";
	cout << "[2] RGB [Coming Soon]\n\n";
	cout << "               _____\n";
	cout << "Select Format : ";
	cin >> colorFormatInput;
	//ambilnya kiri ke kanan
	repeat:
	system("clear || CLS");
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
		cout << "[0] Search\n";
		cout << "       		__________________\n";
		cout << "Select Number : ";cin>>inputGerman;
		
		//binarySearch
		if (inputGerman == 0)
		{
			cout << "Validasi Data Diatas :\n";
			cin >> dataCari;
			ketemu = binary_search(begin(germanName), end(germanName), dataCari);
			if (ketemu)
			{
				cout << "\033[1;31m[++ Data Found ++]\033[0m" << endl;
			}else{
				cout << "\033[1;31m[-- Data Not Found --]\033[0m" << endl;
			}
		}else
		{
			cout << "Copy This Value !! ------>> "<< setw(10) << germanHEX[inputGerman - 1] << " ["<<germanName[inputGerman - 1]<<"]" << endl;
		}
		
		
		//repeat
		int repeatCount;
		cout << "Repeat? (y/n)";cin>>repeat;
		if (repeat == 'y' || repeat == 'Y')
		{
			goto repeat;
		}
	}
}

void indianPalette(){
	banner();
	cout << "	\033[1;31m[Indian Palette Selected!]\033[0m\n";
	//var
	int inputIndian,colorFormatInput;
	char repeat;
	//colorFormat
	cout << "|| ++ Select Color Format ++ ||\n\n";
	cout << "[1] HEX\n";
	cout << "[2] RGB [Coming Soon]\n\n";
	cout << "               _____\n";
	cout << "Select Format : ";
	cin >> colorFormatInput;
	//ambilnya kiri ke kanan
	repeat:
	system("clear || CLS");
	banner();
	string indianName[20] = {"Orchid Orange","Spiro DiscoBall","Honey Glow","Sweet Garden","Falling Star","Rich Gardenia","Clear Chill","Sarawak White Papper","Keppel","Ship's Officer","Fiery Fuchsia","Bluebell","Georgia Peach",
							 "Oasis Stream","Bright Ube","Magenta Purple","Ending Navy Blue","Sasquatch Socks","Pine Glade","Highlighter Lavender"};
	string indianHEX[20] = {"#Fea47F","#25Ccf7","#Eab543","#55E6C1","#Cad3C8","#F97F51","#1B9Cfc","#F8Efba","#58B19F","#2C3A47","#B33771","#3B3B98",
							"#Fd7272","#9Aecdb","#D6A2E8","#6D214F","#182C61","#Fc427B","#Bdc581","#82589F"};
	


	if (colorFormatInput == 1)
	{
		for (int i = 0; i <= 19; ++i)
		{
			cout << "[" << i+1 << "] " << indianName[i] << endl;
		}
		cout << "[0] Search\n";
		cout << "       		__________________\n";
		cout << "Select Number : ";cin>>inputIndian;
		//binarySearch
		if (inputIndian == 0)
		{
			cout << "Validasi Data Diatas :\n";
			cin >> dataCari;
			ketemu = binary_search(begin(indianName), end(indianName), dataCari);
			if (ketemu)
			{
				cout << "\033[1;31m[++ Data Found ++]\033[0m" << endl;
			}else{
				cout << "\033[1;31m[-- Data Not Found --]\033[0m" << endl;
			}
		}else
		{
			cout << "Copy This Value !! ------>> "<< setw(10) << indianHEX[inputIndian - 1] << " ["<<indianName[inputIndian - 1]<<"]" << endl;
		}
		//repeat
		cout << "Repeat? (y/n)";cin>>repeat;
		if (repeat == 'y' || repeat == 'Y')
		{
			goto repeat;
		}
	}
}

void russianPalette(){
	banner();
	cout << "	\033[1;31m[Russian Palette Selected!]\033[0m\n";
	//var
	int inputRussian,colorFormatInput;
	char repeat;
	//colorFormat
	cout << "|| ++ Select Color Format ++ ||\n\n";
	cout << "[1] HEX\n";
	cout << "[2] RGB [Coming Soon]\n\n";
	cout << "               _____\n";
	cout << "Select Format : ";
	cin >> colorFormatInput;
	//ambilnya kiri ke kanan
	repeat:
	system("clear || CLS");
	banner();
	string russianName[20] = {"Creamy Peach","Rosy Highlight","Soft Blue","Brewed Mustard","Old Geranium","Sawtooth Aak","Summertime","Cornflower","Tigerlily","Deep Rose","Purple Mountain Majesty","Rogue Pink","Squeaky",
							 "Apple Valley","Pencil Lead","Purple Corallite","Flamingo Pink","Blue Curacao","Porcelain Rose","Biscay"};
	string russianHEX[20] = {"#f3a683","#f7d794","#778beb","#e77f67","#cf6a87","#f19066","#f5cd79","#546de5","#e15f41","#c44569","#786fa6","#f8a5c2",
							"#63cdda","#ea8685","#596275","#574b90","#f78fb3","#3dc1d3","#e66767","#303952"};
	
	if (colorFormatInput == 1)
	{
		for (int i = 0; i <= 19; ++i)
		{
			cout << "[" << i+1 << "] " << russianName[i] << endl;
		}
		cout << "[0] Search\n";
		cout << "       		__________________\n";
		cout << "Select Number : ";cin>>inputRussian;
		//binarySearch
		if (inputRussian == 0)
		{
			cout << "Validasi Data Diatas :\n";
			cin >> dataCari;
			ketemu = binary_search(begin(russianName), end(russianName), dataCari);
			if (ketemu)
			{
				cout << "\033[1;31m[++ Data Found ++]\033[0m" << endl;
			}else{
				cout << "\033[1;31m[-- Data Not Found --]\033[0m" << endl;
			}
		}else
		{
			cout << "Copy This Value !! ------>> "<< setw(10) << russianHEX[inputRussian - 1] << " ["<<russianName[inputRussian - 1]<<"]" << endl;
		}
		//repeat
		cout << "Repeat? (y/n)";cin>>repeat;
		if (repeat == 'y' || repeat == 'Y')
		{
			goto repeat;
		}
	}
}
void spanishPalette(){
	banner();
	cout << "	\033[1;31m[Spanish Palette Selected!]\033[0m\n";
	//var
	int inputSpanish,colorFormatInput;
	char repeat;
	//colorFormat
	cout << "|| ++ Select Color Format ++ ||\n\n";
	cout << "[1] HEX\n";
	cout << "[2] RGB [Coming Soon]\n\n";
	cout << "               _____\n";
	cout << "Select Format : ";
	cin >> colorFormatInput;
	//ambilnya kiri ke kanan
	repeat:
	system("clear || CLS");
	banner();
	string spanishName[20]={"Jacksons Purple","C64 Purple","Swan White","Summer Sky","Celestial Green","Lucky Point","Liberty","Hot Stone","Devil Blue","Palm Springs Splash","Flourescent Red","Synthetic Pumpkin",
							"Crocodile Tooth","Mandarin Sorbet","Spiced Butternut","Eye Of Newt","Chilean Fire","Grey Porcelain","Alameda Ochre","Desert"};
	string spanishHEX[20]={"#40407a","#706fd3","#f7f1e3","#34ace0","#33d9b2","#2c2c54","#474787","#aaa69d","#227093",
						   "#218c74","#ff5252","#ff793f","#d1ccc0","#ffb142","#ffda79","#b33939","#cd6133","#84817a","#cc8e35","#ccae62"};
	
	if (colorFormatInput == 1)
	{
		for (int i = 0; i <= 19; ++i)
		{
			cout << "[" << i+1 << "] " << spanishName[i] << endl;
		}
		cout << "[0] Search\n";
		cout << "       		__________________\n";
		cout << "Select Number : ";cin>>inputSpanish;
		//binarySearch
		if (inputSpanish == 0)
		{
			cout << "Validasi Data Diatas :\n";
			cin >> dataCari;
			ketemu = binary_search(begin(spanishName), end(spanishName), dataCari);
			if (ketemu)
			{
				cout << "\033[1;31m[++ Data Found ++]\033[0m" << endl;
			}else{
				cout << "\033[1;31m[-- Data Not Found --]\033[0m" << endl;
			}
		}else
		{
			cout << "Copy This Value !! ------>> "<< setw(10) << spanishHEX[inputSpanish - 1] << " ["<<spanishName[inputSpanish - 1]<<"]" << endl;
		}
		//repeat
		cout << "Repeat? (y/n)";cin>>repeat;
		if (repeat == 'y' || repeat == 'Y')
		{
			goto repeat;
		}
	}
}

void swedishPalette(){
	banner();
	cout << "	\033[1;31m[Swedish Palette Selected!]\033[0m\n";
	//var
	int inputSwedish,colorFormatInput;
	char repeat;
	//colorFormat
	cout << "|| ++ Select Color Format ++ ||\n\n";
	cout << "[1] HEX\n";
	cout << "[2] RGB [Coming Soon]\n\n";
	cout << "               _____\n";
	cout << "Select Format : ";
	cin >> colorFormatInput;
	//ambilnya kiri ke kanan
	repeat:
	system("clear || CLS");
	banner();
	string swedishName[20]={"Hishlighter Pink","Dark Periwinkle","Megaman","Fresh Turquoise","Minty Green","Sizzling Red",
							"Free Speech Blue","Spiro Disco Ball","Jade Dust","Green Teal","Narenji Orange","Yriel Yellow","Sunset Orange","Hint Of Elusive Blue","Good Night!","Chrome Yellow","Vibrant Yellow","Red Orange","London Square","Black Pearl"};
	string swedishHEX[20]={"#ef5777","#575fcf","#4bcffa","#34e7e4","#0be881","#f53b57","#3c40c6","#0fbcf9","#00d8d6",
						   "#05c46b","#ffc048","#ffdd59","#ff5e57","#d2dae2","#485460","#ffa801","#ffd32a","#ff3f34","#808e9b","#1e272e",};
	
	if (colorFormatInput == 1)
	{
		for (int i = 0; i <= 19; ++i)
		{
			cout << "[" << i+1 << "] " << swedishName[i] << endl;
		}
		cout << "[0] Search\n";
		cout << "       		__________________\n";
		cout << "Select Number : ";cin>>inputSwedish;
		//binarySearch
		if (inputSwedish == 0)
		{
			cout << "Validasi Data Diatas :\n";
			cin >> dataCari;
			ketemu = binary_search(begin(swedishName), end(swedishName), dataCari);
			if (ketemu)
			{
				cout << "\033[1;31m[++ Data Found ++]\033[0m" << endl;
			}else{
				cout << "\033[1;31m[-- Data Not Found --]\033[0m" << endl;
			}
		}else
		{
			cout << "Copy This Value !! ------>> "<< setw(10) << swedishHEX[inputSwedish - 1] << " ["<<swedishName[inputSwedish - 1]<<"]" << endl;
		}
		//repeat
		cout << "Repeat? (y/n)";cin>>repeat;
		if (repeat == 'y' || repeat == 'Y')
		{
			goto repeat;
		}
	}
}

void turkishPalette(){
	banner();
	cout << "	\033[1;31m[Turkish Palette Selected!]\033[0m\n";
	//var
	int inputTurkish,colorFormatInput;
	char repeat;
	//colorFormat
	cout << "|| ++ Select Color Format ++ ||\n\n";
	cout << "[1] HEX\n";
	cout << "[2] RGB [Coming Soon]\n\n";
	cout << "               _____\n";
	cout << "Select Format : ";
	cin >> colorFormatInput;
	//ambilnya kiri ke kanan
	repeat:
	system("clear || CLS");
	banner();
	string turkishName[20]={"Bright Lilac","Pretty Please","Light Red","Mandarin Sorbet","Unmellow Yellow","Light Purple","Young Salmon","Red Orange","Radiant Yellow","Dorn Yellow",
							"Wintergreen","Electric Blue","Neon Blue","Light Slate Blue","Shadowed Steel","Weird Green","Hammam Blue","Spiro Disco Ball","Light Indigo","Baltic Sea"};
	string turkishHEX[20]={"#cd84f1","#ffcccc","#ff4d4d","#ffaf40","#fffa65","#c56cf0","#ffb8b8","#ff3838",
							"#ff9f1a","#fff200","#32ff7e","#7efff5","#18dcff","#7d5fff","#4b4b4b","#3ae374","#67e6dc","#17c0eb","#7158e2","#3d3d3d"};
	
	if (colorFormatInput == 1)
	{
		for (int i = 0; i <= 19; ++i)
		{
			cout << "[" << i+1 << "] " << turkishName[i] << endl;
		}
		cout << "[0] Search\n";
		cout << "       		__________________\n";
		cout << "Select Number : ";cin>>inputTurkish;
		//binarySearch
		if (inputTurkish == 0)
		{
			cout << "Validasi Data Diatas :\n";
			cin >> dataCari;
			ketemu = binary_search(begin(turkishName), end(turkishName), dataCari);
			if (ketemu)
			{
				cout << "\033[1;31m[++ Data Found ++]\033[0m" << endl;
			}else{
				cout << "\033[1;31m[-- Data Not Found --]\033[0m" << endl;
			}
		}else
		{
			cout << "Copy This Value !! ------>> "<< setw(10) << turkishHEX[inputTurkish - 1] << " ["<<turkishName[inputTurkish - 1]<<"]" << endl;
		}
		//repeat
		cout << "Repeat? (y/n)";cin>>repeat;
		if (repeat == 'y' || repeat == 'Y')
		{
			goto repeat;
		}
	}
}

//sortingArray
void colorPalette(){
	char menu;
	cout << "flatuicolors.com color palette list\n";
	cout << "========================================\n";
	string colorPalette[15]={"Flat UI Palette v1","Material UI","American Palette","Aussie Palette","British Palette","Canadian Palette",
	"Chinese Palette","Dutch Palette","French Palette","German Palette","Indian Palette","Russian Palette","Spanish Palette","Swedish Palette","Turkish Palette"};
	for (int i = 0; i < 15; i++)
	{
		cout << "[" << i+1 << "] " << colorPalette[i] << endl;
		sort(begin(colorPalette), end(colorPalette));
	}
	
	
}

void mainProgram(){
//var
string nama;
int colorPaletteInput;
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
	cout << "[7] FlatUI Color Palette\n";
	cout << endl;
	cout << "Select Number : ";
	cin >> colorPaletteInput;
	switch(colorPaletteInput){
		case 1:
			system("clear || CLS");
			germanPalette();
		case 2:
			system("clear || CLS");
			indianPalette();
		case 3:
			system("clear || CLS");
			russianPalette();
		case 4:
			system("clear || CLS");
			spanishPalette();
		case 5:
			system("clear || CLS");
			swedishPalette();
		case 6:
			system("clear || CLS");
			turkishPalette();
		case 7:
			system("clear || CLS");
			colorPalette();
	}
}

int main(){
	banner();
	mainProgram();
}