#ifndef COMPUTE_ENGINE_H
#define COMPUTE_ENGINE_H

#include <string>
#include <stack>

class ComputeEngine
{
public:
    typedef double num_t;
    static ComputeEngine* getInstance();
    static std::string preSolve(const std::string &);
    static std::string readNextItem(const std::string &, int & pos);
    static num_t doOperator(num_t, char, num_t);
    static num_t getNumber(const std::string & need_solved, int & pos);
    static num_t strToDouble(const std::string & item);
    static num_t computeMethodOne(const std::string & need_solved, int & pos, char endFlag = '@');
    static num_t computeByString(const std::string &);
    ~ComputeEngine();
private:
    ComputeEngine();
    static ComputeEngine * instance;
};
#endif // COMPUTE_ENGINE_H
