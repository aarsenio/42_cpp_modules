#include "Fixed.hpp"

Fixed::Fixed(void)
{
	fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int& value)
{
	std::cout << "Int constructor called" << std::endl;
	fixed = value * (1 << bits);
}

Fixed::Fixed(const float& value)
{
	std::cout << "Float constructor called" << std::endl;
	fixed = roundf(value * (1 << bits));
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(copy.getRawBits());
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed);
}

void	Fixed::setRawBits(int const raw)
{
	fixed = raw;
}

int		Fixed::toInt(void) const 
{
	return (fixed / (1 << bits));
}

float	Fixed::toFloat(void) const
{
	return (((float)fixed) / (float)(1 << bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}