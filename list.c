# include <stdio.h>
# include <stdlib.h>

int main (void)

//array can be done aswell 
//int list [3];
//lets do list  
{   
    // diynamically allocate an array of size 3 
    int *list = malloc (3* sizeof(int));
    if (list == NULL)
    {
        return 1 ;
    }
    //asign three numbrs to that array 
    list[0]= 1; 
    list[1]= 2;
    list[2]= 3;

    //time passes we need to add more list now or add it 
    
    //Resize old array to be size 4 
    ///int *tmp = malloc (4* sizeof(int));
    int *tmp = realloc(list, 4 *size of (int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }
    // copy numbers from old array into new array 
    
    //..for (int i = 0; i < 3; i++)
    //..{
    // .. tmp[i] = list[i];
    //..}

    //Add fourth number to new array 
    tmp[3]=4;

    //Free old array   
    //..free(list);
    
    //Remember new array 
    list = tmp;
    
    //print new array 
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    //Free new array 
    free(list);
    return 0;
}



