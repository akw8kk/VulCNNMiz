void FUN1()
{
    int VAR1,VAR2;
    int VAR3;
    
    VAR3 = -1;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR3 = 10;
    }
    for(VAR2 = 0; VAR2 < 1; VAR2++)
    {
        {
            int VAR1;
            int VAR4[10] = { 0 };
            
            if (VAR3 >= 0)
            {
                VAR4[VAR3] = 1;
                
                for(VAR1 = 0; VAR1 < 10; VAR1++)
                {
                    FUN2(VAR4[VAR1]);
                }
            }
            else
            {
                FUN3("");
            }
        }
    }
}