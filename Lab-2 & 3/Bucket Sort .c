#include <stdio.h> 
int main() { int n; 

printf("ENTER NO. OF ELEMENTS: "); 

scanf("%d", &n); int arr[n]; 

printf("ENTER THE VALUES (0 to 100): "); 

for (int i = 0; i < n; i++) { scanf("%d", &arr[i]); 

} 

int bucket[101] = {0}; for (int i = 0; i < n; i++) { 

bucket[arr[i]]++; 

} 

printf("Sorted array: "); 

for (int i = 0; i <= 100; i++) { while (bucket[i] > 0) { 

printf("%d ", i); 

bucket[i]--; 

} 

} 

return 0; 

} 