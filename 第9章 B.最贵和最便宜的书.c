#include<stdio.h>
#include<string.h>
struct book
{
    char name[1000];
    double price;
};
int main()
{
    int n,i,price_min,price_max,index_min,index_max;
    scanf("%d",&n);
    struct book books[n];


    for(i=0;i<n;i++)
    {
        gets(books[i].name);
        gets(books[i].name);
        scanf("%lf",&books[i].price);

    }
    price_min=price_max=books[0].price;
    index_min=index_max=0;
    for(i=0;i<n;i++)
    {
        if(price_min>books[i].price)
            {
                index_min=i;
                price_min=books[i].price;
            }

    }
    for(i=n-1;i>=0;i--)
    {

        if(price_max<books[i].price)
            {
                index_max=i;
                price_max=books[i].price;}
    }
    printf("%s\t%.2f\n",books[index_max].name,books[index_max].price);
    printf("%s\t%.2f",books[index_min].name,books[index_min].price);
}
