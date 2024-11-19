#pragma once

void linearCongruentialMethod(long X0, long m, long a, long c, unsigned long* randomNums, int countNums);

void subtractWithBorrowGenerators(int lagA, int lagB, unsigned long* congruentialRandomNums, unsigned long* SWBGNums, int countNums);