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
    double& operator []( int iIndex )
    {
        return m_Vect[ iIndex ];
    }
    myVector& operator =(const myVector& iVect )
    {
        m_Vect = iVect.m_Vect;
        return *this;
    }
};

#endif // MYVECTOR_H
