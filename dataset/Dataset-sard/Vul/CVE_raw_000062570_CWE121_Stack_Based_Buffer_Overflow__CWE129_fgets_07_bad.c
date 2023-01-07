void FUN1()
{
    int VAR1;
    
    VAR1 = -1;
    if(VAR2==5)
    {
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
    }
    if(VAR2==5)
    {
        {
            int VAR5;
            int VAR6[10] = { 0 };
            
            if (VAR1 >= 0)
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