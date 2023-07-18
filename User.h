#ifndef LOGISTIC_AND_DELEVERY_SYSTEM_USER_H
#include <string>
#define LOGISTIC_AND_DELEVERY_SYSTEM_USER_H
class User {
private:
    std::string name;
    std::string contactInfo;
public:
    User(const std::string &name, const std::string &contactInfo)
            : name(name), contactInfo(contactInfo) {}

    const std::string &getName() const {
        return name;
    }

    const std::string &getContactInfo() const {
        return contactInfo;
    }
};
#endif //LOGISTIC_AND_DELEVERY_SYSTEM_USER_H
