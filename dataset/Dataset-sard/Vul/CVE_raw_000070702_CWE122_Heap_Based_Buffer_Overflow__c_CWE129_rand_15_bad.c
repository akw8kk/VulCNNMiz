void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    switch(6)
    {
    case 6:
        
        VAR1 = FUN2();
        break;
    default:
        
        FUN3("");
        break;
    }
    switch(7)
    {
    case 7:
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
                FUN4(VAR3[VAR2]);
            }
        }
        else
        {
            FUN3("");
        }
        free(VAR3);
    }
    break;
    default:
        
        FUN3("");
        break;
    }
}