#include<string>
#include<mutex>
using namespace std;

class Logger
{
static int cntr ;
static Logger* loggerinstance;
static mutex mtx;

Logger();

public:
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;
    static Logger* getLogger();
    void Log(string msg);
};
