#include <stdio.h>
#include <stdlib.h>

int i=0,j,x,a,arr[99];

void scanfile()
{
  FILE *f=fopen("data.txt","r");
  while(fscanf("data",%d\n,&a)!=EOF){
    arr[i]=a;
    i++;
  }
}

void bubblesort()
{
    int buffer;
    for(int j=0; j<i; j++) {
        for(int x=i-1 ; x>i;x--) {
        if(arr[x-1]>A[x]) {
          buffer=arr[x-1];
          arr[x-1]=arr[x];
          arr[x]=tmp;
        }
      }
    }
}

void printsorted()
{
   for(j=0;j<i;j++)
     printf("%d  ",arr[j]);

}

int main()
{
  scanfile();
  bubblesort();
  printsorted();
  system("pause");
  return 0;
}
