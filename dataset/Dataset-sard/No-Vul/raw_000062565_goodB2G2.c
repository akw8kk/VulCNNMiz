static void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(1)
    {
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
    }
    if(1)
    {
        {
            int VAR4;
            int VAR5[10] = { 0 };
            
            if (VAR1 >= 0 && VAR1 < (10))
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
        }
    }
}