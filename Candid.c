#include <stdio.h>

int main() {
    int Count[]={NULL, NULL, NULL, NULL, NULL};
    int Sum;
    double Round_two [2]={0, 0 };
    double D[4];
    int my_Array[5][5]={
             {1, 191, 48, 206, 37}
            ,{2, 147, 90, 312, 21}
            ,{3, 187, 12, 121, 38}
            ,{4, 114, 21, 408, 39}
            ,{5, 267, 13, 382, 29}};
    printf("Precinct  *A*\t *B*\t *C*\t*D*\n");
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%d\t",my_Array[i][j]);
        }
        printf("\n");
        printf("---------------------------------------\n");
    } //Table View :)
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
        Count[i] += my_Array[j][i];
        }
        Sum += Count[i];
    } //Sum & Count
    Sum = Sum - Count[0];
    for (int i = 1; i < 5; ++i) {
        printf("\n The number of votes given to candidate %d is equal to %d votes.\n",i,Count[i]);
        printf("*******************************************************");
    } //Print Cost
    printf("\n Total number of votes cast : %d .\n\n",Sum);
    printf("----------------------------------------------------------------------------\n");
    for (int i = 1; i < 5; ++i) {
        D[i]= (double ) Count[i]*100/Sum;
        printf("Candidate No.%d received %.2lf%% percent of the vote.\n",i,D[i]);
        printf("*******************************************************\n");
    } //Print %
    for (int i = 1; i < 5; ++i) {
        for (int j = 1; j < 5; ++j) {
            if(D[j-1]>50.0){
                printf("Candidate No. %d has %d votes and has won %.2lf%% of the total votes and has been elected.",j-1,Count[j-1],D[j-1]);
                i = 5;
            }
        }
    }
    return 0;
}
