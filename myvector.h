#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <vector>
#include <iostream>

class myVector
{
private:
    std::vector < double > m_Vect;
public:
    myVector(){}
    myVector( std::istream & iStream );
    myVector( int iSize );
    int getSize();
    double& operator []( int iIndex )
    {
        return m_Vect[ iIndex ];
    }
    myVector& operator =( myVector& iVect )
    {
        m_Vect = iVect.m_Vect;
        return *this;
    }
    void subt( myVector & iVect1, myVector & iVect2 );
    double norm();
};

#endif // MYVECTOR_H
