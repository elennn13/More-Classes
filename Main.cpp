#include <iostream>
#include "Number.hpp"


class Point {
public:
	double x;// по умолчанию 0.0 публичные поля x y
	double y;// по умолчанию 0.0
	Point(double oX, double oY) : x(oX), y(oY) { //делигирование //point - конструктор
	    std::cout << "!\n";
	}
	Point(double oC) : Point(oC, oC) {
		std::cout << ".\n";
	}
	Point(): Point(0., 0.) {} //конструктор по умолчанию
	Point(const Point& other) { // констуктор копирования &-ссылка
		std::cout << "COPY\n";
		this->x = other.x;// this-> (или _x ) -указатель на сам объект
		this->y = other.y;
	}
	void print() { //метод вывода
		std::cout << '(' << x << "; " << y << ")\n";
	}
	double distenceTo(const Point& other) { // метод который вычислят расстояние от точки до точки
		return sqrt(
		pow(other.x - x, 2) +
			pow(other.y - y, 2)
		);
	}

	void printMemory() { // метод вывода
		std::cout << this << std::endl;
	}

	void setPos(double x, double y) {
		this->x = x;
		this->y = y;

	}
};



int main() {
	setlocale(LC_ALL, "ru");
	int n;
	
// Класс Point
	/*
	Point p1(5.5, 7.7);
	Point p2(10.0);
	Point p3;

	p1.print();
	p2.print();
	p3.print();

	Point p4 = p2;
	p4.print();

	std::cout << p1.distenceTo(p4) << std::endl;

	std::cout << "-------------------------------------------------\n";

	std::cout << &p1 << std::endl;
	p1.printMemory();

	p4.setPos(7., 15.);
	p4.print();
	*/

	// Задание 
	Number n1(7), n2(15), n3(3), n4(33);;
	Number n5 = n1.sum(n2);
	std::cout << n5.getValue() << std::endl;

	std::cout << n1.sum(n2).mult(n3).div(n4).diff(Number(5)).getValue() << std::endl;

	return 0;
}