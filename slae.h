#ifndef SLAE_H
#define SLAE_H

#include "diagMatr.h"
#include "myvector.h"

class slae
{
private:
    diagMatr & m_A;
    myVector & m_AprX;
    myVector & m_Rez;
    inline void iteration();
    inline double residual();
public:
    slae( diagMatr & iA, myVector & iAprX, myVector & iRez );
    void gaussSeidel( myVector & oX, int iMaxIter, int & oIterCount, double iEps );
    void jacobi( myVector & oX, int iMaxIter, int & oIterCount, double iEps );
};

#endif // SLAE_H
