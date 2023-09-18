#include<stdio.h>
//#include<>
typedef struct Book
{
int book_id;
char book_title[20];
double book_price;
}BOOK;
int main()
{
  BOOK l1;
  //printf("%d %s %lf\n",l1.book_id,l1.book_title,l1.book_price);
  printf("Enter Book details(book_id, book_title,book_price)\n");
  scanf("%d%s%lf",&l1.book_id,l1.book_title,&l1.book_price);
  printf("%d %s %lf\n",l1.book_id,l1.book_title,l1.book_price);
  return 0;
}
