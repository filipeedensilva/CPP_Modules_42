#ifndef Fixed_HPP
# define Fixed_HPP

# include <iostream>
# include <string>
# include <exception>
# include <cmath>

class Fixed {
	private:
		int					_fixed_value;
		static const int	_num_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int fixed_point);
		Fixed(const float float_point);
		~Fixed();

		Fixed &operator=(const Fixed &copy);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& tmp);

#endif
