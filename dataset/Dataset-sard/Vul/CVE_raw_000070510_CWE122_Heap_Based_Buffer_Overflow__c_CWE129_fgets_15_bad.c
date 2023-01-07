void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    switch(6)
    {
    case 6:
    {
        char VAR2[VAR3] = "";
        
        if (fgets(VAR2, VAR3, stdin) != NULL)
        {
            
            VAR1 = FUN2(VAR2);
        }
        else
        {
            FUN3("");
        }
    }
    break;
    default:
        
        FUN3("");
        break;
    }
    switch(7)
    {
    case 7:
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
                FUN4(VAR5[VAR4]);
            }
        }
        else
        {
            FUN3("");
        }
        free(VAR5);
    }
    break;
    default:
        
        FUN3("");
        break;
    }
}