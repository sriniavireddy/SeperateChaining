#include<stdio.h>

void main() {

int hashTable[10][20]={0};
int length[10]={0};
int i,j,n,num,hashValue;

printf("Enter the Number of numbers you want to add using separate chaining Hashing Technique \n");
scanf("%d", &n);

for(i=0;i<n;i++) {
    printf("Enter the number to insert into Hashtable \n");
    scanf("%d", &num);
    hashValue = num % 10;
    printf("The number %d is hashed to %d index \n", num, hashValue);
    length[hashValue] += 1;
    hashTable[hashValue][length[hashValue]] = num;
}

for(i=0;i<10;i++) {
  printf("printing the values hashed to index \n");
  printf("%d",i);
  if(length[i] == 0) {
    printf("->NULL");
  }
  for(j = 1; j < 20; j++) {
     if(hashTable[i][j] != 0)
        printf("->%d", hashTable[i][j]);
  }
    printf("\n");
}
}
