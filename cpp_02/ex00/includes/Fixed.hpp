#ifndef Fixed_HPP
# define Fixed_HPP

# include <iostream>
# include <string>
# include <exception>

class Fixed
{
	private:
		int					_num_value;
		static const int	_fract_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
