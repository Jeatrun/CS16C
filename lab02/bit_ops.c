#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,unsigned n) {
    // YOUR CODE HERE

    //100'1'000->100'1'
    //100'1'&000001=>'1'

    // Returning -1 is a placeholder (it makes
    // no sense, because get_bit only returns 
    // 0 or 1)
    return (x>>n)&1u;
}


// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,unsigned n,unsigned v) {
    // YOUR CODE HERE
    //1.clear the nth bit first
    //1111 '1'111-> 1111 '0'111 
    //1111 '0'111-> 1111 '0'111
    //2. change the nth bit to v using '|'
    //1111 '0'111 | 0000 '1'000 =>1111 '1'111
    //1111 '0'111 | 0000 '0'000 =>1111 '0'111
    
    *x=(*x&~(1u<<n))|(v<<n);

    
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,unsigned n) {
    // YOUR CODE HERE
    *x=*x^(1u<<n);
}

