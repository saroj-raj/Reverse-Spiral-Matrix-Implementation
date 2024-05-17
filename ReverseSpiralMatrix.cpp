#include "ReverseSpiralMatrix.h"
#include <cstdlib>

ReverseSpiralMatrix::ReverseSpiralMatrix() : K(0), rows(0), cols(0), elementFound(0) {}

void ReverseSpiralMatrix::generateMatrix() {
    matrix.resize(rows, std::vector<int>(cols, 0));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = rand() % 100;  // Let's assume random numbers between 0 and 99.
        }
    }
}

void ReverseSpiralMatrix::findElement() {
    generateMatrix();
    // Assuming even sized matrix will be picked from the middle
    int x = rows / 2, y = cols / 2;
    int dx = 0, dy = -1;
    int steps = 1, stepCount = 0, turnCount = 0;

    for (int i = 1; i <= rows * cols; ++i) {
        if (i == K) {
            elementFound = matrix[x][y];
            return;
        }

        if (--steps == 0) {
            if (++turnCount == 2) {
                turnCount = 0;
                stepCount++;
            }
            steps = stepCount;
            int temp = dx;
            dx = -dy;
            dy = temp;
        }

        x += dx;
        y += dy;
    }
}

std::istream& operator>>(std::istream& is, ReverseSpiralMatrix& rsm) {
    std::string dummy;
    is >> dummy >> rsm.K;
    char comma;
    is >> rsm.rows >> comma >> rsm.cols;
    return is;
}

std::ostream& operator<<(std::ostream& os, const ReverseSpiralMatrix& rsm) {
    os << "For matrix of size " << rsm.rows << "x" << rsm.cols << ", Kth(" << rsm.K << ") element is: " << rsm.elementFound << std::endl;
    return os;
}
