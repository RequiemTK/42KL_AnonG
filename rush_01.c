int main(void){

    char colup[4];
    char coldown[4];
    char rowleft[4];
    char rowright[4];

    int ft_try_rows(char *dest, const char *src, int size, int loc)
    { 
        int i;
        int j;

        i = 0;
        while (i < size){
            if (dest[i] == 0){
                j = 0;
                while (j < 4){
                    if (dest[i - (loc - j) * 4] == src[i]){
                        return (0);
                    }                    
                    j++;
                }
                dest[i] = src[i];
            }
            else if (dest[i] != src[i]){
                return (0);
            }
            i++;
        }
    }

    int ft_try_col(char *dest, const char *src, int size, int loc){
        int i;
        int j;

        i = 0;
        while (i < size){
            if (dest[i] * 4 == 0){
                j = 0;
                while (j < 4){
                    if (dest[i * 4 - (loc - j)] == src[i]){
                        return (0);
                        j++;
                    }
                }
                dest[i] = src[i];
            }
            else if (dest[i * 4] != src[i]){
                return (0);
            }
        }
    }

    ft_memcpy(char *dest, char *src, int size){
        int i;

        i = 0;
        while(i < size){
            dest[i] = src[i];
            i++;
        }
    }

    ft_solve_rows()
}

//grid looks like this
/*
0, 0, 0, 0, while any index is 0 we run this set rows function
0, 0, 0, 0,
0, 0, 0, 0,
0, 0, 0, 0
*/
int ft_check(char *grid){
    return (error);
}


void ft_write(char *comb, char *grid){

}

char *ft_lookup_table(int left, int right){
    return (comb) //takes in left and right and returns a combi. eg 1><4 : "4321"
}

void ft_solve(char *grid, char *input, int state){
    int error;
    int comb_state;
    char *comb;

    comb_state = 0;
      if (state == 0){
    comb = ft_lookup_table(input[16], input[24], comb_state);
    }
    else if (state == 1){
        comb = ft_lookup_table(input[18], input[26], comb_state);
    }
    ft_write(comb, grid);
    error = ft_check(grid);
    if (error){
        ft_clear_row(state);
        if (state == 0)
            comb = ft_lookup_table(input[16], input[24],comb_state + 1)//assume this comb_state will select next comb
        else(state == 1)
           comb = ft_lookup_table(input[18], input[26],comb_state + 1)//assume this comb_state will select next comb
    }
    ft_write(comb, grid);
    error = ft_check(grid);
    if (error){
        ft_clear_row(state);
        if (state == 0)
            comb = ft_lookup_table(input[16], input[24],comb_state + 2)//assume this comb_state will select next comb
        else(state == 1)
           comb = ft_lookup_table(input[18], input[26],comb_state + 2)
    }
    ft_solve(grid, input, state + 1)
}//NOTE : CONTINUE BY IMPLEMENTING WHILE LOOP


int main(){
    char grid[16];
    const char *input;//pretend this is input string given by user.
    ft_memset();//sets all grids to 0 function.
    ft_solve(grid, input, 0)
}