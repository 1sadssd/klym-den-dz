#include <iostream>
#include <deque>

using namespace std;

void extendSequence(deque<int>& sequence, int n) {
    while (sequence.size() < n) 
    {
        int nextElement = sequence[sequence.size() - 3] + sequence[sequence.size() - 2] + sequence[sequence.size() - 1] - 1;
        sequence.push_back(nextElement);

        nextElement = sequence[2] - sequence[1] - sequence[0] + 1;
        sequence.push_front(nextElement);
    }
}

int main() 
{
    deque<int> sequence = { -13, 0, 10, -4, 6, 11, 12, 28, 50, 89, 166, 304 };

    int desiredSize = 96;
    extendSequence(sequence, desiredSize);

    for (int element : sequence) 
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
