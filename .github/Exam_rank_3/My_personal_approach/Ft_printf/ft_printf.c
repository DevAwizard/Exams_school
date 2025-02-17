#include <unistd.h>
#include <stdarg.h>


// You can use this main to test your printf


int main (void)
{
	// Example with strings
    ft_printf("String: %s\n", "Hello, world!");  // Outputs: String: Hello, world!
    ft_printf("String: %s\n", "42 Network");     // Outputs: String: 42 Network
    ft_printf("Empty string: '%s'\n", "");  // Expected: Empty string: ''
    ft_printf("Spaces: '%s'\n", "   ");     // Expected: Spaces: '   '
	ft_printf("String: %s\n", "");     // Expected nothing
	ft_printf("String: %s\n", NULL);  // Outputs: String: (null) (if the string is NULL)

	// Example using decimal and hexadecimal
    ft_printf("Decimal: %d\n", 255);       // Outputs: Decimal: 255
    ft_printf("Hexadecimal: %x\n", 255);   // Outputs: Hexadecimal: ff
    
    // Another example with a larger number
    ft_printf("Decimal: %d\n", 4096);      // Outputs: Decimal: 4096
    ft_printf("Hexadecimal: %x\n", 4096);  // Outputs: Hexadecimal: 1000
    
    // Example with a small number
    ft_printf("Decimal: %d\n", 16);        // Outputs: Decimal: 16
    ft_printf("Hexadecimal: %x\n", 16);    // Outputs: Hexadecimal: 10

    // Example with zero
    ft_printf("Decimal: %d\n", 0);         // Outputs: Decimal: 0
    ft_printf("Hexadecimal: %x\n", 0);     // Outputs: Hexadecimal: 0

	return (0);
}
---
