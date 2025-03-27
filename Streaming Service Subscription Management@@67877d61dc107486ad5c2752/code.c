#include <stdio.h>
#include <string.h>
struct Subscription {
 char userName[50];
 char subscriptionType[20];
 float cost;
};
int main() {
 int n;
 scanf("%d", &n);
 struct Subscription subs[n];
 int basicCount = 0, standardCount = 0, premiumCount = 0;
 float basicRevenue = 0, standardRevenue = 0, premiumRevenue = 0;
 for (int i = 0; i < n; i++) {
 scanf("%s %s %f", subs[i].userName, subs[i].subscriptionType, &subs[i].cost);
 if (strcmp(subs[i].subscriptionType, "Basic") == 0) {
 basicCount++;
 basicRevenue += subs[i].cost;
 } else if (strcmp(subs[i].subscriptionType, "Standard") == 0) {
 standardCount++;
 standardRevenue += subs[i].cost;
 } else if (strcmp(subs[i].subscriptionType, "Premium") == 0) {
 premiumCount++;
 premiumRevenue += subs[i].cost;
 }
 }t
 printf("Basic: %d Users, Revenue: %.2f; ", basicCount, basicRevenue);
 printf("Standard: %d Users, Revenue: %.2f; ", standardCount, standardRevenue);
 printf("Premium: %d Users, Revenue: %.2f\n", premiumCount, premiumRevenue);
 return 0;
}