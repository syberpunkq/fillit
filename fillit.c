#include <stdio.h>
#include <stdlib.h>

typedef struct list{
	struct list *left;
	struct list *right;
	struct list *top;
	struct list *bottom;
	int value;
}	l_list;

l_list *new_list(l_list *left, l_list *right, l_list *top, l_list *bottom, int value)
{
	l_list *item;

	if(!(item = (l_list*)malloc(sizeof(l_list))))
		return(NULL);
	item->left = left;
	item->right = right;
	item->top = top;
	item->bottom = bottom;
	item->value = value;
	return (item);
}

int compare(int a[][8], int b[][8])
{
    int i = 0;

    while(i < 8)
    {
        if (a[0][i] < b[0][i])
            return 1;
        else if (a[0][i] > b [0][i])
            return -1;
        i--;
    }
    return (0);
}

l_list *create_matrix(int x, int y)
{
	int rows = y, cols = x;
	if (x < 1 || y < 1)
		return(NULL);
	l_list *first = new_list(NULL, NULL, NULL, NULL, 0);
	l_list *prev = first;
	while(cols > 1)
	{
		prev = new_list(prev, NULL, NULL, NULL, 0);
	}
	return (first);
}
void print_l_list(l_list *elem)
{
	printf("left: %p, right: %p, top: %p, bottom: %p, value: %d", elem->left, elem->right, elem->top, elem->bottom, elem->value);
}

int main()
{   
	l_list *first_elem = create_matrix(1,1);
	print_l_list(first_elem);
    /*
    int first[4][4];
    int second[4][4];

    int table1[8][8] = { '#','#','#','.','.','.','.','.' };
    int table2[8][8] = { '#','.','#','#','.','.','.','.' };
    printf("result = %d", compare(table2, table1));
    */
    return (0);

}
