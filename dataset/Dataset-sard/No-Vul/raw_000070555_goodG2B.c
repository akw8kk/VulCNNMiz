static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(FUN2())
    {
        
        VAR1 = 7;
    }
    else
    {
        
        VAR1 = 7;
    }
    if(FUN2())
    {
        {
            int VAR2;
            int * VAR3 = (int *)malloc(10 * sizeof(int));
            
            for (VAR2 = 0; VAR2 < 10; VAR2++)
            {
                VAR3[VAR2] = 0;
            }
            
            if (VAR1 >= 0)
            {
                VAR3[VAR1] = 1;
                
                for(VAR2 = 0; VAR2 < 10; VAR2++)
                {
                    FUN3(VAR3[VAR2]);
                }
            }
            else
            {
                FUN4("");
            }
            free(VAR3);
        }
    }
    else
    {
        {
            int VAR2;
            int * VAR3 = (int *)malloc(10 * sizeof(int));
            
            for (VAR2 = 0; VAR2 < 10; VAR2++)
            {
                VAR3[VAR2] = 0;
            }
            
            if (VAR1 >= 0)
            {
                VAR3[VAR1] = 1;
                
                for(VAR2 = 0; VAR2 < 10; VAR2++)
                {
                    FUN3(VAR3[VAR2]);
                }
            }
            else
            {
                FUN4("");
            }
            free(VAR3);
        }
    }
}