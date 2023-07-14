#include <cstdio>
using namespace std;

int main(void) {
	int x, y;
	int total = 0, max = 0;

	for (int i = 0; i < 4; i++) {
		scanf("%d %d", &x, &y);
		total += y - x;
		if (total > max) {
			max = total;
		}
	}
	printf("%d", max);
	
    return 0;
}