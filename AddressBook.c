#include <stdio.h>
#include <stdlib.h>
#include <String.h>

#define MAX_CHARACTER  (256)

struct tag_address{
    int no;
    char name[MAX_CHARACTER];
    char addr[MAX_CHARACTER];
    struct tag_address *next;
};









int main(int argc,char *argv)
{

    struct tag_address *address_data;
    char in_buf[8];
    char in_no[MAX_CHARACTER];
    char in_addr[MAX_CHARACTER];
    char in_name[MAX_CHARACTER];
    char *c;
    int no,menu_no;
    
    


} 
