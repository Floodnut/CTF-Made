/*complile without protect option and make flag file that root or other has owned*/

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

struct Deal{
  char *stuff;
  int price;
};

void Suspici0us(){
  system("/bin/sh");
}

void Purchase(name, pr){
  printf("price of %s = $ %d \n",name, pr);
}

int main(int argc, char* argv[]){
  unsigned int menu;
  struct Deal *item_one = malloc(sizeof(struct Deal));
  struct Deal *item_two = malloc(sizeof(struct Deal));
  
  size_t order_num;
  char* order;
  while(1){
    printf("1. Purchase \n2. Nego\n3. Sell\nChoose you want : ");
    scanf("%2d".&menu);
    switch(menu){
      case 1:
        item_one->stuff = "Table";
        item_one->price = 700;
        Purchase(item_one->stuff,item_one->price);
        item_two->stuff = "Chair";
        item_two->price = 550;
        Purchase(item_two->stuff,item_two->price);
        break;
      case 2:
        order_num = atoi(argv[1]);
        order = (char)malloc(order_num);
        read(open(argv[2],O_RDONLY), order, order_num);
        puts("Order Check");
        break;
      case 3:
        free(item_one);
        free(item_two);
        break;
      default:
        puts("ERROR :  Input only 1, 2, 3 !!");
        break;
    }
    puts("");
  }
  return 0;
}
