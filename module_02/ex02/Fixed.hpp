#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed{
	private:
		int					fixed;
		static const int	bits = 8 ;
	public:
		Fixed(void);
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& copy);
		~Fixed(void);

		Fixed(const int& value);
		Fixed(const float& value);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const; 
		int		toInt (void) const; 

		Fixed operator+(const Fixed& copy);
		Fixed operator-(const Fixed& copy);
		Fixed operator*(const Fixed& copy);
		Fixed operator/(const Fixed& copy);
		Fixed operator++();
		Fixed operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		bool operator>(const Fixed& copy);
		bool operator<(const Fixed& copy);
		bool operator>=(const Fixed& copy);
		bool operator<=(const Fixed& copy);
		bool operator==(const Fixed& copy);
		bool operator!=(const Fixed& copy);

		static Fixed& min(Fixed& lhs, Fixed& rhs);
		static Fixed& max (Fixed& lhs, Fixed& rhs);
		static const Fixed& min (const Fixed &lhs, const Fixed &rhs);
		static const Fixed& max (const Fixed &lhs, const Fixed &rhs);
};

std::ostream& operator<<(std::ostream& os, const Fixed& copy);

#endif