#include<iostream>
#include"logger.h"
using namespace std;

Logger::Logger()
{
    cntr++;
    cout<<"New instance of logger created "<<cntr<<endl;
}

void Logger::Log(string msg)
{
    cout<<msg<<endl;
}

int Logger::cntr = 0;
Logger* Logger::loggerinstance = nullptr;

Logger* Logger::getLogger()
{
    if(loggerinstance == nullptr){
        loggerinstance = new Logger();
    }
    
    return loggerinstance;
}
