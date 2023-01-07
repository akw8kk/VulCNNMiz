static void FUN1()
{
    int VAR1,VAR2;
    int VAR3;
    
    VAR3 = -1;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            char VAR4[VAR5] = "";
            
            if (fgets(VAR4, VAR5, stdin) != NULL)
            {
                
                VAR3 = FUN2(VAR4);
            }
            else
            {
                FUN3("");
            }
        }
    }
    for(VAR2 = 0; VAR2 < 1; VAR2++)
    {
        {
            int VAR1;
            int * VAR6 = (int *)malloc(10 * sizeof(int));
            
            for (VAR1 = 0; VAR1 < 10; VAR1++)
            {
                VAR6[VAR1] = 0;
            }
            
            if (VAR3 >= 0 && VAR3 < (10))
            {
                VAR6[VAR3] = 1;
                
                for(VAR1 = 0; VAR1 < 10; VAR1++)
                {
                    FUN4(VAR6[VAR1]);
                }
            }
            else
            {
                FUN3("");
            }
            free(VAR6);
        }
    }
}