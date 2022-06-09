
#include <stdio.h>

int sum(int x, int y);
int sum3(int x, int y, int z);
int sum4(int w, int x, int y, int z);

int sum(int x, int y) {
	return x + y;
}

int sum3(int x, int y, int z) {
	return x + y + z;
}

int sum4(int w, int x, int y, int z) {
	return w + x + y + z;
}
