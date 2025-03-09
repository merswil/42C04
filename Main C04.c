
#include<stdio.h>

int main(void)
{
	char A[] = "Hello";
	char B[] = "Bye";
	char C[] = "Welcome";
	char D[] = "Have a good day";
	printf("%d\n", ft_strlen(A));
	printf("%d\n", ft_strlen(B));
	printf("%d\n", ft_strlen(C));
	printf("%d\n", ft_strlen(D));
	
	return(0);
}






#include<stdio.h>
#include<unistd.h>

int main(void)
{
	char A[] = "Hello";
	char B[] = "Bye";
	char C[] = "Welcome";
	char D[] = "Have a good day";
	printf("%d\n", ft_strlen(A));
	printf("%d\n", ft_strlen(B));
	printf("%d\n", ft_strlen(C));
	printf("%d\n", ft_strlen(D));
	
	return(0);
}








#include<stdio.h>
#include<unistd.h>

int char_to_num_and_sum(char *dest)
{
	int i;
	int A;
	
int main(void)
{
    printf("Test 1: \"%s\" -> %d\n", "42", ft_atoi("42"));           // Expected: 42
    printf("Test 2: \"%s\" -> %d\n", "   -1234", ft_atoi( " ---+--+1234ab567")); // Expected: -1234
    printf("Test 3: \"%s\" -> %d\n", "   +56", ft_atoi("   +56"));   // Expected: 56
    printf("Test 4: \"%s\" -> %d\n", "00089", ft_atoi("00089"));     // Expected: 89
    printf("Test 5: \"%s\" -> %d\n", "abc123", ft_atoi("abc123"));   // Expected: 0 (invalid start)
    
    return 0;
}
