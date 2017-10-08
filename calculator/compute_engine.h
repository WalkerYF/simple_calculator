#ifndef COMPUTE_ENGINE_H
#define COMPUTE_ENGINE_H

#include <string>
#include <stack>

// 表达式分析引擎
// 暂时是使用double ,可以方便的替换
// 可以接入高精度计算库
class ComputeEngine
{
public:
    typedef double num_t;
    static ComputeEngine* getInstance();
    static std::string preSolve(const std::string &); // 对字符串进行预处理，去除多余空格
    static std::string readNextItem(const std::string &, int & pos); // 读取下一项
    static num_t doOperator(num_t, char, num_t);
    static num_t getNumber(const std::string & need_solved, int & pos);
    static num_t strToDouble(const std::string & item);
    static num_t computeMethodOne(const std::string & need_solved, int & pos, char endFlag = '@');
    static num_t computeByString(const std::string &); // 主函数
    ~ComputeEngine();
private:
    ComputeEngine(); // 将构造函数放在private块，以防被调用生成多个表达式分析引擎实例
    static ComputeEngine * instance; //指向引擎实例的指针
};
#endif // COMPUTE_ENGINE_H
