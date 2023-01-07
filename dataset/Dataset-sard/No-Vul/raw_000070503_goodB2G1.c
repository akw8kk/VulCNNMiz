static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(FUN2())
    {
        {
            char VAR2[VAR3] = "";
            
            if (fgets(VAR2, VAR3, stdin) != NULL)
            {
                
                VAR1 = FUN3(VAR2);
            }
            else
            {
                FUN4("");
            }
        }
    }
    if(FUN5())
    {
        
        FUN4("");
    }
    else
    {
        {
            int VAR4;
            int * VAR5 = (int *)malloc(10 * sizeof(int));
            
            for (VAR4 = 0; VAR4 < 10; VAR4++)
            {
                VAR5[VAR4] = 0;
            }
            
            if (VAR1 >= 0 && VAR1 < (10))
            {
                VAR5[VAR1] = 1;
                
                for(VAR4 = 0; VAR4 < 10; VAR4++)
                {
                    FUN6(VAR5[VAR4]);
                }
            }
            else
            {
                FUN4("");
            }
            free(VAR5);
        }
    }
}