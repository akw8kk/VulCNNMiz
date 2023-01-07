static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(VAR2)
    {
        {
            char VAR3[VAR4] = "";
            
            if (fgets(VAR3, VAR4, stdin) != NULL)
            {
                
                VAR1 = FUN2(VAR3);
            }
            else
            {
                FUN3("");
            }
        }
    }
    if(VAR5)
    {
        
        FUN3("");
    }
    else
    {
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