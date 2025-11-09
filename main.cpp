#include<iostream>
#include"logger.h"


using namespace std;

int main()
{
    Logger* logger1 = Logger::getLogger();
    Logger* logger2 = Logger::getLogger();
    
    logger1->Log("this msg is from user 1");
    logger2->Log("this msg is from user 2");
    return 0;
}
