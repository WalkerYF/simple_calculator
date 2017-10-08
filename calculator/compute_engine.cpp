#include "compute_engine.h"

ComputeEngine * ComputeEngine::instance = nullptr;
ComputeEngine* ComputeEngine::getInstance(){
    if (instance == nullptr){
        instance = new ComputeEngine();
    }
    return instance;
}

ComputeEngine::~ComputeEngine()
{
   delete instance;
}


ComputeEngine::ComputeEngine(){}



std::string ComputeEngine::preSolve(const std::string & need_solved){
    num_t size = need_solved.size();
    std::string result;
    for (int i = 0; i < size; i++){
        if (need_solved[i] != ' ')
            result += std::string(1, need_solved[i]);
    }
    return result;
}

std::string ComputeEngine::readNextItem(const std::string & need_solved ,int & pos){
    if (need_solved.size() == pos){
        return "";
    }

    std::string next_item;
    char cur_char = need_solved[pos];

    if (cur_char == '+' || cur_char == '-' || cur_char == '*'
            || cur_char == '/' || cur_char == '(' || cur_char == ')'){
        next_item += std::string(1, cur_char);
        pos++;
    }else

    if ('0' <= cur_char && cur_char <= '9'){
        for (int i = 0; i <= 100; i++){
            if (need_solved.size() == pos){
                break;
            }
            cur_char = need_solved[pos];
            if ('0' <= cur_char && cur_char <= '9'  ||  cur_char == '.'){
                next_item += std::string(1, cur_char);
                pos++;
            }
            else
                break;
        }
    }
    std::string ans = next_item;
    return ans;
}

ComputeEngine::num_t ComputeEngine::doOperator(num_t lhs, char op, num_t rhs){
    num_t ans = 0;
    switch(op){
        case '+':
            ans = lhs + rhs;
            break;
        case '-':
            ans = lhs - rhs;
            break;
        case '*':
            ans = lhs * rhs;
            break;
        case '/':
            ans = lhs / rhs;
            break;
        default:
            return lhs;
    }
    // TODO:maybe have some exception
    return ans;
}



ComputeEngine::num_t ComputeEngine::getNumber(const std::string & need_solved, int & pos){
    num_t ans = 0;
    std::string next_item = readNextItem(need_solved, pos);
    if (next_item[0] != '(')
        ans = strToDouble(next_item);
    else
        ans = computeMethodOne(need_solved, pos, ')');
    return ans;
}

ComputeEngine::num_t  ComputeEngine::strToDouble(const std::string & item){
    num_t ans = 0;
    num_t item_size = item.size();
    num_t cur_index = 0;
    for (;cur_index < item_size && item[cur_index] != '.'; ++cur_index){
        ans = ans*10 + item[cur_index]-'0';
    }
    if (item[cur_index] == '.') cur_index++;
    num_t exp = 10;
    for (; cur_index < item_size; ++cur_index){
        ans = ans + (item[cur_index]-'0')/exp;
        exp = exp*10;
    }
    return ans;
}

ComputeEngine::num_t ComputeEngine::computeMethodOne(const std::string & need_solved, int & pos, char endFlag){
    num_t result = 0;
    char next_op = 0;
    num_t second_operand = 0;
    while (1){
        std::string next_item = readNextItem(need_solved, pos);
        if (next_item.size() == 0 )
            break;

        char cur_char = next_item[0];

        if (cur_char == endFlag){
            break;
        }

        if ('0' <= cur_char && cur_char <= '9'){

            result += strToDouble(next_item);
        }else

        if (cur_char == '+' ||cur_char == '-'){
            result = doOperator(result, next_op, second_operand);
            next_op = cur_char;
            second_operand = getNumber(need_solved, pos);
        }else

        if (cur_char == '*' || cur_char == '/'){
            if (next_op == 0)
                result = doOperator(result, cur_char, getNumber(need_solved, pos));
            else
                second_operand = doOperator(second_operand, cur_char, getNumber(need_solved, pos));
        }else

        if (cur_char == '(')
            result += computeMethodOne(need_solved, pos, ')');
    }
    return doOperator(result, next_op, second_operand);
}


ComputeEngine::num_t ComputeEngine::computeByString(const std::string & need_solved){
    int pos = 0;
    return computeMethodOne(preSolve(need_solved), pos);
}
