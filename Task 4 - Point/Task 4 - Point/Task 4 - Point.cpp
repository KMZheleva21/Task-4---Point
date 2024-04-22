#include <iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
	int z;
public:
	Point(int a = 0, int b = 0, int c = 0) {
		x = a;
		y = b;
		z = c;
	}
	void setPointX(int newX) {
		x = newX;
	}
	void setPointY(int newY) {
		y = newY;
	}
	void setPointZ(int newZ) {
		z = newZ;
	}
	int getPointX() {
		return x;
	}
	int getPointY() {
		return y;
	}
	int getPointZ() {
		return z;
	}
};
int main()
{
	Point pointThree;
	int num1, num2, num3;
	cout << "Enter coordinates of point 1: ";
	cin >> num1 >> num2 >> num3;
	Point pointOne;
	pointOne.setPointX(num1);
	pointOne.setPointY(num2);
	pointOne.setPointZ(num3);
	cout << "First point: ";
	cout << pointOne.getPointX() << " " << pointOne.getPointY() << " " << pointOne.getPointZ() << " ";
	cout << endl;

	cout << "Default point: ";
	cout << pointThree.getPointX() << " " << pointThree.getPointY() << " " << pointThree.getPointZ() << " ";
	cout << endl;

	Point pointTwo;
	pointTwo.setPointX(pointThree.getPointX() + 1);
	pointTwo.setPointY(pointThree.getPointY() + 2);
	pointTwo.setPointZ(pointThree.getPointZ() + 3);
	cout << "Modified point: ";
	cout << pointTwo.getPointX() << " " << pointTwo.getPointY() << " " << pointTwo.getPointZ() << " ";
}