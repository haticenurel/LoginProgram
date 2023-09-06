#ifndef LOGIN_H
#define LOGIN_H

#include <string>

class Login {
public:
    explicit Login(const std::string& password); // Constructor

    bool checkPassword(const std::string& input) const;

private:
    std::string password_;
};

#endif // LOGIN_H
