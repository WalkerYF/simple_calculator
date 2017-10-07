#ifndef COMPUTE_ENGINE_H
#define COMPUTE_ENGINE_H

#include <string>
#include <stack>

class ComputeEngine
{
public:
    static ComputeEngine* getInstance();
    string getPolishExpression(string);
    string getInversePolishExpression(string);
    string computeByString(string);
private:
    ComputeEngine();
};

#endif // COMPUTE_ENGINE_H
