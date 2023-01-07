static void FUN1()
{
    int VAR1,VAR2;
    int VAR3;
    
    VAR3 = -1;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR3 = 7;
    }
    for(VAR2 = 0; VAR2 < 1; VAR2++)
    {
        {
            int VAR4;
            int VAR5[10] = { 0 };
            
            if (VAR3 < 10)
            {
                VAR5[VAR3] = 1;
                
                for(VAR4 = 0; VAR4 < 10; VAR4++)
                {
                    FUN2(VAR5[VAR4]);
                }
            }
            else
            {
                FUN3("");
            }
        }
    }
}