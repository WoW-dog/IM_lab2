
void linearCongruentialMethod(long X0, long m, long a, long c, unsigned long* randomNums, int countNums){
    randomNums[0] = X0;
    for (int i = 1; i < countNums; i++) {
        randomNums[i] = ((randomNums[i - 1] * a) + c) % m;
    }
}

void subtractWithBorrowGenerators(int lagA, int lagB, unsigned long* congruentialRandomNums, unsigned long* SWBGNums, int countNums) {
	for (int i = countNums - 1; i >= 0; i--){
		if (congruentialRandomNums[i + 2 * countNums - lagA] >= congruentialRandomNums[i + 2 * countNums - lagB]){
			SWBGNums[i] = congruentialRandomNums[i + 2 * countNums - lagA] - congruentialRandomNums[i + 2 * countNums - lagB];
		}
		else {
			SWBGNums[i] = congruentialRandomNums[i + 2 * countNums - lagB] - congruentialRandomNums[i + 2 * countNums - lagA];
		}
	}
}
