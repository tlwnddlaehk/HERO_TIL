#include <stdio.h>

main(){

  // 삽입 정렬
  // 첫번째의 다음부터 시작해서 앞에거랑 비교하기. 앞에거랑 비교해서 앞에게 더 크면 자리를 옮김

  int j, i, k, key;
  int a[10];

  j=-1;

  do{
    j++;
    scanf("%d", &a[j]);
  }whlie(j<9);

  for(i=1; i<=9; i++) { // 인덱스 1부터 시작했다.

    key=a[i];
    for(k=i-1; k >=0; k--){
      if(a[k] > key){
        a[k+1] = a[k];      
      }
      else{
        break; // 이동
      }
    }

    a[k+1] = key;  
  }

  // 85624가 있으면, 8부터 시작. 앞인 5가 더 작아? 58624로.
  // 6보다 8이 더 크니까 56824로. 5랑 6 비교하니 56824 그대로... (반복)


}