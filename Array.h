# ifndef ARRAY_H
# define ARRAY_H
# include <iostream>
# include <string>
# define MAX_ARRAY 256
#include "demo.h"

using namespace std ;

template < class T >
class Array {
    public :
        Array ();
        ~ Array ();

        Array <T >& operator +=( const T &);
        Array <T >& operator -=( const T &);
        T & operator []( int index );
        const T & operator []( int index ) const ;

        int size () const { return numElements ; }
        bool isFull () const { return numElements >= MAX_ARRAY ;}
    private :
        int numElements ;
        T * elements ;
};
