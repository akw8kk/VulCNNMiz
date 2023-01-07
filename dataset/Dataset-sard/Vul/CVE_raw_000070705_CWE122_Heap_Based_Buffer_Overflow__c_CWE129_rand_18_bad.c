void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    goto VAR2;
VAR2:
    
    VAR1 = FUN2();
    goto VAR3;
VAR3:
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
            FUN4("");
        }
        free(VAR5);
    }
}