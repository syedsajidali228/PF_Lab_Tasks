#include <stdio.h>

int main() {
    long long total_records, missing_records, duplicate_records;
    printf("Enter total number of records: ");
    scanf("%lld", &total_records);

    if (total_records <= 0) {
        printf("Invalid Dataset\n");
        return 0;
    }

    printf("Enter number of missing records: ");
    scanf("%lld", &missing_records);
    printf("Enter number of duplicate records: ");
    scanf("%lld", &duplicate_records);

    double missing_pct = ((double)missing_records / total_records) * 100.0;
    double duplicate_pct = ((double)duplicate_records / total_records) * 100.0;

    printf("Missing Records Percentage: %.2f%%\n", missing_pct);

    if (missing_pct > 30.0) {
        printf("Poor Quality Dataset\n");
    } else if (duplicate_pct > 20.0) {
        printf("Dataset Requires Cleaning\n");
    } else {
        printf("Dataset Ready for Training\n");
    }

    return 0;
}
