
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define delimiter "\n---------------------------------------\n"


class Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}

	
	Point(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
		cout << "Constrcutor:\t\t" << this << endl;
	}
	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyConstructor:\t" << this << endl;
	}
	~Point()
	{
		cout << "Destructor:\t\t" << this << endl;
	}

	//				Operators:
	Point& operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyAssignment:\t\t" << this << endl;
		return *this;
	}

	//				Methods:
	double distance(const Point& other)const
	{
		//other.x *= 10;
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
		//sqrt() - Square Root (Квадратный корень)
		//this->x *= 10;
		return distance;
	}
	void print()const
	{
		cout << "X = " << x << "\tY = " << y << endl;
	}
};

double distance(const Point& A, const Point& B)
{
	//A.set_x(A.get_x() * 10);
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
	return distance;
}

//#define STRUCT_POINT
//#define CONSTRUCTORS_CHECK
//#define DISTANCE_CHECK
#define ASSIGNMENT_CHECK

void main()
{
	setlocale(LC_ALL, "");

#if defined STRUCT_POINT
	int a;		
	Point A;	
	
	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;

	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;
#endif // STRUCT_POINT

#ifdef CONSTRUCTORS_CHECK
	Point A;		//Default constructor
	//A.set_x(2);
	//A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;
	A.print();

	Point B = 5;	//Single-Argument Constructor
	B.print();

	Point C(2, 3);
	C.print();

	Point D = C;	//Copy constructor
	D.print();

	Point E;
	E = D;			//Copy assignment
	E.print();

	
#endif // CONSTRUCTORS_CHECK

#ifdef DISTANCE_CHECK
	Point A(2, 3);
	Point B(7, 8);

	A.print();
	B.print();

	cout << delimiter << endl;
	cout << "Расстояние от точки 'A' до точки 'B':" << A.distance(B) << endl;
	cout << delimiter << endl;
	cout << "Расстояние от точки 'B' до точки 'A':" << B.distance(A) << endl;
	cout << delimiter << endl;
	cout << "Расстояние между точками 'A' и 'B':  " << distance(A, B) << endl;
	cout << delimiter << endl;
	cout << "Расстояние между точками 'B' и 'A':  " << distance(B, A) << endl;
	cout << delimiter << endl;
#endif // DISTANCE_CHECK

#ifdef ASSIGNMENT_CHECK
	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;


	Point A, B, C;

	cout << delimiter << endl;
	A = B = C = Point(2, 3);	
	
	cout << delimiter << endl;

	A.print();
	B.print();
	C.print();

	cout << delimiter << endl;
#endif // ASSIGNMENT_CHECK

}

