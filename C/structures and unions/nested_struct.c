#include <stdio.h>

struct Address {
    char city[50];
    int pin;
};

struct Employee {
    int id;
    char name[50];
    struct Address addr;
};

int main() {
    struct Employee e = {101, "Priya", {"Hyderabad", 500001}};
    printf("ID: %d\nName: %s\nCity: %s\nPIN: %d\n", e.id, e.name, e.addr.city, e.addr.pin);
    return 0;
}

