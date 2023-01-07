void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    goto VAR2;
VAR2:
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
    goto VAR5;
VAR5:
    {
        int VAR6;
        int VAR7[10] = { 0 };
        
        if (VAR1 >= 0)
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
    }
}