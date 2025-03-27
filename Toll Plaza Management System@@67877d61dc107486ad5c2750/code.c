#include <stdio.h>
#include <string.h>
struct Vehicle {
 char number[20];
 char type[10];
 float toll;
};
int main() {
 int n;
 scanf("%d", &n);
 struct Vehicle vehicles[n];
 float carTotal = 0, truckTotal = 0, bikeTotal = 0;
 for (int i = 0; i < n; i++) {
 scanf("%s %s %f", vehicles[i].number, vehicles[i].type, &vehicles[i].toll);
 if (strcmp(vehicles[i].type, "Car") == 0) {
 carTotal += vehicles[i].toll;
 } else if (strcmp(vehicles[i].type, "Truck") == 0) {
 truckTotal += vehicles[i].toll;
 } else if (strcmp(vehicles[i].type, "Bike") == 0) {
 bikeTotal += vehicles[i].toll;
 }
 }
 printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n", carTotal, truckTotal, bikeTotal);
 return 0;
}