#include <QCoreApplication>
#include "diagMatr.h"
#include "myvector.h"
#include "SLAE.h"
#include <fstream>
#include <iostream>
#include <iomanip>

int main ( int argc, char *argv[] )
{
    QCoreApplication a( argc, argv );

    std::fstream ifs;
    std::ofstream ofs;
    int maxIter, iterCount;

    ifs.open( "data.txt" );

    diagMatr testA( ifs );
    myVector testAprX( ifs );
    myVector testRez( ifs );
    myVector testOX( ifs );
    ifs >> maxIter;

    ifs.close();

    slae testSLAE( testA, testAprX, testRez );

    testSLAE.gaussSeidel( testOX, maxIter, iterCount );

    ofs.open( "out.txt" );

    for( int i = 0; i < 14; ++i )
        ofs << std::fixed << std::setw(13) << std::setprecision( 13 ) << testOX[ i ] << std::endl;
    ofs.close();

    return a.exec();
}
