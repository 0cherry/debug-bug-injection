int hasBug(int a, int b) {
	if (a < b) {
		a = 2*a;
	}
	else {
		b = 3*b;
	}
	return a + b;
}

int callHasBug(int a, int b) {
	return hasBug(a, b);
}

int hasBug2(int a, int b) {
	if (a > b) {
		a = 2*a;
	}
	else {
		b = 3*b;
	}
	a++;
	return a + b;
}
