//This code was written by Daniel Watson.
//This program computes the amount of paint required for the given dimensions of a room, the floor area and the volume of said room.
#include <iostream>
using namespace std;

//Declare an integer constant which states the number of square metres paint can cover in litres, called SQ_METRE_PER_LITRE.
const int SQ_METRE_PER_LITRE = 10;

//Declare an integer constant which states the number of square metres in an average door, called SQ_METRE_PER_DOOR.
const int SQ_METRE_PER_DOOR = 2;
int main()
{
	//Declare a float for the floor width, called widthFloor, initialise to 0.
	float widthFloor = 0;

	//Declare a float for the floor length, called lengthFloor, initialise to 0.
	float lengthFloor = 0;

	//Declare a float for the width of the wall, called widthWall, initialise to 0.
	float widthWall = 0;

	//Declare a float for the height of the wall, called heightWall, initialise to 0.
	float heightWall = 0;

	//Declare a float for the area of the floor, called Floor_Area, initialise to 0.
	float Floor_Area = 0;

	//Declare a float for the area of the walls, called areaOfWalls, initialise to 0.
	float Walls_Area = 0;

	//Declare a float for the paint calculator, called Paint_Calculator, initialise to 0.
	float Paint_Calculator = 0;

	//Declare a float for the volume of the room, called Room_Volume, initialise to 0.
	float Room_Volume = 0;

	//Declare a float for the height of non-painted obstructions, called heightObstruction, initialise to 0.
	float heightObstruction =  0;

	//Declare a float for the width of non-painted obstructions, called widthObstruction, initialise to 0.
	float widthObstruction = 0;

	//Declare an integer for the number of doors, called doorNumber, initialise to 0.
	int doorNumber = 0;

	//Declare a float for the surface area of the doors in the room, called Door_Area, initialise to 0.
	float Door_Area = 0;

	//Declare a float for the surface area of the paintless obstructions, called Paintless_Obstructions, initialise to 0.
	float Paintless_Obstructions = 0;

	//Declare an integer for the number of coats of paint, called coatPaint, initialise to 0.
	int coatPaint = 0;

	cout << "This program will calculate the volume of a room in cubic metres, the subsequent amount of paint needed to paint the" << endl << "room in litres and the area of the floor in square metres." << endl;
	cout << "What are the wall dimensions?" << endl;

	//Output to inform the user to input the total height of all the walls in metres.
	cout << "Please input the sum of the heights for all four walls in the room (m)" << endl;

	//Input for the user to declare their total walls heights, called heightWall.
	cin >> heightWall;

	//While loop to ensure that the user only enters positive numbers.
	while (heightWall < 0)
		{
			cout << "Error! this must be a positive number." << endl << "Please input the sum of the heights for all four walls in the room (m)" << endl;
			cin >> heightWall;
		}

	//Output to inform the user to input the total width of all the walls in metres.
	cout << "Please input sum of the widths for all four walls in the room (m)" << endl;

	//Input for the user to declare their total walls widths, called widthWall.
	cin >> widthWall;

	//While loop to ensure that the user only enters positive numbers.
	while (widthWall < 0)
		{
			cout << "Error! this must be a positive number." << endl << "Please input sum of the widths for all four walls in the room (m)" << endl;
			cin >> widthWall;
		}

		Walls_Area =
		(heightWall * widthWall);

	cout << "What are the dimensions of the windows/areas that you don't want to cover with paint in metres?" << endl;

	//Ouput to inform the user to input the total height of all obstructions in the room in metres, be they radiators, windows, fireplaces etc.
	cout << "Please input the sum of the heights of the obstructions (m)" << endl;

	//Input for the user to declare their total obstructions heights, called heightObstruction.
	cin >> heightObstruction;

	//While loop to ensure that the user only enters positive numbers.
	while (heightObstruction < 0)
		{
			cout << "Error! this must be a positive number." << endl << "Please input the sum of the heights of the obstructions (m)" << endl;
			cin >> heightObstruction;
		}

	//Ouput to inform the user to input the total widths of all obstructions in the room in metres, be they radiators, windows, fireplaces etc.
	cout << "Please input the sum of the widths of the obstructions (m)" << endl;

	//Input for the user to declare their total obstructions widths, called widthObstruction.
	cin >> widthObstruction;

	//While loop to ensure that the user only enters positive numbers.
	while (widthObstruction < 0)
		{
			cout << "Error! this must be a positive number." << endl << "Please input the sum of the widths of the obstructions (m)" << endl;
			cin >> widthObstruction;
		}

		Paintless_Obstructions =
			(heightObstruction * widthObstruction);

	//Ouput to inform the user to input the total number of doors in the room.
	cout << "How many doors are in the room? (Double doors count as 2)" << endl;

	//Input for the user to declare their total number of doors, called doorNumber.
	cin >> doorNumber;

	//While loop to ensure that the user only enters positive numbers.
	while (doorNumber < 0)
		{
			cout << "Error! this must be a positive integer." << endl << "How many doors are in the room? (Double doors count as 2)" << endl;
			cin >> doorNumber;
		}

		Door_Area =
		(SQ_METRE_PER_DOOR * doorNumber);

	cout << "What is the area of your floor?" << endl;

	//Output to inform the user to input the width of their floor in metres.
	cout << "Please input the width of your floor (m)" << endl;

	//Input for the user to declare the width of their floor, called widthFloor.
	cin >> widthFloor;

	//While loop to ensure that the user only enters positive numbers.
	while (widthFloor < 0)
		{
			cout << "Error! this must be a positive number." << endl << "Please input the width of your floor (m)" << endl;
			cin >> widthFloor;
		}

	//Output to inform the user to input the length of their floor in metres.
	cout << "Please input the length of your floor (m)" << endl;

	//Input for the user to declare the length of their floor, called lengthFloor.
	cin >> lengthFloor;

	//While loop to ensure that the user only enters positive numbers.
	while (lengthFloor < 0)
		{
			cout << "Error! this must be a positive number." << endl << "Please input the length of your floor (m)" << endl;
			cin >> lengthFloor;
		}

	//Output to inform the user to input the number of coats of paint they want.
	cout << "How many coats of paint do you want for your walls?" << endl;

	//Input for the user to declare the amount of coats of paint they want, called coatPaint.
	cin >> coatPaint;

	//While loop to ensure that the user only enters positive numbers.
	while (coatPaint < 0)
		{
			cout << "Error! this must be a positive integer." << endl << "How many coats of paint do you want for your walls?" << endl;
			cin >> coatPaint;
		}

		//Equation to work out the area of the floor from the users inputs (floor width x floor length).
		Floor_Area =
			(widthFloor * lengthFloor);

		//Equation to work out the room volume from the users inputs (room height x room length x room width)
		Room_Volume =
			(heightWall * widthFloor * lengthFloor);

		//Equation to work out the amount of paint needed to paint the walls (((Total area of the walls - (Non-paintable obstructions + doors) / amount of square metres able to be covered by a litre of paint)) * coats of paint)
		Paint_Calculator =
			(((Walls_Area - (Paintless_Obstructions + Door_Area) / SQ_METRE_PER_LITRE)) * coatPaint);

	//Outputs to give the answers to the declaration of what the program does in the very first output. Working out room volume, floor area and how much paint is needed to paint the walls.
	cout << "The volume of the room is " << Room_Volume << " cubic metres." << endl;
	cout << "The area of the floor is " << Floor_Area << " square metres." << endl;
	cout << "The amount of paint in gallons needed to paint the room is " << Paint_Calculator << " litres." << endl;

	system("PAUSE");

	return 0;
}
