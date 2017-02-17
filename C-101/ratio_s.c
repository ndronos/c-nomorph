// (Klemens, 2015) Appendix A: C 101 pp. 349-350

#include <stdio.h>

typedef struct {
} ratio_s;

ratio_s new_ratio(int num, int den);

void print_ratio(ratio_s r);

ratio_s ratio_add(ratio_s left, ratio_s right);

int main() {
    ratio_s twothirds = new_ratio(2, 3);
    ratio_s aquarter = new_ratio(1, 4);
    print_ratio(twothirds);
    print_ratio(aquarter);
    print_ratio(ratio_add(twothirds, aquarter));
}

