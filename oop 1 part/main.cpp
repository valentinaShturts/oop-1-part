#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	void Input()
	{
		cin >> x >> y;
	}
	void Show()
	{
		cout << x << endl << y << endl;
	}
	int GetX()
	{
		return x;
	}
	void SetX(int _x)
	{
		if(_x >= 0) x = _x;
	}
	Point Add(Point b)
	{
		Point rez;
		rez.x = x + b.x;
		rez.y = y + b.y;
		return rez;
	}
	void Init(int _x, int _y)
	{
		x = _x;
		y = _y;
	}
};

int main()
{
	Point a;
	a.Input();
	/*a.Show();
	a.SetX(4);
	cout << "X = " << a.GetX() << endl;*/
	Point b;
	b.Input();
	Point c = a.Add(b);
	c.Show();
	Point e;
	e.Init(-7, 10);
	e.Show();
}