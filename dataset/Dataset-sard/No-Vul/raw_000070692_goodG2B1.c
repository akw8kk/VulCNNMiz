static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(VAR2)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = 7;
    }
    if(VAR3)
    {
        {
            int VAR4;
            int * VAR5 = (int *)malloc(10 * sizeof(int));
            
            for (VAR4 = 0; VAR4 < 10; VAR4++)
            {
                VAR5[VAR4] = 0;
            }
            
            if (VAR1 >= 0)
            {
                VAR5[VAR1] = 1;
                
                for(VAR4 = 0; VAR4 < 10; VAR4++)
                {
                    FUN3(VAR5[VAR4]);
                }
            }
            else
            {
                FUN2("");
            }
            free(VAR5);
        }
    }
}