#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t total_size = 0;
    //validate if either nmemb or size is 0
    if(nmemb == 0 || size==0)
       total_size = 1;
    else if(nmemb > SIZE_MAX/size)//vallidate if the caculated size is valid (nmemb * size)
     return NULL;
    else
     total_size = nmemb * size;
    void *generic_array = (int*) malloc(total_size);
    //validate if there are enough space in memory
    if(generic_array == 0)
      return NULL;
    //transform the array into a unsigned char in order to set all its bytes
    unsigned char *unsigned_array = (unsigned char *) generic_array;
    //if it is able to initialize all spaces
    size_t i = 0;
    while(i < total_size)
    {
        unsigned_array[i] = 0;
        i++;
    }
    return(generic_array);
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
