#ifndef DIAGMATR_H
#define DIAGMATR_H

#include <vector>
#include <iostream>

class diagMatr
{
public:
    typedef std::vector< std::vector< double > > matrix;
private:
    matrix m_Matr;
    int m_Size;
    int m_M;
    int m_K;
    std::vector< int > m_Index;
public:
    diagMatr(){}
    diagMatr( std::istream & iStream );
    int getIndex( int iNum );
    int getSize();
    std::vector< double >& operator[] ( int iIndex )
    {
        return m_Matr[ iIndex ];
    }
};

#endif // DIAGMATR_H
