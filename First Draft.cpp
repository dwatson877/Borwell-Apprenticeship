//This code was written by Daniel Watson.

//This program computes the amount of paint required for the given dimensions of a room, the floor area and the volume of said room.
#include <iostream>
using namespace std;

//Declare an integer constant which states the number of gallons per square feet, called SQ_FEET_PER_GALLON.
const int SQ_FEET_PER_GALLON = 400;

int main()
{
	//Declare a float for the floor width, called widthFloor, initialise to 0.
	float widthFloor = 0;

	//Declare a float for the floor length, called lengthFloor, initialise to 0.
	float lengthFloor = 0;

	//Declare a float for the width of the first wall, called widthWallOne, initialise to 0.
	float widthWallOne = 0;

	//Declare a float for the length of the first wall, called lengthWallOne, initialise to 0.
	float lengthWallOne = 0;

	//Declare a float for the width of the second wall, called widthWallTwo, initialise to 0.
	float widthWallTwo = 0;

	//Declare a float for the length of the second wall, called lengthWallTwo, initialise to 0.
	float lengthWallTwo = 0;

	//Declare a float for the door width, called widthDoor, initialise to 0.
	float widthDoor = 0;

	//Declare a float for the door length, called lengthDoor, initialise to 0.
	float lengthDoor = 0;

	//Declare a float for the window length, called lengthWindow, initialise to 0.
	float lengthWindow = 0;

	//Declare a float for the window width, called widthWindow, initialise to 0.
	float widthWindow = 0;

	//Declare a float for the area of the doors, called areaOfDoor, initialise to 0.
	float areaOfDoor = 0;

	//Declare a float for the area of the windows, called areaOfWindow, initialise to 0.
	float areaOfWindow = 0;

	//Declare a float for the area of the floor, called Floor_Area, initialise to 0.
	float Floor_Area = 0;

	//Declare a float for the area of the walls, called areaOfWalls, initialise to 0.
	float areaOfWalls = 0;

	//Declare a float for the paint calculator, called Paint_Calculator, initialise to 0.
	float Paint_Calculator = 0;

	//Declare a float for the volume of the room, called Room_Volume, initialise to 0.
	float Room_Volume = 0;

	//Output to inform the user of the intentions of the program
	cout << "This program will calculate the volume of a room, the subsequent amount of paint needed to paint the room in gallons" << endl << "and the area of the floor." << endl;
	cout << "To utilise the program you will need to know the measurements of the room (in feet) and then input those numbers" << endl << "appropriately." << endl;

	//Output to instruct the user to input the total length followed by the total length and width of doors present in the room. Assumption that the door is a rectangle.
	cout << "To begin, input the total length followed by the total width of all doors present in the room." << endl;
	cout << "This will need to be entered (in feet), each measurement followed by the enter key and with the exclusion of" << endl << "units of measurement." << endl;

	//Input the user must enter to define the area of the doors.
	cin >> lengthDoor;
	cin >> widthDoor;

	//Equation the program needs to work out the area of the doors.
		areaOfDoor =
			(lengthDoor * widthDoor);

	//Output to instrut the user to input the width and length of the total length and width of doors present in the room. Assumption that the windows are rectangles.
	cout << "Now input the total length followed by the total width of the windows present in the room." << endl;
	cout << "This will need to be entered (in feet), each measurement followed by the enter key and with the exclusion of" <<endl << "units of measurement." << endl;

	//Input the user must enter to define the area of the windows.
	cin >> lengthWindow;
	cin >> widthWindow;

	//Equation the program needs to work out the area of the windows.
		areaOfWindow =
			(lengthWindow * widthWindow);

	//Output to instruct the user to input the width and length of the floor in feet. Informing them to press the enter key when necessary and without units of measurement.
	cout << "To progress now input the length followed by the width of the floor present in the room." << endl;
	cout << "This will need to be entered (in feet), each measurement followed by the enter key and with the exclusion of" << endl << "units of measurement." << endl;

	//Input the user must enter to define the area of the floor.
	cin >> lengthFloor;
	cin >> widthFloor;

	//Equation the program needs to work out the area of the floor.
		Floor_Area =
			(lengthFloor * widthFloor);

	//Output to instruct the user to input the width and length of one of walls in feet. Informing them to press the enter key when necessary and without units of measurement.
	cout << "Please continue by entering the length and width of one of the equally sized opposing walls." << endl;
	cout << "This will need to be entered (in feet), each measurement followed by the enter key and with the exclusion of" << endl << "units of measurement." << endl;

	//Input the user must enter to define the area of the first pair of opposing walls
	cin >> lengthWallOne;
	cin >> widthWallOne;

	//Output to instruct the user to input the width and length of the other opposing walls in feet. Informing them to press the enter key when necessary and without units of measurement.
	cout << "Lastly, enter the length and width of the different pair of equally sized opposing walls," << endl;
	cout << "This will need to be entered (in feet), each measurement followed by the enter key and with the exclusion of" << endl << "units of measurement." << endl;
	cout << "The program will then calculate the amount of paint needed (in gallons) to paint your room, the area of the floor and" << endl << "the volume of the room." << endl;

	//Input the user must enter to define the area of the seperate pair of opposing walls.
	cin >> lengthWallTwo;
	cin >> widthWallTwo;

			//Equation for the area of the walls. (length of one pair of opposing walls * width of one pair of opposing walls * 2) + (width of the seperate pair of opposing walls * length of the seperate pair of opposing walls * 2)
			areaOfWalls =
				((lengthWallOne * widthWallOne * 2) + (widthWallTwo * lengthWallTwo * 2));

			//Equation for the paint calculator. (area of the walls - (area of the door + area of the windows) / the amount of square metres a gallon of paint would cover)
			Paint_Calculator =
				((areaOfWalls - (areaOfDoor + areaOfWindow)) / SQ_FEET_PER_GALLON);
			Room_Volume =
				(lengthWallOne * widthFloor * lengthFloor);

    //Outputs to inform the user of their room volume in cubic feet, floor area in square feet and amount of paint necessary for the walls in gallons.
	cout << "The volume of the room is " << Room_Volume << " cubic feet." << endl;
	cout << "The area of the floor is " << Floor_Area << " square feet." << endl;
	cout << "The amount of paint in gallons needed to paint the room is " << Paint_Calculator << " gallons." << endl;

	system("PAUSE");

	return 0;
}
