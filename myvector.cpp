#include "myvector.h"

myVector::myVector( std::istream & iStream )
{
    int i, size;

    iStream >> size;

    m_Vect.resize( size );

    for( i = 0; i < size; ++i )
        iStream >> m_Vect[ i ];
}
