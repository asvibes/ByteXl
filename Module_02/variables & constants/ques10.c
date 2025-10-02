#include <stdio.h>

int globalCounter = 0; 
void demonstrateCounters(int callNumber) {
    static int staticCounter = 0; 
    int autoCounter = 0; 
    globalCounter++;
    staticCounter++;
    autoCounter++;
    printf("Call %d\n", callNumber);
    printf("Global: %d\n", globalCounter);
    printf("Static: %d\n", staticCounter);
    printf("Auto: %d\n\n", autoCounter);
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        demonstrateCounters(i);
    }
  return 0;
}