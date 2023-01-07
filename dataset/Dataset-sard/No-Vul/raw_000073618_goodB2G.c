static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
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
    {
        int VAR4 = VAR1;
        int VAR1 = VAR4;
        {
            int VAR5;
            int VAR6[10] = { 0 };
            
            if (VAR1 >= 0 && VAR1 < (10))
            {
                VAR6[VAR1] = 1;
                
                for(VAR5 = 0; VAR5 < 10; VAR5++)
                {
                    FUN4(VAR6[VAR5]);
                }
            }
            else
            {
                FUN3("");
            }
        }
    }
}