#include <cstdlib>
#include <ctime>
#include <iostream>

void print_array( const long int array[], long int size ) ;
void sort_array(long int array[], long int size ) ;

int main()
{
    const long int size = 1000 ; // size is known at compile time
    const long int max_v = 2000000 ;

    long int array[size] {} ; // initialised to all zeroes (no need for dynamic allocation)
    std::srand( std::time(nullptr) );
    for( long int& v : array ) v = std::rand() % max_v + 1 ;

    std::cout << "unsorted array:\n\t" ;
    print_array( array, size ) ;

    sort_array( array, size ) ;
    std::cout << "sorted array:\n\t" ;
    print_array( array, size ) ;
}

void print_array( const long int array[], long int size )
{
    if( array == nullptr ) return ;

    for( long int i = 0 ; i < size ; ++i ) std::cout << array[i] << ' ' ;
    std::cout << '\n' ;
}

void swap_items(long int array[], long int a, long int b ) // invariant: valid array, positions a, b
{
    const auto temp = array[a] ;
    array[a] = array[b] ;
    array[b] = temp ;
}

// return true if there was a swap
bool bubble_up( long int array[], long int size ) // invariant: valid array, size > 1
{
    bool swapped = false ;

    for( long int i = 0; i < (size-1); ++i )
    {
        if( array[i] > array[i+1] )
        {
            swap_items( array, i, i+1 ) ;
            swapped = true ;
        }
    }
    return swapped ;
}

void sort_array( long int array[], long int size )
{

    if( array == nullptr || size < 2 ) return ;

    // keep bubbling up till there are no more swaps
    while( bubble_up( array, size ) ) ;

}
