#include<string>
using namespace std;

class Logger
{
static int cntr ;
static Logger* loggerinstance;
Logger();

public:
    static Logger* getLogger();
    void Log(string msg);
};
