static void FUN1()
{
    int VAR1;
    int *VAR2 = &VAR1;
    int *VAR3 = &VAR1;
    
    VAR1 = -1;
    {
        int VAR1 = *VAR2;
        {
            char VAR4[VAR5] = "";
            
            if (fgets(VAR4, VAR5, stdin) != NULL)
            {
                
                VAR1 = FUN2(VAR4);
            }
            else
            {
                FUN3("");
            }
        }
        *VAR2 = VAR1;
    }
    {
        int VAR1 = *VAR3;
        {
            int VAR6;
            int * VAR7 = (int *)malloc(10 * sizeof(int));
            
            for (VAR6 = 0; VAR6 < 10; VAR6++)
            {
                VAR7[VAR6] = 0;
            }
            
            if (VAR1 >= 0 && VAR1 < (10))
            {
                VAR7[VAR1] = 1;
                
                for(VAR6 = 0; VAR6 < 10; VAR6++)
                {
                    FUN4(VAR7[VAR6]);
                }
            }
            else
            {
                FUN3("");
            }
            free(VAR7);
        }
    }
}