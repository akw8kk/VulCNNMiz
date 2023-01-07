static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = 7;
    }
    if(FUN4())
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
                    FUN5(VAR3[VAR2]);
                }
            }
            else
            {
                FUN3("");
            }
            free(VAR3);
        }
    }
}