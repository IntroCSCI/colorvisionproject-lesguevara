//Author: Leslie Guevara
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  string basecolor;
  fstream fileOut;
  string fileName;
  string Blue;
  string Purple;
  string Pink;
  string Orange;
  string Yellow;
  string Green;
  string Black;

  cout << "Please choose a color from the following:" << endl; 
  cout << "Blue, Purple, Pink, Orange, Yellow, Green, Black." << endl;
  //ask for an input for the base color 

  cin >> basecolor;
  //save input color value as string for basecolor

  cout << "Please input a name for your file of color combinations:"<< endl;
  cin >> fileName;
  fileOut.open(fileName);

 //save input name as as new file

  do {
      std::fstream fileOut("fileName.css");
      fileOut << "Blue (#1E88E5) \n ";
      fileOut << "Pink (#D81B60) \n ";
      fileOut << "Yellow (#FFC107) \n ";
      fileOut << "Black (#150809) \n";
      fileOut << "Green (#74D4A3) \n";
      fileOut << "Orange (#C17E17) \n"; 
      fileOut << "Purple (#7B1879) \n";
      fileOut.close();
      }
   while (basecolor == Blue || basecolor == Yellow || basecolor == Black || basecolor == Green || basecolor == Orange || basecolor == Purple);


  
  return 0;
}
