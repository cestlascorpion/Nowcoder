//
// Created by cestl on 2018/5/14 0014.
//

#include "Nowcoder045.h"

bool Nowcoder045::IsContinuous(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    int king = 0;
    int delta = 0;
    int index = 0;
    while (numbers[index] == 0) {
        ++king;
        ++index;
    }

    while (index + 1 < numbers.size()) {
        delta += numbers[index + 1] - numbers[index] - 1;
        ++index;
    }
    return delta <= king;
}

void Nowcoder045::test045() {
    vector<int> card;
    card = {2, 3, 4, 5, 6};
    cout << IsContinuous(card) << endl;
}
