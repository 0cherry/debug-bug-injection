<h1 align="center">Auto debugging simple example</h1>


## Buggy case 1
```
int hasBug(int a, int b) {
	if (a < b) { // bug: must be modified < to >
		a = 2*a;
	}
	else {
		b = 3*b;
	}
	return a + b;
}
```


## Buggy case 2
```
int hasBug2(int a, int b) {
	if (a > b) {
		a = 2*a;
	}
	else {
		b = 3*b;
	}
	a++; // bug: must be removed
	return a + b;
}
```