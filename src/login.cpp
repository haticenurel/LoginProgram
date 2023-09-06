#include "login.h"

Login::Login(const std::string& password) : password_(password) {}

bool Login::checkPassword(const std::string& input) const {
    return input == password_;
}
