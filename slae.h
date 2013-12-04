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
    void iteration();
public:
    slae( diagMatr & iA, myVector & iAprX, myVector & iRez );
    void gaussSeidel( myVector & oX, int iMaxIter, int oIterCount );
};

#endif // SLAE_H
