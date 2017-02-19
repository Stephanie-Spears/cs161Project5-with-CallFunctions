#include <iostream>
#include <string>
#include <sstream>
//#include <istream>

using namespace std;

int main()
{

	int CheckInput(string d, bool con);
	void function2(int width, int height);

	int width;
	int height;
	string d;
	bool con;

	d = "width";
	con = true;
	width = CheckInput(d, con);

	d = "height";
	con = true;
	height = CheckInput(d, con);

	function2(width, height);

	cout << endl;
	system("pause");

}

int CheckInput(string d, bool con)
{
	while (con == true)
	{

		int i = 0;
		int cv;
		int InputLength;
		stringstream ss;
		string Input;
		string CleanInput;
		char c;

		cout << "Enter " + d + " : ";
		getline(cin, Input);
		InputLength = (Input.length());

		if (InputLength > 0)
		{
			while (i < (InputLength))
			{
				c = Input.at(i);

				if (isdigit(c))
				{
					CleanInput = CleanInput + c;
					++i;
				}

				else
				{
					i = 0;
					cout << "Invalid input. Try again." << endl;
					break;
				}
			}

			if (i == InputLength)
			{
				ss << CleanInput;

				ss >> cv;
				if ((cv <= 0) || (cv >= 25))
				{
					cout << "You must enter a " + d + " greater than 0, less than 25." << endl;
				}
				else
				{
					return cv;
					con = false;
					break;
				}


				i = 0;
				cin.clear();
				ss.clear();
				ss.str("");
				Input = "";
				CleanInput = "";
				InputLength = 0;
				cv = 0;

			}
			else
			{
				i = 0;
				cin.clear();
				ss.clear();
				ss.str("");
				Input = "";
				CleanInput = "";
				InputLength = 0;
				cout << "You must enter whole numbers only." << '\n';

			}
		}
	}
}


void function2(int width, int height)
{
	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			cout << "X";
		}
		cout << endl;
	}
}