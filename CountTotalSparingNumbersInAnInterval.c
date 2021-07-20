int countSquareNumbersOnInterval(int a, int b) {
	return ((int)sqrt(b) - (int)sqrt(a)==0)? 0: (int)sqrt(b) - (int)sqrt(a)+1;

}
