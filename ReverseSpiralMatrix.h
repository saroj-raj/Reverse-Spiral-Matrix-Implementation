#include <iostream>
#include <vector>

class ReverseSpiralMatrix {
private:
    std::vector<std::vector<int>> matrix;
    int K;
    int rows, cols;
    int elementFound;

public:
    ReverseSpiralMatrix();

    void generateMatrix();
    void findElement();

    friend std::istream& operator>>(std::istream& is, ReverseSpiralMatrix& rsm);
    friend std::ostream& operator<<(std::ostream& os, const ReverseSpiralMatrix& rsm);
};
