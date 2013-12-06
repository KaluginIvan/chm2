#include "myvector.h"

myVector::myVector( std::istream & iStream )
{
    int i, size;

    iStream >> size;

    m_Vect.resize( size );

    for( i = 0; i < size; ++i )
        iStream >> m_Vect[ i ];
}

myVector::myVector( int iSize )
{
    m_Vect.resize( iSize );
}

int myVector::getSize()
{
    return m_Vect.size();
}

double myVector::norm()
{
    int i;
    double sum = 0;
    for( i = 0; i < m_Vect.size(); ++i )
        sum += m_Vect[ i ] * m_Vect[ i ];
    sum = sqrt( sum );
    return sum;
}

void myVector::subt( myVector & iVect1, myVector & iVect2 )
{
    int i;
    for( i = 0; i < m_Vect.size(); ++i )
        m_Vect[ i ] = iVect1[ i ] - iVect2[ i ];
}
