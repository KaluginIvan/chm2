#include "diagMatr.h"

diagMatr::diagMatr( std::istream & iStream )
{
    int i, j;

    iStream >> m_Size >> m_M >> m_K;

    m_Matr.resize( m_Size );
    m_Index.resize( 7 );

    for( i = 0; i < m_Size; ++i ) {
        m_Matr[ i ].resize( 7 );
        for( j = 0; j < 7; ++j )
            iStream >> m_Matr[ i ][ j ];
    }

    m_Index[ 0 ] = -3 - m_M - m_K;
    m_Index[ 1 ] = -2 - m_M;
    m_Index[ 2 ] = -1;
    m_Index[ 3 ] = 0;
    m_Index[ 4 ] = 1;
    m_Index[ 5 ] = 2 + m_M;
    m_Index[ 6 ] = 3 + m_M + m_K;

}

int diagMatr::getIndex( int iNum )
{
    return m_Index[ iNum ];
}

int diagMatr::getSize()
{
    return m_Size;
}
