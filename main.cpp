#include <iostream>
#include <vector>
#include <fstream>
#include "Delivery.h"
#include "User.h"





void registerDelivery(std::vector<Delivery> &deliveries, const std::string &item, const std::string &origin,
                      const std::string &destination, const std::string &estimatedTime) {
    Delivery newDelivery(item, origin, destination, estimatedTime);
    deliveries.push_back(newDelivery);
    std::cout << "Delivery registered successfully.\n";
}

void registerUser(std::vector<User> &users, const std::string &name, const std::string &contactInfo) {
    User newUser(name, contactInfo);
    users.push_back(newUser);
    std::cout << "User registered successfully.\n";
}

void trackDelivery(const std::vector<Delivery> &deliveries, const std::string &itemName) {
    for (const Delivery &delivery: deliveries) {
        if (delivery.getItem() == itemName) {
            std::cout << "Delivery Details:\n";
            std::cout << "Item: " << delivery.getItem() << std::endl;
            std::cout << "Origin: " << delivery.getOrigin() << std::endl;
            std::cout << "Destination: " << delivery.getDestination() << std::endl;
            std::cout << "Estimated Time: " << delivery.getEstimatedTime() << std::endl;
            std::cout << "Status: " << delivery.getStatus() << std::endl;
            return;
        }
    }
    std::cout << "Delivery with item \"" << itemName << "\" not found.\n";
}

void generateReceipt(const Delivery &delivery) {
    std::cout << "Receipt\n";
    std::cout << "Item: " << delivery.getItem() << std::endl;
    std::cout << "Origin: " << delivery.getOrigin() << std::endl;
    std::cout << "Destination: " << delivery.getDestination() << std::endl;
    std::cout << "Estimated Time: " << delivery.getEstimatedTime() << std::endl;
    std::cout << "Status: " << delivery.getStatus() << std::endl;
    std::cout << "-------------------------\n";
}

void generateDeliverySchedule(const std::vector<Delivery> &deliveries) {
    std::cout << "Delivery Schedule\n";
    for (const Delivery &delivery: deliveries) {
        std::cout << "Item: " << delivery.getItem() << std::endl;
        std::cout << "Origin: " << delivery.getOrigin() << std::endl;
        std::cout << "Destination: " << delivery.getDestination() << std::endl;
        std::cout << "Estimated Time: " << delivery.getEstimatedTime() << std::endl;
        std::cout << "Status: " << delivery.getStatus() << std::endl;
        std::cout << "-----------------------------------\n";
    }
}

int main() {
    std::vector<Delivery> deliveries;
    std::vector<User> users;
    registerUser(users, "Arman", "arman@gmail.com");
    registerUser(users, "Gago", "gago@gmail.com");
    registerDelivery(deliveries, "Laptop", "New York", "Los Angeles", "2023-07-15 10:00");
    registerDelivery(deliveries, "Phone", "San Francisco", "Seattle", "2023-07-16 14:30");
    trackDelivery(deliveries, "Laptop");
    trackDelivery(deliveries, "Tablet");
    for (Delivery &delivery: deliveries) {
        delivery.setStatus("In Transit");
    }
    generateDeliverySchedule(deliveries);
    generateReceipt(deliveries[0]);
    return 0;
}