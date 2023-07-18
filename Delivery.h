#ifndef LOGISTIC_AND_DELEVERY_SYSTEM_DELIVERY_H
#define LOGISTIC_AND_DELEVERY_SYSTEM_DELIVERY_H
#include <string>

class Delivery {
private:
    std::string item;
    std::string origin;
    std::string destination;
    std::string estimatedTime;
    std::string status;
public:
    Delivery(const std::string &item, const std::string &origin, const std::string &destination,
             const std::string &estimatedTime)
            : item(item), origin(origin), destination(destination), estimatedTime(estimatedTime), status("Pending") {}

    const std::string &getItem() const {
        return item;
    }

    const std::string &getOrigin() const {
        return origin;
    }

    const std::string &getDestination() const {
        return destination;
    }

    const std::string &getEstimatedTime() const {
        return estimatedTime;
    }

    const std::string &getStatus() const {
        return status;
    }

    void setStatus(const std::string &newStatus) {
        status = newStatus;
    }
};
#endif //LOGISTIC_AND_DELEVERY_SYSTEM_DELIVERY_H
