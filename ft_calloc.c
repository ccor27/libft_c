#include "libft.h"

/*Function to allocate memory and make it clean (just add zero in each byte)*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total_size;
	size_t			i;
	void			*generic_array;
	unsigned char	*unsigned_array;

	total_size = 0;
    //validate is the num of elements and the size of type are zero
    //if it so, just make total_size of 0, to return a memory that could be free
	if (nmemb == 0 || size == 0)
		total_size = 0;
    //validate to avoid overflow,if it could lead to overflow, return null
	else if (nmemb > SIZE_MAX / size)
		return (NULL);
	else
		total_size = nmemb * size;
    //allocate memory using malloc
	generic_array = (int *)malloc(total_size);
    //validate if the memory couldn't be allocated,if it so, return null
	if (generic_array == 0)
		return (NULL);
    //make a cast to unsigned char in order to modify each byte
	unsigned_array = (unsigned char *)generic_array;
	i = 0;
	while (i < total_size)
	{
        //set zero in each byte
		unsigned_array[i] = 0;
		i++;
	}
	return (generic_array);
}

int main(void)
{
    size_t n = SIZE_MAX/2 +1;

    //either num elements or type's element is 0
    void *zero_size_test_own =ft_calloc(0,2);
    void *zero_size_test_original =calloc(0, 2);
    printf("test_zero_size_custom (zero size): %p\n",zero_size_test_own);
    printf("test_zero_size_original (zero size): %p\n",zero_size_test_original);
    free(zero_size_test_original);
    free(zero_size_test_own);

   //overflow test
    void *zero_overflow_test_own =ft_calloc(n,2);
    void *zero_overflow_test_original =calloc(n, 2);
    printf("test_overflow_custom (overflow): %p\n",zero_overflow_test_own);
    printf("test_overflow_original (overflow): %p\n",zero_overflow_test_original);
    free(zero_overflow_test_original);
    free(zero_overflow_test_own);

   //big size without overflow test
    n = 1000000;
    void *zero_big_size_test_own =ft_calloc(n, sizeof(char));
    void *zero_big_size_test_original =calloc(n, sizeof(char));
    printf("test_big_size_custom (big size): %p\n",zero_big_size_test_own);
    printf("test_big_size_original (big size): %p\n",zero_big_size_test_original);
    free(zero_big_size_test_original);
    free(zero_big_size_test_own);

}
