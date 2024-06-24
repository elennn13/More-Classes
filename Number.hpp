#ifndef _NUMBER_HPP_
#define _NUMBER_HPP_


class Number {
private:
	int value;
public:
	Number(); //по умолчанию
	Number(int value); //параметрический
	Number(const Number& other); //копировать
	
	int getValue();
	void setValue(int value);

	Number sum(const Number other);
	Number diff(const Number other);
	Number mult(const Number other);
	Number div(const Number other);
};




#endif // _NUMBER_HPP_